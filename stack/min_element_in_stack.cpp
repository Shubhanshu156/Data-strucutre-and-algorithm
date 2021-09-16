#include<bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> SupportingStack;
int minElement(){
    return SupportingStack.top();
}
int push(int element){
    if (SupportingStack.size()==0||SupportingStack.top()>=element)
    {
        /* code */
        SupportingStack.push(element);
        s.push(element);
    }
}
int pop(){
    if (s.size()==0)
    {
        return -1;
        /* code */
    }
    int ans=s.top();
    s.pop();
    if (SupportingStack.top()==ans)
    {
        SupportingStack.pop();
        return ans;
        /* code */
    }
    
    
    


}
int main(){
    
}