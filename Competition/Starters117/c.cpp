#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            int c = abs(a-b);
            int ans=-1;
            int n = sqrt(c*2);
            for(int i=n;i<=n+5;i++)
            {
                long long curr = i*(i+1);
                curr/=2;
                int diff = curr-c;
                if(diff<0)
                {
                    continue;
                }
                if(diff%2!=0)
                {
                    continue;
                }
                else
                {
                    ans=i;
                    break;
                }
            }
            cout<<ans<<endl;
            
        }
    }
}