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
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int counter = 0;
        for(int i=0;i<n;i++)
        {
            long long curr = arr[i];
            while(curr%2==0){
                curr/=2;
                counter++;
            }
        }
        if(counter%8==0){
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
}
