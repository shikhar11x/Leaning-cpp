#include <iostream>
using namespace std;
int main(){
    int inc;
    cout<<"Enter Your Income "<<endl;
    cin>>inc;
    if(inc>=1000000){
        cout<<"30%";
    }else if(inc<1000000 && inc>=500000){
        cout<<"20%";
    }else{
        cout<<"0%";
    }
}