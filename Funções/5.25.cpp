/*Programa que retora a área e o perímetro de um triângulo qualquer */
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

void computeTriangle(float& a,float&p,float x,float y,float z){
    p=x+y+z;
    a=sqrt(p/2*(p/2-x)*(p/2-y)*(p/2-z));

}
