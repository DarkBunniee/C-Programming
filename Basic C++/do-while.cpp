#include<iostream>
#include<string>
using namespace std;

main(){
    int a;
    cout<<"Enter the value of a : "; 
    cin>>a;
    do{
        // it will execute onces
        cout<<"\n The value is : "<<a;
        a++;
    }while (/* condition */a<10);
    return 0;
}