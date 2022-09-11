#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x==y)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(x>y)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else 
	    {
	        cout<<"FIRST"<<endl;
	    }
	}
	return 0;
}
