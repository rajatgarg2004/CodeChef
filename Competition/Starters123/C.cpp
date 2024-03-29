#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long curr = ((long long)(n)*(long long)(n+1))/2;
        curr=curr+n-1;
        cout<<curr<<endl;
        
    }
}
