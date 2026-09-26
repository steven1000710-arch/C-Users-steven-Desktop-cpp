#include<bits/stdc++.h>
using namespace std;
struct event{
    int time , type , id;
};
bool operator < ( event A , event B ){
    if(A.time != B.time) return A.time < B.time ;
    return A.type < B.type;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<event> events;

    for( int i=0 ; i<n ; i++ ){
        int l , r;
        cin >> l >> r;
        events.emplace_back(event ({l,0,i}));
        events.emplace_back(event ({r,2,i}));
    }
    int q;
    cin >> q;

    for( int i = 0 ; i < q ; i++ ){
        int x;
        cin >> x ;
        events.emplace_back(event ({x,1,i}));
    }
    sort( events.begin() , events.end() );
    int cnt = 0;
    vector<int> ans ( q ) ;

    for(auto [ time , type , id ] : events){
        if(type == 0) cnt++;
        else if(type == 2) cnt--;
        else ans[id] = cnt;
    }
    
    for(int i=0 ; i < q ; i++) cout << ans[i];

    return 0;
}
//第一版
// int ans=0;
// int cur=0;
// int lst=-1;//ai advise
// for(auto [x,diff] : events){
//     if(cur > 0)ans += x - lst;
//     cur += diff;
//     lst = x;
// }
// cout << ans;
//第二版 詢問聯集
// #include<bits/stdc++.h>
// using namespace std;
// using pii = pair<int,int>;
// int main(){

//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin>>n;
//     vector<pii> events;
//     for(int i=0 ; i<n ; i++){
//         int l,r;
//         cin >> l >> r;
//         events.emplace_back(l,1);
//         events.emplace_back(r,-1);
//     }
//     sort(events.begin(),events.end());
//     bool ans=true;
//     int cnt=0;
//     for(int i=0;i<events.size();){
//         int x=events[i].first;

//         for(;i<events.size() && events[i].first==x;i++)
//             cnt+=events[i].second;
//         if(i < events.size() && cnt==0)ans=false;
//     }
//     cout<<ans;

//     return 0;
// }