/*Converter uma função void com parâmetro de referência em uma função não-void com parâmetro de retorno*/

#include<iostream>
using namespace std;
void f(int &x);
int g(int y);

int main(){
    int x=22,y=44;
    f(x);
    g(y);



    return 0;
}


void f(int &n){
    n*=2;
}
//São funções "equivalentes"
int g(int l){
    return 2*l;
}