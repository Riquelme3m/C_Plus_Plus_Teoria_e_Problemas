/* Programa que implementa o algoritmo Euclidiano para o cálculo do MMC(Mínimo Divisor Comum) */
#include <iostream>
using namespace std;

 
int MDC(int a,int b);
int main(){
cout<<"Insira dois números para calcular seu MMC : "<<endl;
int x1,x2;
cin>>x1>>x2;
cout<<"O MMC entre ("<<x1<<","<<x2<<") é : "<<x1*x2/MDC(x1,x2)<<endl;



    return 0;
}
int MDC(int a,int b){
    int q;
    int r;
    while(b>0){
        q=a/b;
        r=a%b;
        a=b;
        b=r;

    }
return a;
}



