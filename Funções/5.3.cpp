/*Verificar a validade da relação trigonométrica cos2x = 2cos²x - 1 */
#include<cmath>
#include<iostream>
using namespace std;


int main(){
    float value;
    cout<<"Insira um valor: "<<endl;
    cin>>value;
    cout<<cos(2*value)<<" = ";
    cout<<2*pow(cos(value),2)-1;
    cout<<endl;






    return 0;
}
