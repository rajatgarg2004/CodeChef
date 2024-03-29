#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
        {
            cout<<s<<endl;
        }
        else{
            int counter=0;
            for(auto i : s)
            {
                if(i=='1')
                {
                    counter++;
                }
            }
            if(counter>k)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='1' && k>0)
                    {
                        s[i]='0';
                        k-=1;
                    }
                }
                cout<<s<<endl;
            }
            else{
                int curr=n-k;
                for(int i=0;i<curr;i++)
                {
                    cout<<'0';
                }
                cout<<endl;
            }
        }
    }
}
