#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, cab1, cab2;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>cab1>>cab2;

        if(cab1 < cab2){
            cout<<"FIRST"<<endl;
        }
        else if(cab1 > cab2){
            cout<<"SECOND"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
    }


    return 0;

}
