#include <iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    cout<<f;
    return f;
}
int main(){
    fact(5);
    return 0;
}