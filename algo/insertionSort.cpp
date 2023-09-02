#include <bits/stdc++.h>
using namespace std;

int intertionsort(int ary[], int len){

    int i, j, temp;

    for(i=1; i<len; i++){
        j=i;
        while(j>0 && ary[j-1]>ary[j]){
            temp = ary[j-1];
            ary[j-1] = ary[j];
            ary[j] = temp;
            j--;
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
    intertionsort(ary, len);


	return 0;
}
