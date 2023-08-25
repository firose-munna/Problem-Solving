#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, number, i;


    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>number;
        if((number%7 == 0) && ((number/7)%2 == 0)){
            cout<<"Alice"<<endl;
        }
        else if((number%9 == 0) && ((number/9)%2 == 1)){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Charlie"<<endl;
        }

    }


    return 0;

}
