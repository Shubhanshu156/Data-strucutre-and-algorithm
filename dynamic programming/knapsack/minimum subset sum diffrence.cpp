#include<bits/stdc++.h>
using namespace std;
// we have to minimise s1-s2>>range-s2-s2>>range-2*s2
//so to mimise we have to find value of s2[0,range/2] such that range-2*s2 is minimum so we 
//check sum values on last lines 0,to range/2 and find range-2*s2 
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
for (int j = sum/2; j >=0; j--)//
{
    /* code */
    if (a[n][j]==1)
    {
       // cout<<j<<endl;
         return(sum-2*j) ;
    }
    
}

    
    

}

    int main(){
        
        
        int weight[51]={68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69, 48, 45};
        
        int sum=0;
        int capacity=11;
        int n=51;
        for (int i = 0; i < n; i++)
        {
            /* code */
            sum+=weight[i];
        }
        
 
       // cout<<sum<<endl;
        cout<<topdown(weight,sum,n)<<endl;
              
 
    }
