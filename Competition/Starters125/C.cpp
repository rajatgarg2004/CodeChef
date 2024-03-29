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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long counter1=0, counter2=0, counter3=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                counter1++;
            }
            else
            {
                if(arr[i]<=2)
                {
                    counter2++;
                }
                else
                {
                    counter2+=1;
                    counter3+=arr[i]-2;
                }
            }
        }
        int alice = 0, bob = 0;
        alice=(counter1+1)/2;
        bob= counter1/2;
        bool isTrue = false;
        isTrue = counter1%2;
        if(isTrue)
        {
            if(counter3%2==0)
            {
                isTrue=true;
            }
            else
            {
                isTrue=false;
            }
        }
        else
        {
            if(counter3%2!=0)
            {
                isTrue=true;
            }
        }
        if(isTrue)
        {
            alice+=counter2;
        }
        else
        {
            bob+=counter2;
        }
        if(alice>bob)
        {
            cout<<"Alice"<<endl;
        }
        else{
            if(bob==alice)
            {
                cout<<"Draw"<<endl;
            }
            else
            {
                cout<<"Bob"<<endl;
            }
        }
    }
}
