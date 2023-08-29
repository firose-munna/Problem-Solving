#include<bits/stdc++.h>
using namespace std;

int main(){

    int i, testCase, d, x, y, z, r;

    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>d>>x>>y>>z;

        r = max((x*7), ((d*y)+(z*(7-d))));

        cout<<r<<endl;

    }


    return 0;

}
