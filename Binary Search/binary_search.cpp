#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int low,int end,int element){
    if (low>end)
    {
        return -1;
        /* code */
    }
    int mid=(low+end)/2;
    //cout<<arr[mid]<<endl;
    if (arr[mid]==element)
    {
        /* code */
        return mid;
    }
    if (arr[mid]>element)
    {
        /* code */
       return(BinarySearch(arr,low,mid-1,element));
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
    //cout<<end<<endl;
    int element=134;
    int hi=3;
    cout<<arr[9]<<endl;
    cout<<arr[10];
   //cout<<BinarySearch(arr,low,end,123);
//    cout<<hi;
}