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
        long long n;
        cin>>n;
        long long ans = 1;
        ans +=(long long)((n-2)*(n-1));
        cout<<ans<<'\n';
        
    }
}
