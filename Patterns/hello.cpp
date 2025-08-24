#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;

    if(a>b){
        cout<<a<<"is greater";
    }else if(b>a){
            cout<<b<<"is greater";
    }else{
        cout<<"both are same";
    };


};