/*Programa que retora a área e a circunferência de um círculo  */
#include <iostream>
#include<cmath>

using namespace std;

void computeCircle(float& a,float&c,float r);
 
int main(){
    cout<<"Digite o raio do círculo para obter a área e a circunferência : "<<endl;
    float area,circun,r;
    cin>>r;
    computeCircle(area,circun,r);
    cout<<"A área desse círculo é : " <<area<<endl;
    cout<<"A circunferência desse círculo é :"<<circun<<endl;

    return 0;
}

void computeCircle(float& a,float& c,float r){
     a=3.141528*pow(r,2);
     c=2*3.141528*r;
    
}
