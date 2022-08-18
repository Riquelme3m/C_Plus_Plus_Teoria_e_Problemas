//Retorna o endereço do menor valor de um vetor
#include<iostream>
using namespace std;

int minIndex(float [],int);

int main(){
float vetor[5]={4,5,1,6,7};
cout<<"O índice do menor valor do vetor é : "<<minIndex(vetor,5)<<endl;;
    return 0;
}

int minIndex(float a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<a[j])j=i;
    }
   
    return j;
}