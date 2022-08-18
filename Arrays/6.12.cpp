//Programa que remove o elemento de um vetor
#include<iostream>

using namespace std;
void remove(float [],int ,int );
int main(){

float a[5]={1,2,3,4,5};
remove(a,5,2);
for(int k=0;k<4;k++){
    cout<<a[k]<<endl;
}




    return 0;
}
void remove(float a[],int n ,int i){
    for(int j=i+1;j<n;j++){
        a[j-1]=a[j];
        
    }
    --n;
}