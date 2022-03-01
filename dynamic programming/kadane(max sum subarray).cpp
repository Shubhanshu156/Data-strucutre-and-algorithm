#include<bits/stdc++.h>
using namespace std;
   int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(auto it:nums){
            sum+=it;
            maxi=max(maxi,sum);
            if (sum<0) sum=0;

            
        }    
        return maxi;
        
    }

int main(){
    vector<int>sub={-5,1,-2,3,-1,2,-2};
    cout<<maxSubArray(sub);


}