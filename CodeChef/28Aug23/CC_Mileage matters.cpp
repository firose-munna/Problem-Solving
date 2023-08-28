#include<bits/stdc++.h>
using namespace std;

int main(){

    int i, testCase;
    double n, x, y, a, b;

    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>n>>x>>y>>a>>b;

        double d, p;

        d = n/a;
        p = n/b;

        cout<<d<<" "<<p<<endl;

        if((d*x)>(p*y)){
            cout<<"DIESEL"<<endl;
        }
        else if((d*x)<(p*y)){
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }



    }


    return 0;

}
