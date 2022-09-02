/* Implementação de uma classe Point para criar um objeto que representa coordenadas em 3 dimensões*/
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    
    public:
Point(double m=0 , double n=0 , double o=0): x(m),y(n),z(o) {} 
void imprimir(){
    cout<<x<<" "<<y<<" "<<z<<endl;
}
void negate(){
    x*=-1;
    y*=-1;
    z*=-1;
}

double norm(double m,double n,double o){
    return sqrt(x*x+y*y+z*z);
}

    private:
double x,y,z;

};

int main(){
    Point coordenadas(1,2,3);
    coordenadas.negate();
    cout<<coordenadas.norm(1,2,3)<<endl;
    coordenadas.imprimir();
    
    return 0;
}