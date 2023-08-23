#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, donor;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>donor;

        if(donor <=3){
            cout<<"BRONZE"<<endl;
        }
        else if(donor>3 && donor<=6){
            cout<<"SILVER"<<endl;
        }
        else{
            cout<<"GOLD"<<endl;
        }
    }


    return 0;

}
