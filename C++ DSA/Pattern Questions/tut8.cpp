#include <iostream>
using namespace std;


//Solid Diamond
int main(){

    int n;
    cin>>n;


    for(int i = 0; i < n; i++){
        cout<<" ";
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }

        for(int k = 0; k <= i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 0; i <= n; i++){
        cout<<"* ";
    }
    cout<<endl;

    for(int i =0; i < n; i++){
        cout<<" ";
        for(int j = 0; j < i; j++){
            cout<<" ";
        }

        for(int k = 0; k < n - i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
/////////////////////////////////////////////////////////////
    for(int i = 0; i < n; i++){
        cout<<" ";
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }

        for(int k = 0; k <= i; k++){
            if(k == 0 || k == i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i = 0; i <= n; i++){
        if(i == 0 || i == n){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;

    for(int i =0; i < n; i++){
        cout<<" ";
        for(int j = 0; j < i; j++){
            cout<<" ";
        }

        for(int k = 0; k < n - i; k++){
            if(k == 0 || k == n - i - 1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}