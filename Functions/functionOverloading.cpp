#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
double sum(double a,double b){
    return a+b;
}
int main(){
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
    cout<<sum(2.5,3.5)<<endl;

}