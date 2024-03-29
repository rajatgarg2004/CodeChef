#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long ans[22];
        for(int i =0 ;i<22;i++)
        {
            long long a,b;
            cin>>a>>b;
            ans[i]=a+20*b;
        }
        long long max1=0;
        int index=0;
        for(int i =0 ;i<22;i++)
        {
            if(max1<ans[i])
            {
                index=i;
                max1=ans[i];
            }
        }
        cout<<index+1<<endl;
    }
}