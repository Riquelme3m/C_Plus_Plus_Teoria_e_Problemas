/*Programa que retorna o maior valor de 3 inteiros inseridos pelo usuário */

#include<iostream>
using namespace std;

int max(int,int,int);

int main(){
    int x,y,z;
    cout<<"Insira 3 números : "<<endl;
    cin>>x>>y>>z;
    if(x==y&&y==z)cout<<"Todos valores inseridos são equivalentes . Insira valores distintos ."<<endl;
    else cout<<"O maior dos inteiros é : "<<max(x,y,z)<<endl;
    
    return 0;
}

int max(int n1,int n2,int n3){
    int maximo;
    maximo=n2;
    if(n1>n2)maximo=n1;
    if(n3>maximo)maximo=n3;
    return maximo;

}