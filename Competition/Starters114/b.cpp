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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>arr1(n,INT_MIN);
        arr1[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            arr1[i]=max(arr1[i-1],arr[i]);
        }
        long long counter=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr1[i])
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}