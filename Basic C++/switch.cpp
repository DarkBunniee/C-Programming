#include<iostream>
#include<string>
using namespace std;

main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    switch (age)
    {
    case 10 : //if age == 10
        /* code */
         cout<<"your age is "<<age<<" is equal to 10";
        // if(age<10){
        //     cout<<"your age is "<<age<<"less than 10";
        // }
        break;
    case 20 : //if age == 20
        /* code */
         cout<<"your age is "<<age<<" is equals to 20";
        // if(age==10){
        //     cout<<"your age is "<<age<<"equals to 10";
        // }
        break;
    case 30 : //if age == 30
        /* code */
         cout<<"your age is "<<age<<" is equal to 30";
        // if(age>10){
        //     cout<<"your age is "<<age<<"greater than 10";
        // }
        break;
    
    default: // Remaining cases
    cout<<"invalid age!! please enter again";
        break;
    }
    return 0;
}