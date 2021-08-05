#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int low,int end,int element){
    if (low>end)
    {
        return -1;
        /* code */
    }
    int mid=(low+end)/2;
    if (arr[mid]==element)
    {
        /* code */
        return mid;
    }
    if (mid-1>=low && arr[mid-1]==element)
    {
        /* code */
        return mid-1;
    }
    if (mid+1<=end && arr[mid+1]==element)
    {
        /* code */
        return mid+1;
    }
    if (arr[mid]>element)
    {
        /* code */
       return BinarySearch(arr,low,mid-2,element);
    }
    if (arr[mid]<element){
        return(BinarySearch(arr,mid+2,end,element));
    }
    
    
    
}

int main(){
    int arr[]={5,10,30,20,40};
    int low=0;
    int end=sizeof(arr)/4;
    //cout<<end;
    int element=30;
   cout<<BinarySearch(arr,low,end,element);
}
// array is given 