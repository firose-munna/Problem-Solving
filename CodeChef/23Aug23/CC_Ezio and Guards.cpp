#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase;
    double attend, vote;

    cin>>testCase;

    for(int i=0; i<testCase; i++){
        cin>>attend>>vote;

        if((attend/2.0) <= vote){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;

}
