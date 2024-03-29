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
        long long arr[n+1];
        long long arr1[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=1;i<n-2;i++)
        {
            if(arr[i]==arr1[i])
            {
                continue;
            }
            else
            {
                long long a = arr[i];
                long long b = arr[i+1];
                long long c = arr[i+2];
                long long d = arr[i+3];
                arr[i]=a+b+c;
                arr[i+1]=-c;
                arr[i+2]=-b;
                arr[i+3]= b+c+d;
            }
        }
        bool flag=true;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==arr1[i])
            {
                continue;
            }
            else
            {
                flag=false;
            }
        }
        if(!flag){
            cout<<"No"<<endl; 
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
