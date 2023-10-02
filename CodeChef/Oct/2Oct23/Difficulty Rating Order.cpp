#include <iostream>
using namespace std;

int main() {
	int testCase, n;
	cin>>testCase;
	for(int i=0; i<testCase; i++){
	    cin>>n;
	    int ar[n];
	    int check =0;
	    for(int j=0; j<n; j++){
	        cin>>ar[j];
	    }

	    for(int j=0; j<n-1; j++){
	        if(ar[j]>ar[j+1]){
	           check = 1;
	           break;
	       }
	    }
	    if(check ==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	         cout<<"No"<<endl;
	    }

	}
	return 0;
}
