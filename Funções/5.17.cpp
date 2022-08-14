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
    for(int i=0;i<k;i++)
        n=n/10;
        return n%10;


}

