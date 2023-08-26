#include<bits/stdc++.h>
using namespace std;

int main(){

    int number[4], i, cnt=0;

    for(i=0; i<4; i++){
        cin>>number[i];

        if(number[i]>=10){
            cnt++;
        }
    }

    cout<<cnt<<endl;





    return 0;

}
