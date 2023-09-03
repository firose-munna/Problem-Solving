#include<bits/stdc++.h>
using namespace std;

#define maxx 1000

class Stack{
    int top;
public:
    int a[maxx];

    Stack(){
        top=-1;
    }

    int push(int x){
        if(top>= maxx-1){
            cout<<"Stack is Full"<<endl;
            return 0;
        }
        else{
            a[++top] = x;
            cout<<"Value : "<<x<<" pushed."<<endl;
            return 1;
        }
    }
    int pop(){
        if(top<0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else{
            return a[top--];
        }
    }
    int peek(){
        if(top<0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else{
            return a[top];
        }
    }

    int isEmpty(){
        return (top<0);
    }
};

int main(){

    Stack s;

    s.push(12);
    s.push(15);
    s.push(7);
    s.push(96);

    cout<<s.peek()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.peek()<<endl;

    return 0;
}
