#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testCase, i, l, k, n, j, m;
	long long int result = 0;

	cin>>testCase;

	for(i=0; i<testCase; i++){

	    cin>>l>>k>>n;
        int a[l];

        for(j=0; j<l; j++){
            cin>>a[j];
        }

        sort(a, a+l, greater<long long int>());


        for(m=n-1; m<l; m+=k){
            result+=a[m];

        }

        cout<<result<<endl;
        result=0;



	}
	return 0;
}
