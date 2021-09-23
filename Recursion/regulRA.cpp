 #include<bits/stdc++.h>
 using namespace std;
    void recursive(vector<string> &answer,string current,int open,int close) { 
        if(open == 0 && close == 0) {  
            answer.push_back(current); 
            return;
        }   
        if(open != 0) { 
            recursive(answer,current + "(",open - 1,close);
        }  
        if(close > open) { 
            recursive(answer,current + ")",open,close-1);
        }  
    }   

 vector<string> generateParenthesis(int n) { 
        vector<string> answer; 
        if(n == 0) return answer; 
        recursive(answer,"",n,n);
        return answer;
    } 
 int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
    vector<string> ans=generateParenthesis(n);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<endl;
        /* code */
    }
        /* code */
    }
    
 
    
}