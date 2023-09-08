#include<bits/stdc++.h>
using namespace std;


int main(){

    int t, i, x, h, j;

    cin>>t;

    for(i=0; i<t; i++){
        int cnt =0;
        cin>>x>>h;
        int y = x/2;

        for(j=0; j<5; j++){
            if(y<=h){
                cnt++;
                y+=(x/2);
            }
            else{
                cnt = 1;
            }
        }
        for(j=y; j<=h; j+=x){
            if(y<=h){
                cnt++;
                y+=x;

            }
        }

        cout<<cnt<<endl;

    }





    return 0;

}
