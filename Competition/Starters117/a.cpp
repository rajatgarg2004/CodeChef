#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<n-1;i++)
        {
            if(s[i]<=s[i+1])
            {
                continue;
            }
            else
            {
                ans+=s.substr(0,i);
                ans+=s.substr(i+1,n-i-1);
                break;
            }
        }
        if(ans.length()==0)
        {
            ans=s.substr(0,n-1);
        }
        cout<<ans<<endl;
    }
}