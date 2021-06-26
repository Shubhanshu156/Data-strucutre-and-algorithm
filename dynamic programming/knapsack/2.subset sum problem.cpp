#include<bits/stdc++.h>
using namespace std;
    
int t[20][20];
int topdown(int array[],int sum,int n ){
    int a[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if (i==0){
                a[i][j]=0;
            }
            if (j==0){
                a[i][j]=1;
            }
        }
    }
    for (int i = 1; i < n+1; i++)
    {
        /* code */
        for (int j = 1; j < sum+1; j++)
        {
            /* code */
            if (array[i-1]<=j){
                a[i][j]=a[i-1][j-array[i-1]]||a[i-1][j];
            }
            else{
                a[i][j]=a[i-1][j];
            }
        }
        
    }
    return a[n][sum];
    
    

}

    int main(){
        
        
        int weight[20]={2,3,7,8,10};      
        int capacity=11;
        
        int n=5;
 
        
        cout<<topdown(weight,1,5)<<endl;
              
 
    }
