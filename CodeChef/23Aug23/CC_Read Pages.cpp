#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, numberOfPage, numberOfPageInADay, numberOfDay;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>numberOfPage>>numberOfPageInADay>>numberOfDay;

        if(numberOfDay*numberOfPageInADay>=numberOfPage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;

}
