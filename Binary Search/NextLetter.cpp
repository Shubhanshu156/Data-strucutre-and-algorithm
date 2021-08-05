#include<bits/stdc++.h>
using namespace std;
int res=-1;
int nextletter(vector<char>arr,int low,int high,char key){
    if (low>high)
    {
        return res;
        /* code */
    }
    
    int mid=(low+high)/2;
    if (arr[mid]==key){
        low=mid+1;
        return(nextletter(arr,low,high,key));
    }
    else if(arr[mid]>key)
    {
        res=mid;
        return(nextletter(arr,low,mid-1,key));
        /* code */
    }
    else{
        return(nextletter(arr,mid+1,high,key));
    }    
    

}
int main(){
    vector<char> a={'a','b','c','d'};
    int inde=nextletter(a,0,a.size(),'b');
    cout<<a[inde];

}