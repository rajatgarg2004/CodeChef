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
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long ans=n;
        if(arr[0]==1)
        {
            ans++;
            for(auto it:arr)
            {
                if(it==1)
                {
                    ans--;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            vector<int>v1;
            long long curr=arr[0];
            v1.push_back(curr);
            for(int i=1;i<n;i++)
            {
                if(arr[i]<=curr)
                {
                    curr=arr[i];
                    v1.push_back(curr);
                }
            }
            long long ans1 = v1.size();
            for(int i=0;i<v1.size();i++)
            {
                long long curr1 = n;
                curr1=n-ans1;
                curr1+=v1[i];
                ans=min(ans,curr1);
                ans1--;
            }
            cout<<ans<<endl;
        }
        
    }
}