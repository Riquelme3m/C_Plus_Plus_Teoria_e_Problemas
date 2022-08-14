/*Programa que determina se o número inteiro é pentagonal  */
#include <iostream>

using namespace std;

int isPentagonal(int n);
 
int main(){
cout<<"Digite um número para verificar se ele é pentagonal: "<<endl;
int n1;
cin>>n1;
if(isPentagonal(n1))cout<<"Esse número é pentagonal"<<endl;
else cout<<"Esse número não é pentagonal"<<endl;

    return 0;
}

int isPentagonal(int n){
    if(n==0||n==1)return 1;
    if(n<0)return 0;
    int i=1;
    int sum=1;
    int aux=1;
    while(i<=n){
        i++;
        aux=aux+3;
        sum=sum+aux;
        if(n==sum)return 1;
    }
   
    return 0;
}
