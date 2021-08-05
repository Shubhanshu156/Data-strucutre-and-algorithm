#include<bits/stdc++.h>
using namespace std;
int find(vector<int> arr,int target,int low){
    int high=1;
    while (target>arr[high])
    {
        low=high;
        high*=2;
        /* code */
    }
    cout<<low<<high<<endl;
    cout<<*(&arr[low])<<endl;
    cout<<binary_search(&arr[low],&arr[high],target)<<endl;
    return(binary_search(&arr[low],&arr[high],target)+low);
    



}
int main(){
    vector<int> a={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    cout<<find(a,12,0);
}