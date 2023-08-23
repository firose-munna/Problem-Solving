#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, following, follower;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>following>>follower;

        if(following > follower*10){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;

}
