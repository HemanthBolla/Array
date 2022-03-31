#include <iostream>
using namespace std;

int main() {
    int t;
    int l,r;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l>>r;
        int count=0;
	for(int i=l;i<=r;i++)
	{
	    if(i%10==2||i%10==3||i%10==9)
	    {
	        count+=1;
	    }
	   
	}
	cout<<count<<"\n";
    }
	
	return 0;
}
