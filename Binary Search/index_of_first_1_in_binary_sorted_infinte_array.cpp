#include<bits/stdc++.h>
using namespace std;
int res=-1;
int binarysearch(vector<int> bin,int low,int high,int target){
    if (low>high)
    {
        return res;
        /* code */
    }
    int mid=(low+high)/2;
    if (bin[mid]==1)
    {   res=mid;
        return(binarysearch(bin,low,mid-1,target));
        /* code */
    }
    if (bin[mid]==0)
    {
        /* code */
        return(binarysearch(bin,mid+1,high,target));
    }
    
    

    
}

int find(vector<int> bin,int low,int target=1){
    int high=1;
    while (bin[high]!=1)
    {
        low=high;
        high*=2;
        /* code */
    }
    return(binarysearch(bin,low,high,target));
    

}


int main(){

    //[0,0,0,0,0,0,1,1,1,1,1]
    vector<int> arr={0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    cout<<find(arr,0,1);
    // cout<<find()
}