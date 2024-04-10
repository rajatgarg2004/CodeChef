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
        int arr1[n];
        int arr2[n];
        int arr3[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr3[i];
        }
        int flag1= -1, flag2 = -1;
        long long sum1 = 0;
        long long sum2 = 0;
        for(auto i : arr)
        {
            sum1+=i;
        }
        for(auto i : arr2){
            sum2+=i;
        }
        if(sum1>sum2){
            flag1 = 1;
        }
        else if(sum2>sum1){
            flag1 = 2;
        }
        else
        {
            flag1=0;
        }
        sum1 = 0;
        sum2 = 0;
        for(auto i : arr1)
        {
            sum1+=i;
        }
        for(auto i : arr3){
            sum2+=i;
        }
        if(sum1>sum2){
            flag2 = 1;
        }
        else if(sum2>sum1){
            flag2 = 2;
        }
        else
        {
            flag2=0;
        }
        if(flag1 == 1 && flag2 ==1){
            cout<<"A"<<endl;
        }
        else if(flag1==2 && flag2 ==2){
            cout<<"P"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
        
    }
}
