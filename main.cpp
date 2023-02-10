#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x; //battery health
	
	cin >>testCases;
	
	for(auto i = 0; i < testCases; i++)
	{
	    cin >>x;
	    
	    if(x >= 80)
	        cout <<"Yes" <<endl;
	        
	    else
	        cout <<"No" <<endl;
	}
	return 0;
}
