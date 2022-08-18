//Retorna o Maior e o Menor valor armazenado em um array.
#include<iostream>
using namespace std;
void maxmin(float [],int );
int main(){
    float vetor[5]={5,4,10,11,6};
    maxmin(vetor,5);





    return 0;
}

void maxmin(float a[],int n){ 
 float min=a[0];
 float max=a[0];
for(int i=0;i<n;i++)
    if(a[i]<min)min=a[i];
     else if(a[i]>max)max=a[i];

cout<<"Maior valor : "<<max<<endl;
cout<<"Menor valor : "<<min<<endl;
}
    

