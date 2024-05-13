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
        vector<long long>v1(n,0);
        vector<long long>v2(n,0);
        for(long long i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());
        long long sum=v1[0]+v2[0];
        bool flag= true;
        for(long long i=1;i<n;i++)
        {
            if(sum!=v1[i]+v2[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {for(long long i=0;i<n;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(long long i=0;i<n;i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;}
        else
        {
            cout<<-1<<endl;
        }
    }
}