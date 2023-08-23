#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, distance, i, oil;


    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>oil>>distance;
        if((oil*15)>= (distance*2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


    return 0;

}
