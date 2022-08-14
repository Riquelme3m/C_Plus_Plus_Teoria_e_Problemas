/* Implementação da função que calcula o número de combinações simples
 entre o número total de objetos do conjunto e o número de objetos escolhidos desse conjunto*/
#include<iostream>
using namespace std;

int combi(int , int);
int fatorial(int);
int main(){
    int n,z;
    cout<<"Insira o número de objetos do conjunto: "<<endl;
    cin>>n;
    cout<<"Insira o número de objetos escolhidos : "<<endl;
    cin>>z;
    if(n<0||z<0)cout<<"Impossível calcular as combinações para os parâmetros dados"<<endl;
    else if(z>n)cout<<"Impossível calcular as combinações para os parâmetros dados"<<endl;
    else cout<<"O número de combinações possíveis é "<<combi(n,z)<<endl;

    return 0;
}

int fatorial(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;

}
int combi(int l,int k){
    
    return fatorial(l)/(fatorial(k)*fatorial(l-k));


}
