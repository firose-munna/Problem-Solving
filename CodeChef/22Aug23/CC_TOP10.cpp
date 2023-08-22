#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, rankNumber, i;

    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>rankNumber;

        if(rankNumber<11){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;



}
