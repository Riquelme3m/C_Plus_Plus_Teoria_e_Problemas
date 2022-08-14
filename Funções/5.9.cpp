/* */

#include<iostream>
using namespace std;

float average(float , float , float , float);


int main(){
 cout<<"Insira 4 números para obter a média : "<<endl;
 float n1,n2,n3,n4;
 cin>>n1>>n2>>n3>>n4;
 cout<<"A média é : "<<average(n1,n2,n3,n4)<<endl;


    return 0;
}

float average(float x1, float x2,float x3,float x4){
    return ((x1+x2+x3+x4)/4);




}