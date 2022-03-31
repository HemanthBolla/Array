#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001];
    int prefix[100001];
    for(int i=1;i<100001;i++)
    {
        if(i%10==2||i%10==3||i%10==9)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    prefix[0]==a[0];
    prefix[1]==a[1];
    for(int i=2;i<100001;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<"\n";
    }
    
}
