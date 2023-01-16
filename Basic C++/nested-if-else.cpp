#include<iostream>
#include<string>
using namespace std;

main(){
    int salary;
    string name;
    cout<<"enter your name :";
    cin>>name;
    cout<<"\n enter your salary :";
    cin>>salary;
    cout<<endl;
    if(salary<30000){
        cout<<"1. your salary is "<<salary<<" and your name is " <<name;
        if(salary<=20000){
            cout<<"you can provide shelter";
        }
    }else if(salary==30000){
        cout<<" 2. your salary is " <<salary <<" and your name is " <<name;
    }
    else if(salary>30000 && salary<50000){
        cout<<" 3. your salary is " <<salary <<" and your name is " <<name;
        if(salary==40000)
        {
            cout<<"you are eligible for shelter";
        }
    }
    else{
        cout<<"soory we can't help you";
    }
    return 0;
}