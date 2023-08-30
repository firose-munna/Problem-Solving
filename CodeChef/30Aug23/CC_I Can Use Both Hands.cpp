#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase, i, l, r, m;
	cin>>testCase;

	for(i=0; i<testCase; i++){
	    cin>>l>>r>>m;

	    if(m%l==0){
	        cout<<((m/l)) + m/r<<endl;

	    }
	    else{
	        cout<<((m/l)+1) + m/r<<endl;
	    }


	}
	return 0;
}
