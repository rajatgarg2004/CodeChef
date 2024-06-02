#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        priority_queue<int>q1;
        priority_queue<int,vector<int>,greater<int>>q2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                q1.push(arr[i]);
            }
            else{
                q2.push(arr[i]);
            }
        }
        while(k--){
            int a = q1.top();
            int b = q2.top();
            if(a>b){
                q1.pop();
                q2.pop();
                q1.push(b);
                q2.push(a);
            }
            else{
                break;
            }
        }
        long long sum1 = 0;
        long long sum2 = 0;
        while(!q1.empty()){
            sum1+=q1.top();
            q1.pop();
        }
        while(!q2.empty()){
            sum2+=q2.top();
            q2.pop();
        }
        if(sum2>sum1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}
