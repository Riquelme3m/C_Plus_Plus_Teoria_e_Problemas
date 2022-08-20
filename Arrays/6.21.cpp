//Programa que mostra o número de ocorrências de um determinado valor em um array.
#include<iostream>
using namespace std;

int frequencia(float [], int, int);

int main(){
    float vetor[]={0,1,1,2,3,4,5,6,8,8,8};
    cout<<"O número de ocorrências do número 1 no vetor é : "<<frequencia(vetor,11,1)<<endl;




    return 0;
}

int frequencia(float a[],int n,int x){
    int count=0;
for(int i=0;i<n;i++){
    if(a[i]==x)count++;
    




}

return count;
}