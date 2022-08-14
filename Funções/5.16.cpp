/* Programa que exibi o triângulo de Pascal até a linha número 12*/
#include<iostream>
#include<iomanip>
using namespace std;

int comb(int n,int k);
int main(){
int const m=13;
for(int i=0;i<m;i++){
    for(int j=1;j<m-i;j++)
    cout<<setw(2)<<"";
    for(int j=0;j<=i;j++)
    cout<<setw(4)<<comb(i,j);
    cout<<endl;
}




    return 0;
}

int comb(int n ,int k){
    if(n<0||k<0||k>n)return 0;
    long int c=1;
    for(int i=1;i<=k;i++,n--)
        c=c*n/i;
        return c;
    

}



