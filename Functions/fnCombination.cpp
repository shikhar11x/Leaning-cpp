#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int binCoef(int n,int r){
    int val1=fact(n);
    int val2=fact(r);
    int val3=fact(n-r);

    int result= val1/(val2*val3);
    return result;

}
int main(){
    cout<<binCoef(4,2);
    return 0;

}