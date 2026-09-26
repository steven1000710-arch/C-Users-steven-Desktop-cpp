#include<bits/stdc++.h>
using namespace std;
void spinn(vector<vector<int>>&);//ai:改函式傳入值上下皆改
    int R,C;
int main(void){

    cin>>R>>C;
    vector<vector<int>> a(R,vector<int>(C));
    vector<vector<int>> b(R,vector<int>(C));
    for(auto &i : a)for(auto &j : i)cin>>j;
    for(auto &i : b)for(auto &j : i)cin>>j;
    int mxS=0,S=0;
    for(int k=0;k<5;k++){
        if(R!=C)break;//我只要執行正方形圖案
        spinn(a);
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(a[i][j]==b[i][j])S++;//ai:要歸零
            }
        }
        mxS=max(S,mxS);

        S=0;
    }
    for(int k=0;k<1;k++){
        if(R==C)break;//我只要執行長方形圖案
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(a[i][j]==b[i][j])S++;
            }
        }
        mxS=max(S,mxS);

        S=0;//歸零很重要 不要使它影響下次
        
        vector<vector<int>> tmp(R, vector<int>(C));//ai整份作

        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                tmp[i][j] = a[R-i-1][C-j-1];
            }
        }

        a = tmp;//ai翻轉鄭烈直接tmp相等更快
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(a[i][j]==b[i][j])S++;
            }
        }
        mxS=max(S,mxS);

        S=0;
    }
    int per=mxS*100/(R*C);
    cout<<per<<"%";

    return 0;
}
void spinn(vector<vector<int>> &a){//ai二維vector記得&&&
    vector<vector<int>>tmp(C,vector<int>(R));
    for(int i=0;i<C;i++){
        for(int j=0;j<R;j++){
            tmp[i][j]=a[R-j-1][i];
        }
    }
    a=tmp;//ai
}