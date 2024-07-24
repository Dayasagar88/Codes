#include <iostream>
using namespace std;

//Calculate simple interest

int calcSimpleInterest(float prin, float rate, float time){

    float res = (prin*rate*time)/100;

    return res; 
}

int main(){
    cout<<calcSimpleInterest(10, 30, 1000)<<endl;

    // return 0;
}