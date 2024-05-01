#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long  n,m;
        cin>>n>>m;
        priority_queue<int>p,q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            p.push(a);
        }
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        if(n<4 || m<4 || m+n<11){
            cout<<-1<<endl;
        }
        else{
            long long sum1 = 0;
            for(int i=0;i<4;i++){
                sum1+=p.top();
                p.pop();
            }
            for(int i=0;i<4;i++){
                sum1+=q.top();
                q.pop();
            }
            for(int i=0;i<3;i++){
                if(!p.empty() && !q.empty()){
                    if(p.top()>q.top()){
                        sum1+=p.top();
                        p.pop();
                    }
                    else{
                        sum1+=q.top();
                        q.pop();
                    }
                }
                else if(p.empty()){
                    sum1+=q.top();
                    q.pop();
                }
                else if(q.empty()){
                    sum1+=p.top();
                    p.pop();
                }
            }
            cout<<sum1<<endl;
        }
        
    }
}
