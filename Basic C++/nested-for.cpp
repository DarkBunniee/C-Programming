#include<iostream>
#include<string>
using namespace std;

main(){
    int a=10;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<i<<"-"<<j<<" "<<endl;
            if(i==j){
                break;
                //it will only break when i matches j
            }
        }
    }
    return 0;
}