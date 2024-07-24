#include <iostream>
using namespace std;

//Inverted pyramid
int main(){


    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int k = 0;
        while(k < i){
            cout<<" ";
            k++;
        }


        for(int j = 0; j <= ((n - i) - 1); j++){
           cout<<"* ";
        }
        cout<<endl;
    }

    
    for(int i = 0; i < n; i++){
        int k = 0;
        while(k < i){
            cout<<" ";
            k++;
        }


        for(int j = 0; j <= ((n - i) - 1); j++){
           if(j == 0 || j == (n - i - 1) || i == 0){
            cout<<"* ";
           }else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }

        //stars
        for(int k = 0 ; k < n - i; k++){
            cout<<"* ";
        }

        cout<<endl;
    }

    // while(n < 10){
    //     cout<<"*";
    //     n++;
    // }
    // cout<<endl;
    // cout<<n;


}

