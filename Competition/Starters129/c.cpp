#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long zero = 0;
        long long one = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0'){
                zero++;
            }
            else
            {
                one++;
            }
        }
        if(zero<=1 && one<=1){
            cout<<"Bob"<<endl;
        }
        else{
            long long diff = abs(zero-one);
            if(n%2==0){
                if(diff>=2){
                    cout<<"Alice"<<endl;
                }
                else
                {
                    cout<<"Bob"<<endl;
                }
            }
            else
            {
                if(diff<2){
                    cout<<"Alice"<<endl;
                }
                else
                {
                    cout<<"Bob"<<endl;
                }
            }
        }
    }
    
}
