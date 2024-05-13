#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool flag=true;
        int ans=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=ans)
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n==4)
            {
                if(arr[0]+arr[1]==arr[2]+arr[3])
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}