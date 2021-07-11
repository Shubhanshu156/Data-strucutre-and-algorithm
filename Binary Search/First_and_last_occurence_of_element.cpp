#include<bits/stdc++.h>
using namespace std;
int first=-1;
int last=-1
//// for first index 
int BinarySearch(int arr[],int low,int end,int element){
    if (low>end)
    {
        return res;
        /* code */
    }
    int mid=(low+end)/2;
    if (arr[mid]==element)
    {
        /* code */
        //cout<<res<<endl;
        res=mid;
        return(BinarySearch(arr,low,mid-1,element));
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
///for last index
// int BinarySearch(int arr[],int low,int end,int element){
//     if (low>end)
//     {
//         return res;
//         /* code */
//     }
//     int mid=(low+end)/2;
//     if (arr[mid]==element)
//     {
//         /* code */
//         //cout<<res<<endl;
//         res=mid;
//         return(BinarySearch(arr,mid+1,end,element));
//     }
//     if (arr[mid]>element)
//     {
//         /* code */
//        return BinarySearch(arr,low,mid-1,element);
//     }
//     if (arr[mid]<element){
//         return(BinarySearch(arr,mid+1,end,element));
//     }
    
    
    
// }

int main(){
    int arr[]={1,2,3,3,5,6,7,8,9};
    int low=0;
    int end=sizeof(arr)/4;
    //cout<<end;
    int element=3;
   cout<<BinarySearch(arr,low,end,element);
}