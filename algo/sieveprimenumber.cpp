#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    int i, prime[n+2];

    memset(prime, 0, sizeof(prime));



    for(i=2; i<=sqrt(n); i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }

    for(i=2; i<=n; i++){
        if(prime[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;





}



int main() {

    int testCase, i, n, prime;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>n;

        prime = isPrime(n);
    }

	return 0;
}
