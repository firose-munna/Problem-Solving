#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, freeTime;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>freeTime;

        if(freeTime>24){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;

}
