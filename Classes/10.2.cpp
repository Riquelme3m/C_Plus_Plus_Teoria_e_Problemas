#include<iostream>
using namespace std;

class Carro{
    private :
    string _nome;
    string _cor;
    int _pot;
    int _velMax;
    int _vel;

    public:
    void insere(string nome,string cor,int pot,int velMax){
       _nome=nome;
       _cor=cor;
       _pot=pot;
       _velMax=velMax;
       _vel=0;
 
    }
    void imprimi(){
        cout<<"O nome do carro é : "<<_nome<<endl;
        cout<<"A cor do carro é : "<<_cor<<endl;
        cout<<"A potência do carro é : "<<_pot<<endl;
        cout<<"A velocidade máxima do carro é : "<<_velMax<<endl;
    }
    void alteraVel(int velocidade){
        _vel=velocidade;
        if(velocidade>_velMax){
            velocidade=_velMax;
        }
        if(velocidade<100){
            velocidade=0;
        }
    }
    void imprimiVel(){
        cout<<"A velocidade atual do carro é : "<<_vel<<endl;
    }


};


int main(){

Carro car1,car2,car3,car4;
car1.insere("Nivus","Azul",2200,190);
car1.imprimi();
car1.alteraVel(400);
cout<<endl<<endl;
car1.imprimiVel();



    return 0;
}