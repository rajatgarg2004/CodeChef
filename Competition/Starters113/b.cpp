#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int cnt1=0;
	    int cnt2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==1)
	        {
	            cnt2++;
	        }
	        else
	        {
	            cnt1++;
	        }
	    }
	    cout<<min(cnt1,cnt2)<<endl;
	}
}