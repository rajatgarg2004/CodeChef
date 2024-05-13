#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        arr[0]=a;
        for(int i=1;i<a;i++)
        {
            arr[i]=i;
        }
        int alice = 1;
        int ans=a-1;
        for(int i=0;i<a-1;i++)
        {
            if(ans-alice==b)
            {
                break;
            }
            else
            {
                swap(arr[i],arr[i+1]);
                alice++;
            }
        }
        
        if(alice>ans)
        {
            ans++;
        }

        if(ans-alice!=b)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<a;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
        
        
    }
}