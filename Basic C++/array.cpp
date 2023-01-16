#include<iostream>
#include<string>
using namespace std;

main(){
    // 2D array matrix 
    int arr[2][3] ={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"the matrix array of 2x3 : "<<arr[i][j]<<endl;
            if(arr[i][j]==arr[0][2]){
                cout<<"col second has started : "<<endl;
            }
        }
    }
    return 0;
}