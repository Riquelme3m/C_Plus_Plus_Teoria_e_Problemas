/* Programa que implementa o algoritmo Euclidiano para o cálculo do MDC(Máximo Divisor Comum) */
#include <iostream>
using namespace std;

 
int MDC(int a,int b);
int main(){
cout<<"Insira dois números para calcular seu MDC : "<<endl;
int x1,x2;
cin>>x1>>x2;
cout<<"O MDC entre ("<<x1<<","<<x2<<") é : "<<MDC(x1,x2)<<endl;



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



/*  q=a/b;
        r=a%b;
        a=b;
        b=r;
        q=a/b;
        r=a%b;.. */