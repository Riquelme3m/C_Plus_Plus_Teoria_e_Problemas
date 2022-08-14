/* Programa que retorna x elevado a potência de n , sendo n qualquer inteiro*/
#include <iostream>
using namespace std;

double power(double ,double);

int main(){
cout<<"Insira o número e a potência a qual ele será elevado : Ex (3,2) = 3 * 3 "<<endl;
double x,p;
cin>>x>>p;
cout<<"("<<x<<" elevado a "<<p<<")"<<" é "<<power(x,p)<<endl;

    return 0;
}

double power(double x,double p){
    double pro=1;
    if(p==0)return 1;
    if(p<0){
        for(int i=0;i>p;i--){
            pro=pro*x;
        }
    return (1/pro);

    }
    if(p>0){ 
    for(int i=0;i<p;i++){
        pro=pro*x;
    }
    return pro;
}
return 0;
}

