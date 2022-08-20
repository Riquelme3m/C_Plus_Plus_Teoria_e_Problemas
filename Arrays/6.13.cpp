
//Removendo um elemento de um vetor e decrementando 1 no tamanho do mesmo vetor;
#include<iostream>
using namespace std;
void removeFirst(float [],int , int);


int main(){
    float vetor[5]={1,2,3,5,7};
    removeFirst(vetor,5,3);

   






    return 0;
}
void removeFirst(float a [],int n, int x){
    int i=0;
    for(i;i<n;i++){
        if(a[i]==x){
           
            for(int j=i+1;j<n;j++){
                a[j-1]=a[j];
                
                

            }
            --n;
            }
        }
         for(int k=0;k<n;k++){
        cout<<a[k]<<endl;
    }
    

    }
   
     
   

