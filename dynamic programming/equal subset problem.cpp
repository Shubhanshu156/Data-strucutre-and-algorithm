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
        
        
        int weight[4]={2,3,9,8};
        int sum=0;
        for (int i = 0; i < sizeof(weight)/sizeof(weight[0]); i++)
        {
            /* code */
            sum+=weight[i];
        }
        
        if (sum%2==0){
        int capacity=10;
        int n=5;
        int newsum=0;
        //newsum=sum/2;
        
        bool cond=topdown(weight,sum/2,5);
        if (cond){
            cout<<"yes its is possible";
        }
        
              
        }
    else{
        cout<<"not possible";
    }
    }
 