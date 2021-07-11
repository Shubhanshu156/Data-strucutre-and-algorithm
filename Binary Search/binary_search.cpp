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
    if (arr[mid]>element)
    {
        /* code */
       return BinarySearch(arr,low,mid-1,element);
    }
    if (arr[mid]<element){
        return(BinarySearch(arr,mid+1,end,element));
    }
    
    
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int low=0;
    int end=sizeof(arr)/4;
    //cout<<end;
    int element=9;
   cout<<BinarySearch(arr,low,end,element);
}