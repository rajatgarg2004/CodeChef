#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long x,y;
        cin>>x>>y;
        int l;
        cin>>l;
        long long counter=0;
        long long top =(long long)(x-1)/l+1;
        long long left=(long long)(y-1)/l+1;
        long long bottom =(long long)(n-x)/l;
        long long right=(long long)(m-y)/l;
        counter=(long long)(top+bottom)*(left+right);
        cout<<counter<<endl;
        
    }
}