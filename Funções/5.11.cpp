/*Implementação da função fatorial*/

#include<iostream>
using namespace std;

int fatorial(int);

int main(){
 
cout<<"Insira um número para obter o seu fatorial : "<<endl;
int x;
cin>>x;
cout<<"O fatorial de "<<x<<" é "<<fatorial(x)<<endl;

    return 0;
}

int fatorial(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;

}