#include <bits/stdc++.h>
using namespace std;
string helper(int n)
{
    string s = "";
    while(n>0)
    {
        if(n%2==0)
        {
            s+='0';
        }
        else
        {
            s+='1';
        }
        n>>=1;
    }
    reverse(s.begin(),s.end());
    return s;
    
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string curr = helper(n);
        vector<int>pref(curr.length(),0);
        if(curr[0]=='1')
        {
            pref[0]=1;
        }
        for(int i =1;i<curr.length();i++)
        {
            if(curr[i]=='1')
            {
                pref[i]=1+pref[i-1];
            }
            else
            {
                pref[i]=pref[i-1];
            }
        }
        int index=curr.length()-1;
        for(int i = index;i>=0;i--)
        {
            if(curr[i]=='1')
            {
                index=i;
                break;
            }
        }
        long long counter=curr.length()-index-1;
        long long ans=0;
        for(int i = index;i>=1;i--)
        {
            if(pref[i]!=pref[i-1])
            {
                continue;
            }
            else
            {
                ans+=pow(2,counter);
                counter=curr.length()-i-1;
            }
        }
        cout<<ans<<endl;
    }
}