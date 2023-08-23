#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, oil, distance;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>oil>>distance;

        if(oil*5>=distance){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;

}
