//Implementação de uma função que soma os dois valores de um vetor com o mesmo número de elementos n;
#include<iostream>

using namespace std;

void adicionar(float [],int,float []);


int main(){
    float vetora[]={0,1,2,3,4};
    float vetorb[]={0,1,2,3,4};
    adicionar(vetora,5,vetorb);


    return 0;
}
void adicionar(float a[],int n,float b[]){

for(int i=0;i<n;i++){
    a[i]=a[i]+b[i];
}

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}




}