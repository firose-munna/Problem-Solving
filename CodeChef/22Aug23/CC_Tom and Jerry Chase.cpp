#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, tomSpeed, jerrySpeed;

    cin>> testCase;

    for(int i=0; i<testCase;  i++){
        cin>>jerrySpeed>>tomSpeed;

        if(jerrySpeed<tomSpeed){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
