#include <bits/stdc++.h>
using namespace std;
bool helper(int a)
{
    if(a<=1){
        return false;
    }
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
bool isValid(const vector<int>&v1,const vector<int>&v2)
{
    for(int i=0;i<v1.size();i++)
    {
        if(helper(v1[i]+v2[i]))
        {
            return false;
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v1(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v1[i];
	    }
	    if(n<=2)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        int index1=-1;
	        int index2=-1;
	        for(int i=0;i<n;i++)
	        {
	            if(index1!=-1 && index2!=-1)
	            {
	                break;
	            }
	            if(v1[i]==1)
	            {
	                index1=i;
	            }
	            else if(v1[i]==3)
	            {
	               index2 = i;
	            }
	        }
	        swap(v1[index1],v1[index2]);
	        for(int i=0;i<n;i++)
	        {
	            cout<<v1[i]<<" ";
	        }
	        cout<<endl;
	        
	    }
	    
	}

}