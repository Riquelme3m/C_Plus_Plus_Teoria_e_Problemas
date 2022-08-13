/*Programa que retorna o menor valor de 4 inteiros inseridos pelo usuário */

#include<iostream>
using namespace std;

int min(int,int,int,int);

int main(){
    int x,y,z,w;
    cout<<"Insira 4 números : "<<endl;
    cin>>x>>y>>z>>w;
    if(x==y&&y==z&z==w)cout<<"Todos valores inseridos são equivalentes . Insira valores distintos ."<<endl;
    else cout<<"O menor dos inteiros é : "<<min(x,y,z,w)<<endl;
    
    return 0;
}

int min(int n1,int n2,int n3,int n4){
    int minimo;
    minimo=n2;
    if(n1<n2)minimo=n1;
    if(n3<minimo)minimo=n3;
    if(n4<minimo)minimo=n4;
    return minimo;

}