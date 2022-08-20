//Programa que implementa uma função para inverter o vetor.
#include <iostream>
using namespace std;
void reverse(int [],int);
int main(){
int vetor []={0,1,2,3,4};
reverse(vetor,5);
for(int i=0;i<5;i++){
    cout<<vetor[i]<<endl;
}


}
void reverse(int a[],int n){
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-1-i]);
    }
}

