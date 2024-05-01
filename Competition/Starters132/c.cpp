#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long tot =0, l=0,r=0,m=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]%2==0){
                tot+=(n-i);
                l=n-i;
                r=0;
            }
            else{
                tot+=l;
                r++;
                m=max(m,r);
            }
        }
        m++;
        cout<<tot+(long long)((m/2)*(m-m/2))<<endl;
    }
}