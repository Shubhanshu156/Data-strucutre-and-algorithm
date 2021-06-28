#include<bits/stdc++.h>
using namespace std;
int DP[1000][1000];
int solve(int arr[],int i,int j)
{
    if (DP[i][j]==-1)
    {
    
        if (i>=j) //since arr[i],arr[i-1] represent matrix size so if i> and even equal then return
        {
            return 0;
        }
        int mini=INT_MAX;  
            for (int k=i; k<=j-1; k++)
            {
                int temp=0;
                temp=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];   //cost of matrix will be
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
    int arr[]={40,20,30,10,30};
    cout<<solve(arr,1,4);
return 0;
}