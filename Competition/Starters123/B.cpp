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
        long long ans=0;
        bool flag=true;
        if(n%2!=0)
        {
            flag=false;
        }
        n/=2;
        if(flag)
        {
            long long sum=(long long)(n)*(long long)(n+1);
            cout<<sum<<endl;
        }
        else
        {
            long long sum=(long long)(n+1)*(long long)(n+1);
            cout<<sum<<endl;
            
        }
    }
}
