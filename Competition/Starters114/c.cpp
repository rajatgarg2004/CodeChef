#include <bits/stdc++.h>
using namespace std;
bool checker(char a, char b)
{
    if(a=='P' && b=='R')
    {
        return true;
    }
    else if(a=='S' && b=='P')
    {
        return true;
    }
    else if(a=='R' && b=='S')
    {
        return true;
    }
    return false;
}
char helper(char a)
{
    if(a=='P')
    {
        return 'S';
    }
    else if(a=='S')
    {
        return 'R';
    }
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        string s;
        cin>>s;
        string s1=s;
        for(int i=0;i<n;i++)
        {
            s1[i]='P';
        }
        int counter=floor(n/2.0)+1;
        for(int i=0;i<n;i++)
        {
            if(checker(s1[i],s[i]))
            {
                counter--;
            }
        }
        if(counter<=0)
        {
            cout<<s1<<endl;
        }
        else
        {
            int i=s1.length()-1;
            while(counter>0 && i>=0)
            {
                if(s[i]=='R')
                {
                    i--;
                    continue;
                }
                else
                {
                    s1[i]=helper(s[i]);
                    counter--;
                    i--;
                    continue;
                }
            }
            cout<<s1<<endl;
        }
        
    }
}