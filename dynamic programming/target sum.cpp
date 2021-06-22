#include<bits/stdc++.h>
//https://leetcode.com/problems/target-sum/
//divide array into two subset[1,1,1,1,1]s1 contain only postive signs while s2 contain negative signs then count number of s1
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
                int sum=0;
        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            sum+=nums[i];
        }
    int n=nums.size();
    int newsum=(sum+target)/2;
        sum=newsum;
        int a[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if (i==0){
                a[i][j]=0;
            }
            if (j==0){
                a[i][j]=1;
            }
        }
    }
    for (int i = 1; i < n+1; i++)
    {
        /* code */
        for (int j = 1; j < sum+1; j++)
        {
            /* code */
            if (nums[i-1]<=j){
                a[i][j]=a[i-1][j-nums[i-1]]+a[i-1][j];
            }
            else{
                a[i][j]=a[i-1][j];
            }
        }
        
    }
    return a[n][sum];
        
    }
};