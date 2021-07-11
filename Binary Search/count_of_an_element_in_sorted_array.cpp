#include<bits/stdc++.h>
using namespace std;
int first=-1;
int last=-1;
//// for first index 
int FBinarySearch(int arr[],int low,int end,int element){
    if (low>end)
    {
        return first;
        /* code */
    }
    int mid=(low+end)/2;
    if (arr[mid]==element)
    {
        /* code */
        //cout<<first<<endl;
        first=mid;
        return(FBinarySearch(arr,low,mid-1,element));
    }
    if (arr[mid]>element)
    {
        /* code */
       return FBinarySearch(arr,low,mid-1,element);
    }
    if (arr[mid]<element){
        return(FBinarySearch(arr,mid+1,end,element));
    }
    
    
    
}
///for last index
int LBinarySearch(int arr[],int low,int end,int element){
    if (low>end)
    {
        return last;
        /* code */
    }
    int mid=(low+end)/2;
    if (arr[mid]==element)
    {
        /* code */
        //cout<<last<<endl;
        last=mid;
        return(LBinarySearch(arr,mid+1,end,element));
    }
    if (arr[mid]>element)
    {
        /* code */
       return LBinarySearch(arr,low,mid-1,element);
    }
    if (arr[mid]<element){
        return(LBinarySearch(arr,mid+1,end,element));
    }
    
    
    
 }

int main(){
    int arr[]={1,2,3,3,3,6,7,8,9};
    int low=0;
    int end=sizeof(arr)/4;
    //cout<<end;
    int element=3;
    int cnt=LBinarySearch(arr,low,end,element)-FBinarySearch(arr,low,end,element)+1; //here formula is lASToccurence-firstoccurence+1
    cout<<cnt;
}