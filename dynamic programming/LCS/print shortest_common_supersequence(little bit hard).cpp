#include<bits/stdc++.h>
#include<String>
using namespace std;
//in this same as for printing lcs but in this case we are adding maximum to answewr string instead 
int dp[1000][1000];
string topdown(string x,string y,int n,int m){
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
            ans.push_back(x[i-1]); //an store the max
            i--;
        }
        else
        {
            ans.push_back(y[j-1]); //storing the max
            j-=1;
        }
    }
    while (i>0) // as it maybe possible that string1="as" and other is "" in that case we are pushing as 
    {
        ans.push_back(x[i-1]);
        i--;
    }
    while (j>0) // as it maybe possible that string1="" and other is "as" in that case we are pushing as until legth of "as" is 0
    {
        ans.push_back(y[j-1]);
        j--;
        
    }
    
   // reverse(ans.begin(),ans.end());
    return ans;
    
}
    

int main(){
    memset(dp,-1,sizeof(dp));
    string x="HELLO";
    string y="GEEK";
    string s=topdown(x,y,6,5);
    reverse(s.begin(),s.end());
    cout<<s;
}