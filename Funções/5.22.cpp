/*Programa que determina se o número inteiro é quadrado  */
#include <iostream>

using namespace std;

int isSquare(int n);
 
int main(){
cout<<"Digite um número para verificar se ele é quadrado : "<<endl;
int n1;
cin>>n1;
if(isSquare(n1))cout<<"Esse número é quadrado"<<endl;
else cout<<"Esse número não é quadrado"<<endl;

    return 0;
}

int isSquare(int n){
    int sum;
    if(n<0)return 0;
    for(int i=0;i<=n;i++){
        sum=i*i;
        if(n==sum)return 1;

    }
    return 0;
}
