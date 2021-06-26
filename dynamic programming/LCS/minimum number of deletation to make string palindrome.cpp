#include<bits/stdc++.h>
#include<String>
using namespace std;
int dp[1000][1000];
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
    string ans="";
    int i=n,j=m;
    
    while (i>0&&j>0) // i we reach start of table then leave
    {
        if (x[i-1]==y[j-1])  //is string are equal then we will rech its diagonal upper  block
        {
            ans.push_back(x[i-1]);
            i-=1;
            j-=1;
        }
        else if (DP[i-1][j]>DP[i][j-1]) // if not equal then we will move to upper and left which is maximum
        {
            i-=1;
        }
        else
        {
            j-=1;
        }
    }
   // return ans;
    return(n-ans.length());//minimum number of deletation will be legth of length of a string-longest palindromic subsequence
    
}
    

int main(){
    memset(dp,-1,sizeof(dp));
    string x="abcbaa";
    string y=x;
    reverse(y.begin(),y.end());
    int s=topdown(x,y,6,6); //lcs of string1 with its reverse will be longest plaindromic subsequence
    //reverse(s.begin(),s.end());
    cout<<s;
}