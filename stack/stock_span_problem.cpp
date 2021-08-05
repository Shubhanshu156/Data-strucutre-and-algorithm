#include<bits/stdc++.h>
using namespace std;
// this a problem  to find large number nearest to left
vector<int> find(vector<int> arr){
    stack<pair<int,int>> s; //first for element and second for index 
    vector<int> result;
    for (int i = 0; i<arr.size(); i++)  // this time we are running loop from left to right
    {
        /* code */
        if (s.empty())   //if stack is empty add result to -1
        {
            result.push_back(-1);

            /* code */
        }
        else if (s.size()>0 && (s.top()).first>arr[i])  //if top of stack is greater so add to result
        {
            // s.push(arr[i]);
            result.push_back(s.top().second);
            /* code */
        }
        


        else if (s.size()>0 && s.top().first<arr[i]) //if top of stack is less than arr[i] 
        {
            while (s.size()>0 and s.top().first<arr[i]) // so remove till top of stack is less than arr[i]
            {
                /* code */
                s.pop();
            }
            if (s.size()==0) // so after removing top of stack continously if size is 0 mean no element is greater than arr[i] so add -1 to vector
            {
                result.push_back(-1);
                /* code */
            }
            else
            {
                
                result.push_back(s.top().second); //now size top of stack is greater than arr[i] add this to result
            }
            
            
            
            
            /* code */
        }
        s.push({arr[i],i}); // after processing for each arr[i] add this element to stack
        
        
    }
   // reverse(result.begin(),result.end()); //now need to reverse this time
    for (int i = 0; i < result.size(); i++)
    {
        /* code */
        result[i]=i-result[i];
    }
    
    return result;
    
}
int main(){
    vector<int> v={100,80,60,70,60,75,85};
    // cout<<find(v);
    vector<int> res=find(v);
    for (int i = 0; i < res.size(); i++)
    {
        /* code */
        cout<<res[i]<<" ";
    }
    

}



// 1,3,2,4
/*is this nine is not forever at least we are together i know i am not alone its time to find my way back home see yiu is hti nine is not forever at least we*/