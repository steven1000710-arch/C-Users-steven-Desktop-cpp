// //A
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

    
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }

//     return 0;
// }
// // B
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n,ans=0;
//     cin>>n;
//     vector<int> arr;
//     while(n--){
//         int tmp;
//         cin>>tmp;
//         if(tmp%2==0)ans++;
//     }
//     cout<<ans;

//     return 0;
// }
// //C
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i*j<<" \n"[j==n];
//         }
//     }

//     return 0;
// }
// //D
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n;
//     cin>>n;
//     bool ans=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0)ans=false;
//     }
//     if(ans)cout<<"Yes";
//     else cout<<"No";

//     return 0;
// }
//E
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     string a;
//     cin>>a;
//     bool first=true;
//     for(int i=0;i<a.size()/2;i++){
//         swap(a[i],a[a.size()-i-1]);
//     }
//     for(int i=0;i<a.size();i++){
//         if(!first)cout<<a[i];
//         else {
//             if(a[i]!='0'){
//                 cout<<a[i];
//                 first=false;
//             }
//         }
//     }
    
//     return 0;
// }
//F
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n;
//     cin>>n;
//     stack<int> sta;
//     for(int i=0;i<n;i++){
//         int tmp;
//         cin>>tmp;
//         sta.push(tmp);
//     }
//     for(int i=0;i<n;i++){
//         cout<<sta.top()<<" ";
//         sta.pop();
//     }

//     return 0;
// }
//G
// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;
// int main(void){

//     ll n,sum=0;
//     cin>>n;
//     vector<ll> arr;
//     for(int i=0;i<n;i++){
//         ll tmp;
//         cin>>tmp;
//         sum+=tmp;
//         arr.push_back(tmp);
//     }

//     sum/=n;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>sum)ans++;
//     }
//     cout<<ans;

//     return 0;
// }
//H
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         int tmp;
//         cin>>tmp;
//         arr.push_back(tmp);
//     }
//     int ans=0;
//     for(int i=1;i<n-1;i++){
//         if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])ans++;
//     }
//     cout<<ans;

//     return 0;
// }
//I
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){

//     int N,K;
//     cin>>N>>K;
//     vector<int> arr(K+1,0);
//     while(N--){
//         int tmp;
//         cin>>tmp;
//         arr[tmp]++;
//     }
//     for(int i=1;i<=K;i++){
//         cout<<arr[i]<<"\n";
//     }

//     return 0;
// }
//J
// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;
// int main(void){

//     int n,m;
//     cin>>n>>m;
//     vector<ll> sum(n+1,0);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             ll tmp;
//             cin>>tmp;
//             sum[i]+=tmp;
//         }

//     }
//     for(int i=0;i<n;i++){
//         cout<<sum[i]<<"\n";
//     }

//     return 0;
// }
//K
#include<bits/stdc++.h>
using namespace std;
int main(void){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    vector<vector<int>> brr(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tmp;
            cin>>tmp;
            arr[i][j]=tmp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(auto i : brr){
        for(auto j : i){
            cout<<j<<" ";
        } 
        cout<<"\n";
    }

    return 0;
}