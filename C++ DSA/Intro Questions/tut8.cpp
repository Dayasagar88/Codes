#include <iostream>
using namespace std;

int findMax(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int greater;
    if(a > b){
        if(a > c){
            greater = a;
            cout<<a;
        }
    }else{
        if(b > c){
            greater = b;
            cout<<b;
        }else{
            greater = c;
            cout<<c;
        }
    }

}

int main(){

    findMax();
}