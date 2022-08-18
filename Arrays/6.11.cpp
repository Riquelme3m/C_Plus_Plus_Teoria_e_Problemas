//Programa que exibe os dois maiores valores de um array.
#include<iostream>
using namespace std;

void ultms(float& ,float& ,float [],int);

int main(){

float vetor[]={0.0,1.1,4.7,5.9};
int n=4;
float max1;
float max2;
ultms(max1,max2,vetor,n);
cout<<max1<<" "<<max2<<endl;





    return 0;
}

void ultms(float& max1,float& max2,float a[],int n){
    int i1=0,i2;
    for(int i=0;i<n;i++){
        if(a[i]>a[i1])i1=i;}

        max1=a[i1];
    i2=(i1==0? 1:0);

    for(int i=i2+1;i<n;i++){ 
    if(i!=i1 && a[i]>a[i2])i2=i;}
    
    max2=a[i2];    
    }
