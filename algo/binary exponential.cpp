#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int base, power, cnt1=0, cnt2=0;
    cin>>base>>power;

    long long int base2 = base;
    long long int power2 = power;

    long long int res2 = base2;

    long long int res = 1;

    while(power>0){
        if(power%2==1){
            res*=base;
            power-=1;
        }
        else{
            base*=base;
            power/=2;
        }
        cnt1++;
    }

    cout<<res <<" "<<cnt1<<endl;


    for(int i=1; i<power2; i++){
        res2 *= base2;
        cnt2++;
    }
    cout<<res2 <<" "<<cnt2<<endl;



}
