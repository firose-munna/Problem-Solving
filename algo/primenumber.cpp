#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    int i;

    if(n<2) return 0;
    else if(n<=3) return 1;
    else if(n%2==0) return 0;

    for(i=3; i<=sqrt(n); i++){

        if(n%i== 0){
            return 0;
        }
    }
    return 1;



}



int main() {

    int testCase, i, n, prime;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>n;

        prime = isPrime(n);

        if(prime == 1){
            cout<<n<<" is prime number."<<endl;
        }
        else{
            cout<<n<<" is not prime number."<<endl;
        }

    }

	return 0;
}
