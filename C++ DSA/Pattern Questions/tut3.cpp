#include <iostream>
using namespace std;

//Inverse Pyramid
int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= (n - i - 1); j++){
            cout<<"* ";
        }
        // n--;
        cout<<endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || j == (n - i - 1)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
            cout<<endl;
    }

}