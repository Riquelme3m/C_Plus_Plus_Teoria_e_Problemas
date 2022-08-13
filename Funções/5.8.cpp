/* Programa que determina o menor valor de 4 inteiros inseridos , utilizando 2 funções */

#include<iostream>
using namespace std;

int min(int , int , int , int);

int main(){
  cout<<"Insira 4 inteiros : "<<endl;
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<"O menor valor é : "<<min(a,b,c,d)<<endl;


    return 0;
}

int min(int ,int);

int min(int x1,int x2,int x3,int x4){
int m12=min(x1,x2);
int m34=min(x3,x4);
return(m12<m34? m12:m34);
}

int min(int n1,int n2){
    return(n1<n2? n1:n2);}