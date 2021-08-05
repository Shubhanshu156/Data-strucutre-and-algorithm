#include<bits/stdc++.h>
using namespace std;
pair<int,int> find(vector<vector<int>> arr,int key){
    pair<int,int> p1;
    int n=arr.size();
    int i=0;
    int j=arr.size()-1;
    while (i<n-1 && j>=0)
    {
        /* code */
        if (arr[i][j]==key)
        {
            /* code */
            p1.first=i;
            p1.second=j;
            return p1;
        }
        else if (arr[i][j]>key)
        {
            /* code */
            j--;
        }
        else if (/* condition */arr[i][j]<key)
        {
            /* code */
            i++;
        }
        
        
        
    }
    p1.first=-1;
    p1.second=-1;
    return p1;
}
int main(){
    int a;


}