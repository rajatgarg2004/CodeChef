#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,k;
        cin>>a>>k;
        vector<int>arr(a,0);
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long sum1 = 0;
        if(k<=a){
            int index = -1;
            for(int i=0;i<k;i++){
                if(arr[i]<=3){
                    sum1+=7-arr[i];
                }
                else
                {
                    sum1+=arr[i];
                }
                index = i+1;
            }
            for(int i=index;i<a;i++)
            {
                sum1+=arr[i];
            }
        }
        else
        {
            for(int i=0;i<a;i++){
                if(arr[i]<=3){
                    sum1+=7-arr[i];
                }
                else{
                    sum1+=arr[i];
                }
            }
        }
        cout<<sum1<<endl;
        
    }
}