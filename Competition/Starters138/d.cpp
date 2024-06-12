#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--){
        long long num;
        cin>>num;
        if(num!=2){
            cout<<2*num<<" "<<num*num<<endl;
        }
        else{
            cout<<4<<" "<<8<<endl;
        }
    }
}