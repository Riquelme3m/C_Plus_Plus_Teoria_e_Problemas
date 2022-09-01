#include<iostream>
using namespace std;

class Ratio{
    public:
    void assign(int ,int);
    double convert();
    void invert();
    void print();


    private:
    int num ,den;
};


int main(){
    Ratio numero;
    numero.assign(5,10);
    cout<<numero.convert()<<endl;
    numero.invert();
    numero.print();
    cout<<endl;

    return 0;
}



void Ratio::assign(int numerador , int denominador){
    num=numerador;
    den=denominador;


}
double Ratio::convert(){
    return double(num)/den;

}
void Ratio::invert(){
    int temp=num;
    num=den;
    den=temp;
}
void Ratio::print(){
    cout<<num<<'/'<<den;
}