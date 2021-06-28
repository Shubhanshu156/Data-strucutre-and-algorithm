#include<bits/stdc++.h>
using namespace std;
int DP[1000][1000];
bool isplaindrome(string s,int i, int j)
{
    while (i<j)
    {
        /* code */
        if (s[i++]!=s[j--])
        {
            /* code */
            return false;
        }
    return true;
        
        
    }
    
    
    
}
int solve(string s,int i,int j)
{
    if (DP[i][j]==-1)
    {
    
        if (i>=j) 
        {
            return 0; 
        }
        if (isplaindrome(s,i,j)==true)
        {
            return 0;
        }
    
        
        int mini=INT_MAX;  
        int left=0,right=0;
            for (int k=i; k<=j-1; k++) //storing for each call
            {
                if (DP[i][k]!=-1)
                {
                    /* code */
                    left=DP[i][k];
                }
                if (DP[i][k]==-1)
                {
                    /* code */
                     left=solve(s,i,k);
                }
                if (DP[k+1][j]!=-1)
                {
                    /* code */
                     right=DP[k+1][j];
                }
                if (DP[k+1][j]==-1)
                {
                    /* code */
                     right=solve(s,k+1,j);
                }
                
                
                int temp=0;
                temp=left+right+1;  
                mini=min(temp,mini);
                

            }
        return (DP[i][j]=mini);
    }
    else
    {
        return DP[i][j];
    }
    
    
}


int main()
{
    memset(DP,-1,sizeof(DP));
    string s="nitil";
    cout<<solve(s,0,4);
return 0;
}