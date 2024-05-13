#include <bits/stdc++.h>
using namespace std;
bool helper(int n)
{
    if(n<0)
    {
        return false;
    }
    if(n==0)
    {
        return true;
    }
    return helper(n-3)||helper(n-4);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(helper(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}