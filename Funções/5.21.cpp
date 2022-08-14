/* Programa que mostra se um número natural é triangular */
#include <iostream>
using namespace std;

 int isTriangular(int n);

int main(){
cout<<"Digite um número para verificar se ele é triangular : "<<endl;
int z;
cin>>z;
if(isTriangular(z))cout<<"Esse número é triangular."<<endl;
else cout<<"Esse número não é triangular."<<endl;

    return 0;
}


int isTriangular(int n){
int sum=0;
if(n==0)return 1;
int i=1;
while(i<=n){
sum=sum+i;
i++;
if(sum==n)return 1;

}
return 0;
}





