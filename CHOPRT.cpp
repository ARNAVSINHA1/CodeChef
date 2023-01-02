#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;  cin>> t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if (a>b) cout<<">";
	    else if(a<b) cout<<"<";
	    else cout<<"=";
	    cout<<endl;
	}
	return 0;
}
