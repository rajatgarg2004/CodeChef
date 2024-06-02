#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3)
        {
            cout<<1<<" "<<2<<" "<<3<<endl;
        }
        else{
            int max1 = n;
            int max2 = n-1;
            int max3 = n-2;
            int max4 = n-3;
            cout<<max2<<" "<<max3<<" ";
            for(int i=1;i<max4;i++){
                cout<<i<<" ";
            }
            cout<<max4<<" "<<max1<<endl;
            
        }
    }
}
