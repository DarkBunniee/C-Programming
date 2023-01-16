#include<iostream>
#include<string>
using namespace std;

int add(int a, int b); //this is prototyping of function

// Testing Block
main(){
    int a,b;
    cout<<"Enter value a & b : ";
    cin>>a;
    cin>>b;
    cout<<add(a,b);
    return 0;
}

// This is function
int add(int a, int b){
    int c;
    c= a+b;
    return c;
}