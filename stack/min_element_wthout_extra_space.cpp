#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int minielement;
void push(int element){
    if (element>minielement)
    {
        s.push(element);

        /* code */
    }
    if (element<minielement)
    {
        s.push(2*element-minielement);
        minielement=element;
        /* code */
    }
    
    

}
int pop(){
    if (s.top()<minielement)
    {
        /* code */
        s.pop();
    }
    else
    {
        int e=s.top();
        s.pop();
        minielement=2*minielement-e;
    }
    
}
int minelement(){
    if (s.size()==0)
    {

        return -1;
        /* code */
    }
    else
    {
        return minielement;
    }
    
    

}
int main(){
    push(5);
    cout<<minielement;

}
