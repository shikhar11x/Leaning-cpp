#include <iostream>
using namespace std;

void isEven(int a){
    if(a%2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
}

int main(){
    isEven(5);
}