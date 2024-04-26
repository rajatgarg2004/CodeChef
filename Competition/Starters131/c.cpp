#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<long long>arr(n,0);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    for(int i=0;i<n-1;i++){
	        arr[i] = arr[i] + k*((arr[n-1]-arr[i])/k);
	    }
	    long long minNew = *min_element(arr.begin(),arr.end());
	    long long mindiff = arr[n-1]-minNew;
	    sort(arr.begin(),arr.end());
	    long long maxTillNow = *max_element(arr.begin(),arr.end());
	    for(int i=0;i<n;i++){
	        mindiff = min(mindiff,maxTillNow-arr[i]);
	        maxTillNow = max(maxTillNow,arr[i]+k);
	    }
	    cout<<mindiff<<endl;
	}
}