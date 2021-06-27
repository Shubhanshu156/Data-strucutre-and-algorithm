    #include<bits/stdc++.h>
#include<String>
using namespace std;
int dp[1000][1000];
bool topdown(string x,string y,int n,int m){
    int DP[n+1][m+1];
    memset(DP,-1,sizeof(DP));
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
        /* code */
        for (int j = 1; j <= m; j++)
        {
            if (x[i-1]==y[j-1])
            {
                DP[i][j]=DP[i-1][j-1]+1;
                
            }

            else
            {
                DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
            }
            
        }
        
    }
  //  cout<<"print:"<<DP[n][m]<<endl;
  //  cout<<"print"<<min(n,m)<<endl;
      
    return (min(n,m)==DP[n][m]);
    
}
    

int main(){
    memset(dp,-1,sizeof(dp));
    string x="axy";
    string y="abxcy";
    cout<<topdown(x,y,x.length(),y.length()); //so in this case we are justfinding lcs of string1,strin2
    //and if the length of lcs is equal to minimum to the length of string1,string2 then it is present
}