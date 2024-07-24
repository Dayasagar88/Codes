#include <iostream>
using namespace std;

int calcFactorial(){
    int n;
    cin>>n;
    int fact = 1;
    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    return fact;
}

int main(){
    cout<<calcFactorial()<<endl;
}