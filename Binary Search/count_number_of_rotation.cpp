#include<bits/stdc++.h>
using namespace std;
int length;
//int rotation=0 is this nine is not forever at least we are togethr i kno i am not
int BinarySearch(int arr[],int start,int end){
    if (start>end)
    {
        return 0;
        /* code */
    }
   /// int length=sizeof(arr)/4;
    int mid=(start+end)/2;
    int left=(mid-1+length)%length;
    int right=(mid+1)%length;
    if ((arr[mid]<=arr[left]) && (arr[mid]<=arr[right])) 
    {
        /* code */
        return mid;
    }
    if (arr[mid]>arr[start])
    {
        /* code */
       return BinarySearch(arr,mid+1,end);
    }
    else if (arr[mid]<arr[end])
    {
        /* code */
        return(BinarySearch(arr,start,mid-1));

    }
    
    
    
}

int main(){
    int arr[]={3,4,5,6,7,8,9,1,2};
    length=sizeof(arr)/4;
    int start=0;
    int end=sizeof(arr)/4;
    //cout<<end;
  //  int start=9;
   cout<<length-BinarySearch(arr,start,end);
}