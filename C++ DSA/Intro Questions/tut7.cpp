#include <iostream>
using namespace std;

void checkEven(){
    int n;
    cin>>n;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            cout<<i<<endl;
        }
    }
}

int main(){
    // checkEven();
    int n;
    cin>>n;
    for(int i = 0; i <= n; i += 2){
        cout<<i<<endl;
    }
}