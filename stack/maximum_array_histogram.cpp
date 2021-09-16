#include<bits/stdc++.h>
using namespace std;
vector<int> findL(vector<int> arr){      
    stack<pair<int,int>> s;
    vector<int> result;
    for (int i = 0; i<arr.size(); i++) //run a loop from left to right
    {
        /* code */
        if (s.empty())   //if stack is empty add result to -1
        {
            result.push_back(-1);

            /* code */
        }
        else if (s.size()>0 && s.top().first<arr[i])  //if top of stack is lesser so add to result
        {
            // s.push(arr[i]);
            result.push_back(s.top().second);
            /* code */
        }
        


        else if (s.size()>0 && s.top().first>arr[i]) //if top of stack is less than arr[i] 
        {
            while (s.size()>0 and s.top().first>arr[i]) // so remove till top of stack is less than arr[i]
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
                
                result.push_back(s.top().second); //now size top of stack is lesser than arr[i] add this to result
            }
            
            
            
            
            /* code */
        }
        s.push({arr[i],i}); // after processing for each arr[i] add this element to stack
        
        
    }
    //reverse(result.begin(),result.end());
    return result;
    
}


vector<int> findR(vector<int> arr){
    stack<pair<int,int>> s;
    vector<int> result;
    for (int i = arr.size()-1; i>=0; i--) //run a loop from left to right
    {
        /* code */
        if (s.empty())   //if stack is empty add result to -1
        {
            result.push_back(-1);

            /* code */
        }
        else if (s.size()>0 && s.top().first<arr[i])  //if top of stack is lesser so add to result
        {
            // s.push(arr[i]);
            result.push_back(s.top().second);
            /* code */
        }
        


        else if (s.size()>0 && s.top().first>arr[i]) //if top of stack is less than arr[i] 
        {
            while (s.size()>0 and s.top().first>arr[i]) // so remove till top of stack is less than arr[i]
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
                
                result.push_back(s.top().second); //now size top of stack is lesser than arr[i] add this to result
            }
            
            
            
            
            /* code */
        }
        s.push({arr[i],i}); // after processing for each arr[i] add this element to stack
        
        
    }
    reverse(result.begin(),result.end());
    return result;
    
}


int find(vector<int> arr){
    vector<int> left=findL(arr);
    vector<int> right =findR(arr);
    vector<int> width;
    vector<int> area;
    cout<<left.size();
    cout<<arr.size();

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<i;
    // cout<<"yes";
    cout<<right[i]<<" ";
        //width[i]=right[i]-left[i]-1;
        //area[i]=arr[i]*width[i];

        /* code */
    }
    auto it = max_element(begin(area), end(area));
    cout<<*it;
    return *it;
    
}

int main(){
    //is this nine is not forever at least we are together i kn
    vector<int> cloud={6, 2, 5, 4, 5, 1, 6};
    auto it = max_element(begin(cloud), end(cloud));
    cout<<find(cloud);

    
}