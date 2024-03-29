#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,c;
	    cin>>a>>b>>c;
	    long long ans =0;
	    ans = (long long)(a/c)*(long long)(b%c)+(long long)(b/c+1);
	    ans += min(a%c,b%c);
	    cout<<ans<<endl;
	}

}
