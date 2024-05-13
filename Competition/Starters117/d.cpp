#include <bits/stdc++.h>
using namespace std;
long long helper(long long a )
{
    return (long long)(a*(a+1))/2;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	long long modulus = 998244353;
	while(t--)
	{
	    long long n,m;
	    cin>>n>>m;
	    long long min1 = max({(n+1)/2-1,(m+1)/2-1,n-(n+1)/2,m-(m+1)/2});
	    long long maxn = min(1+min1,n);
	    long long maxm = min(1+min1,m);
	    long long minn = max(n-min1,(long long)1);
	    long long minm = max(m-min1,(long long)1);
	    n = helper(maxn)-helper(minn-1);
	    m = helper(maxm)-helper(minm-1);
	    n=n%modulus;
	    m=m%modulus;

	    n = (long long)(n*m);
	    n=n%modulus;
	    
	    cout<<n<<endl;
	}

}