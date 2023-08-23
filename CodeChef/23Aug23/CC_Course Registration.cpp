#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, group, i, capacity, enrolled;


    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>group>>capacity>>enrolled;
        if((group+enrolled)<=capacity){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


    return 0;

}
