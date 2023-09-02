#include <bits/stdc++.h>
using namespace std;

int boublesort(int ary[], int len){

    int i, j, temp, flag;

    for(i=0; i<len; i++){
        flag=0;
        for(j=i; j<len-1; j++){
            if(ary[i]>ary[j]){
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;

                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }

    for(i=0; i<len; i++){
        cout<<ary[i]<<" ";
    }



}

int main() {

    int i, len, r;

    cout<<"Enter the length of array : ";
    cin>>len;

    int ary[len];

    cout<<"Enter the array : ";
    for(i=0; i<len; i++){
        cin>>ary[i];
    }
    boublesort(ary, len);


	return 0;
}
