#include <iostream>
using namespace std;

int main() {
    int count=0;
    int l,r;
    cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
	    if(i%10==2||i%10==3||i%10==9)
	    {
	        count+=1;
	    }
	   
	}
	cout<<count;
	return 0;
}
