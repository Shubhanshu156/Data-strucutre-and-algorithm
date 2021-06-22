#include<bits/stdc++.h>
using namespace std;
    
int t[20][20];
int topdown(int weight[],int val[],int capacity,int n ){
    int a[n+1][capacity+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < capacity+1; j++)
        {
            if (i==0||j==0){
                a[i][j]=0;
            }
        }
    }
    for (int i = 1; i < n+1; i++)
    {
        /* code */
        for (int j = 1; j < capacity+1; j++)
        {
            /* code */
            if (weight[i-1]<=j){
                a[i][j]=min(val[i-1]+a[i-1][j-weight[i-1]],a[i-1][j]);
            }
            else{
                a[i][j]=a[i-1][j];
            }
        }
    
        
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; i < capacity+1; i++)
        {
            /* code */
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
        
        /* code */
    }
    
}
    int knapsack(int weight[],int val[],int capacity,int n ){
        if (capacity==0||n==0){ //recursive function base condition will be initlisation of top down
            return 0;
            
        }
        if (t[capacity][n]!=-1){
            return t[n][capacity];
        }
        if (weight[n-1]<=capacity){
            return t[n][capacity]=max(val[n-1]+knapsack(weight,val,capacity-weight[n-1],n-1),knapsack(weight,val,capacity,n-1));//it to find max if wee include that or not
        }
        else{
            return t[n][capacity]=knapsack(weight,val,capacity,n-1);
        }
        }
    int main(){
        memset(t,-1,sizeof(t));
        
        int weight[20]={1,2,3};
        int val[]={3,4,5};
        int capacity=6;
        int n=3;
        cout<<sizeof(t)<<endl;
        
        cout<<knapsack(weight,val,capacity,n)<<endl;
              
    
       for (int i = 0; i < 3; i++)
       {
           /* code */
           for (int j = 0; j < 3; j++)
           {
               /* code */
               cout<<t[i][j]<<" ";
           }
           cout<<endl;
       }
    }
