#include<bits/stdc++.h>
using namespace std;
vector<int> find(vector<int> arr){
    stack<int> s;
    vector<int> result;
    for (int i = arr.size()-1; i>=0; i--) //run a loop from left to right
    {
        /* code */
        if (s.empty())   //if stack is empty add result to -1
        {
            result.push_back(-1);

            /* code */
        }
        else if (s.size()>0 && s.top()<arr[i])  //if top of stack is lesser so add to result
        {
            // s.push(arr[i]);
            result.push_back(s.top());
            /* code */
        }
        


        else if (s.size()>0 && s.top()>arr[i]) //if top of stack is less than arr[i] 
        {
            while (s.size()>0 and s.top()>arr[i]) // so remove till top of stack is less than arr[i]
            {
                /* code */
                s.pop();
            }
            if (s.size()==0) // so after removing top of stack continously if size is 0 mean no element is lesser than arr[i] so add -1 to vector
            {
                result.push_back(-1);
                /* code */
            }
            else
            {
                
                result.push_back(s.top()); //now size top of stack is lesser than arr[i] add this to result
            }
            
            
            
            
            /* code */
        }
        s.push(arr[i]); // after processing for each arr[i] add this element to stack
        
        
    }
    reverse(result.begin(),result.end());
    return result;
    
}
int main(){
    vector<int> v={4,5,2,10,8};
    // cout<<find(v);
    vector<int> res=find(v);
    for (int i = 0; i < res.size(); i++)
    {
        /* code */
        cout<<res[i]<<" ";
    }
    

}



// 4,5,2,10,8