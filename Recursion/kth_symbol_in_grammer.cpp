#include<bits/stdc++.h>
using namespace std;
int grammer(int n,int k){
    if (n==1)
    {

        
        return 0;
        /* code */
    }
    int mid=pow(2,n-1)/2;
    if (k<=mid)
    {
        return grammer(n-1,k);
        /* code */
    }
    else
    {
        int rem=k%mid;
        return 1-grammer(n-1,rem);
        /* code */
    }
    
    
    
}
int main(){
    cout<<grammer(4,5);
}