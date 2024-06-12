#include <bits/stdc++.h>
using namespace std;

//Partially correct
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<=37){
            cout<<"No"<<endl;
        }
        else{
            vector<int>primes(n+1,1);
            for(int i=2;i*i<=sqrt(n);i++){
                if(primes[i] == 1){
                    for(int j=i*i;j<=sqrt(n);j+=i){
                        primes[j] = 0;
                    }
                }
            }
            vector<long long>prime;
            for(long long i=2;i<=sqrt(n);i++){
                if(primes[i]==1){
                    prime.push_back(i*i);
                }
            }
            bool flag = false;
            for(long long i=0;i<prime.size();i++){
                if(flag){
                    break;
                }
                for(long long j=i+1;j<prime.size();j++){
                    if(flag){
                        break;
                    }
                    for(long long k = j+1;k<prime.size();k++){
                        if(flag){
                            break;
                        }
                        if(prime[i]+prime[j]+prime[k]==n){
                            cout<<"Yes"<<endl;
                            flag=true;
                            break;
                        }
                    }
                }
            }
            if(!flag){
                cout<<"No"<<endl;
            }
        }
        
    }
}