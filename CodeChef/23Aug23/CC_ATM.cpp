#include<bits/stdc++.h>
using namespace std;

int main(){

    int w;
    double mainBalance;

    cin>>w>> mainBalance;

    if((w%5==0) && ((mainBalance-0.50)>=w)){
        mainBalance = (mainBalance-0.50)-w;
    }

    printf("%0.2lf\n", mainBalance);


    return 0;

}
