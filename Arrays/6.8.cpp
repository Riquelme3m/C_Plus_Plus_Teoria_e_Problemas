/* Função que retorna o valor mínimo entre os primeiros n elementos do array */

#include<iostream>
using namespace std;
void imprimir(float [],int);
float ordenar(float[],int);
float min(float [],int );
float minimo(float [],int );

int main(){
   float vetor[]={-10,-9,-3,-500,-70,-4};
   //ordenar(vetor,6);
   imprimir(vetor,6);
   cout<<"O menor elemento do vetor é : "<<minimo(vetor,6)<<endl;
   

    return 0;
}


void imprimir(float a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


float ordenar(float a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++)
        if(a[j]>a[j+1])swap(a[j],a[j+1]);}
        return 0;
    }
    
    
float min(float a[],int n){
    return a[0];
}
float minimo(float a[],int n){
    int menor=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<menor)menor=a[i];
    }
    return menor;
}

