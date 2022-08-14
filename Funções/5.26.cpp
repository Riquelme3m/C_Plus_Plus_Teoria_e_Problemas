/*Programa que retora o volume e a área da superfície de uma esfera */
#include <iostream>
#include<cmath>

using namespace std;

void computeTriangle(float& a,float&p,float x,float y,float z);
 
int main(){
    cout<<"Digite os comprimentos do lado desse triângulo na seguinte ordem (cateto adjacente,cateto oposto,hipotenusa): "<<endl;
    float area,perimetro,a,b,c;
    cin>>a>>b>>c;
    computeTriangle(area,perimetro,a,b,c);
    cout<<"A área desse triângulo é : " <<area<<endl;
    cout<<"O perímetro desse triângulo é : "<<perimetro<<endl;

    return 0;
}
