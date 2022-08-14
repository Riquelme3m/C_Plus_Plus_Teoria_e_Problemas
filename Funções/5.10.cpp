/*Implementação de uma função que retorna a média de até 4 números(uso de argumentos default) */

#include<iostream>
using namespace std;

float average(float x1 , float x2=0, float x3=0, float x4=0);


int main(){
 cout<<"Insira 4 números para obter a média : "<<endl;
 float n1,n2,n3,n4;
 cin>>n1>>n2>>n3>>n4;
 cout<<"A média do primeiro é : "<<average(n1)<<endl;
 cout<<"A média dos dois primeiros é : "<<average(n1,n2)<<endl;
 cout<<"A média dos três primeiros é : "<<average(n1,n2,n3)<<endl;
 cout<<"A média dos quatro primeiros é : "<<average(n1,n2,n3,n4)<<endl;


    return 0;
}

float average(float x1, float x2,float x3,float x4){
    if(x2==0)return x1;
    if(x3==0)return (x1+x2)/2;
    if(x4==0)return (x1+x2+x3)/3;
    else return ((x1+x2+x3+x4)/4);




}