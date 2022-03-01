#include<bits/stdc++.h>
using namespace std;
// this code doesnt give desired output becoz i have used vector instead of array
//take two array one left one right
//left array contain greatest number in current index
//right array stores greatest number in right side of current index
//then water store is min(left,right)-height of block
int rainwater(vector<int> arr){
    vector<int> maxl;
    int n=arr.size();
    vector<int> maxR;
    maxR[arr.size()-1]=arr[arr.size()-1];
    // cout<<maxR[]
    maxl.push_back(arr[0]);
    cout<<maxl[0]<<endl;
// //cout<<"hi";
    for (int i = 1; i <arr.size(); i++)
    {
      //  cout<<i<<endl;
        maxl[i]=max(maxl[i-1],arr[i]);
        cout<<maxl[0];
        /* code */
    }
    // cout<<909;

    for (int i = arr.size()-2; i>=0; i--)
    {
        maxR[i]=max(maxR[i+1],arr[i]);
        /* code */
    }

    // formula for finding is min(maxl,rightl)-arr at that point
    vector<int> water;
    int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        water[i]=min(maxl[i],maxR[i])-arr[i];
        //sum+=water[i];
        /* code */
    }
    cout<<sum;
    return sum;
    

}
int main(){
    vector<int> arr={2,0,2};
    cout<<rainwater(arr);
}