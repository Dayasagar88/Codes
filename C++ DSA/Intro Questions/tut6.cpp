#include <iostream>
using namespace std;

bool isTriangle(int a, int b, int c){
    bool res;
    if(((a+b) > c) && ((b+c) > a) && ((a+c) > b)){
        res = true;
    }else{
        res = false;
    }
    return res;
}

int main(){
    cout<<isTriangle(10,10,10);
}