#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<endl;
        }
        else{
            long long l = 1;
            long long r = 490;
            long long ans = INT_MAX;
            while(l<=r){
                long long mid = l + (r-l)/2;
                if((mid*100+x*10)/(10+mid) >= y){
                    ans = min(ans,mid);
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            cout<<ans<<endl;
        }
        
    }
}