#include<bits/stdc++.h>
#include<String>
using namespace std;
int dp[1000][1000];
 int topdown(string x,string y,int n,int m){
    int result=0;
    int DP[n+1][m+1];
    for(int i = 0; i <=n; i++)
    {
        for(int j = 0; j <=m; j++)
        {
            if (i==0||j==0)
            {
                DP[i][j]=0;
            }
            
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i-1]==y[j-1])
            {
                DP[i][j]=DP[i-1][j-1]+1;
                result=max(DP[i][j],result);   
            }
            else
            {
                DP[i][j]=0; //sice we want continous so we make 0 and again start couting
            }   
        }
    }
 
      
    return result;
    
}
    

int main(){
    memset(dp,-1,sizeof(dp));
    string x="abcdgh";
    string y="abcdefgh";
    cout<<topdown(x,y,6,8);
}