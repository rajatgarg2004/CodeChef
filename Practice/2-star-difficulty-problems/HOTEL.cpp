#include <bits/stdc++.h>
using namespace std;
static bool cmp(vector<int>&a,vector<int>&b){
    if(a[0]<=a[1]){
        return true;
    }
    return false;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        vector<int>timer(1002,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int a ;
            cin>>a;
            for(int j=arr[i];j<a;j++){
                timer[j]++;
            }
        }
        int ans = *max_element(timer.begin(),timer.end());
        cout<<ans<<endl;
        
    }
}