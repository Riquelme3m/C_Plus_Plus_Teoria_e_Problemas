/* Programa que calcula o número de combinações simples indiretamente por meio de 1 função*/
#include<iostream>
using namespace std;

int fatorial(int);
int main(){
    cout<<"Insira o número de objetos do conjunto : "<<endl;
    int x1,x2;
    cin>>x1;
    cout<<"Insira o número de objetos escolhidos no conjunto "<<endl;
    cin>>x2;
    cout<<"O número de combinações possíveis é : "<<fatorial(x1)/(fatorial(x1-x2)*fatorial(x2))<<endl;
    


    return 0;
}

int fatorial(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;

}

