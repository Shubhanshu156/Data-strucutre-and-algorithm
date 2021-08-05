#include<bits/stdc++.h>
using namespace std;

//  after binary search low and high pointers will indicate to left and right of that target 
int binarysearch(vector<int> arr,int low,int high,int target){
    if (low>high)
    {
       // cout<<low<<high<<endl;
        return min(target-arr[high],arr[low]-target);
        /* code */
    }
    int mid=(low+high)/2;
    if (arr[mid]==target)
    {
        /* code */
        return 0;
    }
    if (arr[mid]>target)
    {
        /* code */
        return(binarysearch(arr,low,mid-1,target));
    }
    if (arr[mid]<target)
    {
        /* code */
        return(binarysearch(arr,mid+1,high,target));
    }
    
    

    
}


int main(){

vector<int> arr={1, 3,5,18, 19, 25};
cout<<binarysearch(arr,0,arr.size(),17);


}