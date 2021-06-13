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
    vector<int>s1;
   // //cout<<"welceom";
    for (int k = 0; k<=sum/2; k++)
    {
        ////cout<<k<<endl;
        if (a[n][k]==1)
        {
           s1.push_back(k);
            
        }
    ////cout<<sum-2*s1[sizeof(s1)/sizeof(s1[0])];
        
    }
   // //cout<<sum<<endl;
   for (int l = 0; l <s1.size(); l++)
   {
       /* code */
       cout<<s1[l]<<" ";
   }
   
  //cout<<sum-2*(*max_element(s1.begin(), s1.end()));
    cout<<endl;
    return (sum-2*(*max_element(s1.begin(), s1.end())));
    
    

}

    int main(){
        
        
        int weight[6]={3, 1, 4, 2, 2, 1};
        int range=0;
        for (int i = 0; i < sizeof(weight)/sizeof(weight[0]); i++)
        {
            /* code */
            range+=weight[i];
        }
      cout<<"sum is"<<range<<endl;
        cout<<topdown(weight,range,4);


    }
 