#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b;
	    cin>>a>>b;
	    long long ans=ceil(float(a)/float(b+1));
	    if(b>=a-1)
	    {
	       ans=1;
	    }
	    else{
	        ans = max(a-2*b,ans);
	    }
	    cout<<ans<<endl;
	}
}