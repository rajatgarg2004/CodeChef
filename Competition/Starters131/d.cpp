#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long encrypt = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]==1 || arr[i]==0){
                encrypt = (long long)((long long)arr[i]+encrypt)%mod;
            }
            else if(arr[i]>=1 && encrypt<=1){
                encrypt = (long long)((long long)arr[i]+encrypt)%mod;
            }
            else
            {
                encrypt = (long long)((long long)arr[i]*encrypt)%mod;
            }
        }
        cout<<encrypt<<endl;
    }
}