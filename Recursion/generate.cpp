 #include<bits/stdc++.h>
 using namespace std;
 int cnt=0;
 int val=0;
    void recursive(vector<string> &answer,string current,int open,int close) { 
        if (cnt>=val)
        {
            return;
            /* code */
        }
        
        if(open == 0 && close == 0) {  
            answer.push_back(current); 
            cnt+=1;
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
        cnt=0;
        int n;
        cin>>n;
        val=n;
    vector<string> ans=generateParenthesis(n);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<endl;
        /* code */
    }
        /* code */
    }
    
 
    
}