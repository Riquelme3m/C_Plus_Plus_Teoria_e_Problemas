//Implementação de uma função que calcula o produto escalar de dois vetores
#include<iostream>

using namespace std;

void produto(float [],int,float []);


int main(){
    float vetora[]={0,1,2,3,4};
    float vetorb[]={0,1,2,3,4};
    produto(vetora,5,vetorb);


    return 0;
}
void produto(float a[],int n,float b[]){
float acumulador=0.0;
for(int i=0;i<n;i++){
    acumulador=a[i]*b[i]+acumulador;
}

/*for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
*/
cout<<"O produto interno desses dois vetores é : "<<acumulador<<endl;


}