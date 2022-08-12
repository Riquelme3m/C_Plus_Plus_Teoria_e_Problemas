/*Programa que determina se o ano recebido na entrada é bissexto*/

#include<iostream>
using namespace std;

bool bissexto(int n);

int main(){
    int ano;

while(ano>0){ 
    cout<<"Insira um ano para verificar se ele é bissexto | (Tecle 0 para sair)"<<endl;
    cin>>ano; 
    if(ano<=0)break;
    if(bissexto(ano))cout<<"O ano é bissexto"<<endl;
    else cout<<"O ano não é bissexto"<<endl;
}


    return 0;
}

bool bissexto(int n){
    if(n%4!=0) return false;
    else if(n%100!=0) return true;
    else if(n%400==0)return true;
    else return false;

}