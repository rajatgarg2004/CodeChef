#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int counter=0;
        int ans=0;
        int total1 = 0; 
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                total1++;
                ans = max(ans,counter);
                counter=0;
            }
            else 
            {
                counter++;
            }
        }
        ans = max(ans,counter);
        total1+=ans;
        cout<<total1<<endl;
    }
}
