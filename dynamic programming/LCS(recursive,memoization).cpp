#include<bits/stdc++.h>
#include<String>
using namespace std;
int dp[1000][1000];
int recursive(string x,string y,int n,int m){
    if (n==0||m==0) //think of smallest base case that is if legthis 0 so return 0 ex x="" y="as" then ans is 0
    {
        return(dp[n][m]=0);
        /* code */
    }
    if (dp[n][m]!=-1)
    {
        return dp[n][m];
    }   
    
    else
    {
        if (x[n-1]==y[m-1])  //if their last part is common asd,xsd so we will called for rest of string
                            // and we have found one common so add 1
        {
            return(dp[n][m]=recursive(x,y,n-1,m-1)+1);
        }
        else   // last part is not common so we will call for function "abcdgh","abcdfhr" that may be possible
                //whole x matches with y-1 string(abcdfh) or whole y matches with x-1 string(ex abcdfhr,abcdgh)
        {
            return(dp[n][m]=max(recursive(x,y,n,m-1),recursive(x,y,n-1,m)));
        }
        
    }
}
int topdown(string x,string y,int n,int m){
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
      
    return DP[n][m];
    
}
    

int main(){
    memset(dp,-1,sizeof(dp));
    string x="abcdgh";
    string y="abcdh";
    cout<<topdown(x,y,6,5);
}