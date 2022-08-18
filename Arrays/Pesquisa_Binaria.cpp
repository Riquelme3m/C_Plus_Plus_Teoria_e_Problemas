//Algoritmo de Pesquisa Binária
#include<iostream>
using namespace std;
int index(int ,int [],int);
int main(){
  int b[]={22,35,45,67,89};
  cout<<index(22,b,5)<<endl;


    return 0;
}



int index(int x,int a[],int n){
    int lo=0 ,hi=n-1,i;

    while(lo<hi){
        i=(lo+hi)/2;
        if(a[i]==x)return i;
        if(a[i]<x)lo=i+1;
        else hi=i-1;
    }
    return n;
}
