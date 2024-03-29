#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long sum =0 ;
        for(auto i : arr)
        {
            sum+=i;
        }
        while(q--)
        {
            bool ans=0;
            long long curr;
            cin>>curr;
            for(int i = 0;i<n;i++)
            {
                for(int j =i+1;j<n;j++)
                {
                    long long curr1 = sum-arr[i]-arr[j];
                    curr1 = curr1*2;
                    curr1 +=arr[i]+arr[j];
                    
                    if(curr1==curr)
                    {
                        cout<<arr[i]<<" ";
                        for(int k = 0;k<n;k++)
                        {
                            if(k!=i && k!=j)
                            {
                                cout<<arr[k]<<" ";
                            }
                        }
                        cout<<arr[j]<<endl;;
                        ans=true;
                        break;
                    }
                }
                if(ans)
                {
                    break;
                }
            }
            if(!ans)
            {
                cout<<-1<<endl;
            }
        }
    }
}
