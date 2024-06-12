#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n!=1){
            for(long long i=0;i<n-2;i++){
                cout<<3<<" ";
            }
            cout<<2<<" ";
            cout<<1<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}