#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        long long arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        long long sum1 = 0;
        for(int i=0;i<a;i++)
        {
            if(arr[i]*b>=c){
                sum1+=c;
            }
            else
            {
                sum1+=arr[i]*b;
            }
        }
        cout<<sum1<<endl;
    }
}