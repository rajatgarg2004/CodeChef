#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());

        long long ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans+=arr[i]+arr[i+1];
        }
        ans+=arr[0];
        ans-=arr[n-2];
        cout<<ans<<endl;
    }
}
