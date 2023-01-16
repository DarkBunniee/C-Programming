#include<iostream>
#include<string>
using namespace std;

main(){
    int a,i=0;
    cout<< "Enter value of a : ";
    cin>>a;
    while (/* condition */ i<a)
    {
        /* code */
        cout<<"Ok The value of i : "<<i<<endl;
        i++;
        if(i==a){
            cout<<"END OF THE CODE";
        }
        else if(i==9){
            break;
        }
    }
    
    return 0;
}