/*Programa que retora o volume e a área da superfície de uma esfera */
#include <iostream>
#include<cmath>

using namespace std;

void computeSphere(float& s,float&v,float r);
 
int main(){
    cout<<"Digite o raio da esfera: "<<endl;
    float area,volume,raio;
    cin>>raio;
    computeSphere(area,volume,raio);
    cout<<"O volume dessa esfera é : "<<area<<endl;
    cout<<"A area dessa esfera é : "<<volume<<endl;

    return 0;
}

void computeSphere(float& s,float&v,float r){
    double const PI=3.141598;
    s=4*PI*pow(r,2);
    v=4*PI*pow(r,3)/3;

}