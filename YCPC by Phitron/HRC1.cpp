#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t, i;
    cin>>t;

    long long int a, b, r;

    for(i=0; i<t; i++){
        cin>>a>>b;

        a%=100;
        b%=100;

        r = a*b;

        r%=100;

        cout<<r<<endl;
    }
}
