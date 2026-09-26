// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n,k;
//     cin>>n>>k;
//     string str;
//     cin>>str;
//     for(int i=0;i<n;i++){
//         k%=26;    
//         if(str[i]-k<65){
//                 str[i]=91-(65-(str[i]-k));
//                 continue;
//             }
//             str[i]=str[i]-k;
        
        
//     }
//     cout<<str;

//     return 0;
// }
//C
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n,sum=0;
//     cin>>n;
//     vector<int> a;
//     for(int i=0;i<n;i++){
//         int tmp;
//         cin>>tmp;
//         if(tmp>=60){
//             a.push_back(tmp);
//             sum+=tmp;
//         }
//     }
//     cout<<sum<<"\n";
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     if(a.size()==0)
//     cout<<"-1";

//     return 0;
// }
//D
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n,com;
//     cin>>n;
//     queue<int> a;
//     while(n--){
//         cin>>com;
//         if(com==1){
//             int m;
//             cin>>m;
//             a.push(m);
//         }
//         if(com==2){
//             if(a.empty()){
//                 cout<<-1<<"\n";
//                 continue;
//             }
//             cout<<a.front()<<"\n";
//             a.pop();
//         }
//     }

//     return 0;
// }
//E
// #include<bits/stdc++.h>
// using namespace std;
// using pii=pair<int,int>;
// int main(void){

//     int n;
//     cin>>n;
//     int mx=0;
//     vector<pii> x;
    
//     while(n--){
//         int id,score;
//         cin>>id>>score;
        
//         if(score>mx){
//             x.clear();
//             x.push_back({id,score});
//             mx=score;
//         }
//         else if(score==mx){
//             x.push_back({id,score});
//         }
//     }
//     for(int i=0;i<x.size();i++){
//         cout<<x[i].first<<" "<<x[i].second<<"\n";
//     }

//     return 0;
// }

//F
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

    
//     int n;
//     cin>>n;
//     set<int> arr;
    
//     while(n--){
//         int tmp;
//         cin>>tmp;
//         arr.insert(tmp);


//     cout<<arr.size()<<"\n";
//     for(auto i : arr){
//         cout<< i <<" ";
//     }


//     return 0;
// }
//K
// #include<bits/stdc++.h>
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;
//     vector<pair<int,int>> a;
    
//     while(n--){
        
//         int id,fir,sec;
//         cin>>id>>fir>>sec;
//         a.push_back({fir,sec});

//     }
//     vector<int> ans;
//     int mx=0;
//     for(auto [f,s]:a){
//         if(f>mx){
//             ans.clear();
//             mx=f;
//         } 
//         if(f==mx){
//             bool first=true;
//             for(auto i:ans){
//                 if(i==s){
//                     first=false;
//                 }
//             }
//             if(first)ans.push_back(s);
//             mx=f;
//         } 
//     }
//     sort(ans.begin(),ans.end());
//     cout<<mx<<"\n";
//     for(auto i:ans){
//         cout<<i<<" ";
//     }

//     return 0;
// }
//G
// 某款線上遊戲配對系統正在處理玩家的進入與離開。
// 共有 N 個事件：
// - '1 id level'：代表玩家編號 id 與等級 level 加入等待佇列。
// - '2'：代表配對成功，將佇列中最前面的玩家匹配出去並輸出其資料。
// - '3 id'：代表將玩家 id 加入黑名單。
// 若玩家在等待過程中違規，其 id 會被放入黑名單集合。
// 在執行操作 '2' 叫號時，若佇列最前端的玩家已經存在於黑名單中，必須將其自動跳過（移出佇列且不輸出），直到找到第一個不在黑名單中的玩家為止。
// 若佇列中沒有可配對的玩家（或剩餘玩家都在黑名單中），操作 '2' 請輸出 '-1'。

// Input
// 第一行一個整數 N（1 ≤ N ≤ 105）。接下來 N 行，每行為一個指令：

// - '1 id level'（1 ≤ id, level ≤ 109）

// - '2'

// - '3 id'（1 ≤ id ≤ 109）

// Output
// 對於每一個 '2' 指令，輸出對應被成功配對玩家的 'id level'（中間以空格分隔，佔一行）。 若無人可配對則輸出 '-1'。

// Example
// InputCopy
// 5
// 1 300 20
// 3 300
// 1 500 10
// 2
// 2
// OutputCopy
// 500 10
// -1
#include<bits/stdc++.h>
using namespace std;
int main(void){

    int n;
    cin>>n;
    stack<int> sid;
    stack<int> slevel;

    while(n--){

        int a;
        cin>>a;
        if(a==1){
            int id,level;
            cin>>id>>level;
            sid.push(id);
            slevel.push(level);
        }
        if(a==2){
            cout<<sid.top()<<slevel.top()<<"\n";
            sid.pop();slevel.pop();
        }
        if(a==3){
            int id;
            cin>>id;
            sid.erase();
        }
    }

    return 0;
}
