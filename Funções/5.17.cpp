/* Programa que implemente uma função que captura o dígito desejado de um número qualquer*/
#include<iostream>
#include<iomanip>
using namespace std;

int digit (int n,int k);

int main(){
    int x1,x2;
cout<<"Digite o número e a posição do dígito desejado :(Por exemplo (29415,0) , o dígito na posição 0 será o 5 , na posição 1 será o 1 e assim por diante)"<<endl;
cin>>x1>>x2;
cout<<"O dígito nessa posição é : "<<digit(x1,x2)<<endl;


    return 0;
}

int digit(int n , int k){
    if(k==0)return n%10;
    if(k==1)return (n%100)/10;
    if(k==2)return(n%1000)/100;
    if(k==3)return(n%10000)/1000;
    if(k==4)return(n%100000)/10000;
    if(k==5)return(n%1000000)/100000;
return 0;



}

