#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, batteryHelght;

    cin>> testCase;

    for(int i=0; i<testCase;  i++){
        cin>>batteryHelght;

        if(batteryHelght>=80){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
