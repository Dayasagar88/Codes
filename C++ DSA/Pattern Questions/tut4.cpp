#include <iostream>
using namespace std;

int main(){


    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if(j == 0 || j == i || i == (n - 1)){
            cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}