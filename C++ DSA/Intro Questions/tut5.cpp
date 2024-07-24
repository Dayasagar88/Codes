#include <iostream>
using namespace std;


void checkPrime(){
    int n;
    cin>>n;
    string check ;
    for(int i = (n - 1); i > 1; i--){
        if(n % i == 0){
            check = "False";
        }else{
            check = "True";
        }
    }
    cout<<check;
}

int main(){
    checkPrime();
}