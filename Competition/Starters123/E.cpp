#include <bits/stdc++.h>
using namespace std;
string helper(int n, int a, int b)
{
    if(a==b)
    {
        if(n<=a)
        {
            return "Alice";
        }
        else
        {
            if((n-(a+1))%(a+1)==0)
            {
                return "Bob";
            }
            else{
                return "Alice";
            }
        }
    }
    else if(a>b)
    {
        return "Alice";
    }
    else
    {
        
        if(n<=a)
        {
            return "Alice";
        }
        return "Bob";
    }
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        cout<<helper(n,a,b)<<endl;
    }
}
