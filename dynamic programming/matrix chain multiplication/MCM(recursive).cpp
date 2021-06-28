#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int i,int j){
    if (i<=j)
    {
        return(0);
        /* code */
    }
    int mn=INT_MAX;
    
    
        for (int k=i; k<=j-1; k++)
        {
            int temp=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
            temp=min(temp,mn);

        }
        
        
    
    
    return mn;
    
}


int main()
{
    int arr[]={40,20,30,10,30};
    cout<<solve(arr,1,4);
return 0;
}