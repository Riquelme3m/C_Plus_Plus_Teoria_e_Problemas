/*Programa que verifica a identidade b^x=e^(xlog b) */
#include<cmath>
#include<iostream>
using namespace std;


int main(){
    int b=10;
    float x;
    float euler=2.71828182;
    cout<<"Insira um valor para x : "<<endl;
    cin>>x;
    cout<<pow(b,x)<<" = ";
    cout<<exp(x*log(b))<<endl;





    return 0;
}
