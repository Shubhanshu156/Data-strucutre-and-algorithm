#include<bits/stdc++.h>
using namespace std;
int DP[1000][1000];
unordered_map<string,int> mp;
int solve(string s,int i,int j,bool istrue)
{

    
    
        if (i>j) //if invalid return false
        {
            return false;
        }
        if (i==j)
        { //if only 1 chr then
            /* code */
            if (istrue==true) //if find true and true is present return true else false
            {
                return(s[i]=='T');
                /* code */
            }
            else
            { //if find false and false is present return true else false
                return(s[i]=='F');
            }
            

        }
        //creating a key of map like this "i j istrue"
        string temp=to_string(i);
        temp.push_back(' ');  
        temp.append(to_string(j));
        temp.push_back(' ');
        temp.append(to_string(istrue));
        if (mp.find(temp)!=mp.end()) //if temp is present then return value on that
        {
            /* code */
            return mp[temp];
        }
        else //else calculate them
        {
            int ans=0;
            //int mini=INT_MAX;  
                for (int k=i+1; k<j; k=k+2)
                {
                    int lt=solve(s,i,k-1,true); //left true
                    int lf=solve(s,i,k-1,false); //right true
                    int rt=solve(s,k+1,j,true);
                    int rf=solve(s,k+1,j,false);
                    if (s[k]=='&') //if and then finding for true and false 
                    {
                        
                        if (istrue==true)
                        {
                            ans=ans+(lt*rt);
                        }
                        else
                        {
                            ans=ans+(lf*rt)+(lt*rf)+(lf*rf);
                        }
                        
                        
                    }
                    else if (s[k]=='|')
                    {
                        if (istrue==true)
                        {
                            /* code */
                            ans+=(lf*rt)+(lt*rf)+(lt*rt);
                        }
                        else
                        {
                            ans+=(lf*rf);
                        }
                        
                    }
                    else if (s[k]='^')
                    {
                        /* code */
                        if (istrue)
                        {
                        ans+=(lf*rt)+(lt*rf);
                            /* code */
                        }
                        else
                        {
                            ans+=(lt*rt)+(lf*rf);
                        }   
                    }
                }
    return (mp[temp]=ans); //storing and returning ans
        }
}


int main()
{
    mp.clear();
   // int arr[]={40,20,30,10,30};
    string s="T|T&F^T";
    cout<<solve(s,0,4,true);
return 0;
}