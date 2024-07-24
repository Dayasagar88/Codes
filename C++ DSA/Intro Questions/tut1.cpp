#include <iostream>
using namespace std;



//Calculate perimeter of triangle
void calcPeriOfTriangle(float a, float b , float c){
    float perimeter = a+b+c;
    cout<<perimeter<<endl;
    // return perimeter;
}

int main(){
    calcPeriOfTriangle(2,4,6);

    return 0;
}