/* Outra forma de abordar o problema de combinação como mostrado no problema 5.13*/
#include<iostream>
using namespace std;

int combina(int n,int k);
int main(){
    
    for(int i=-1;i<9;i++){
        for(int j=-1;j<=i+1;j++)
        cout<<" "<<combina(i,j);
        cout<<endl;
        }

return 0;
}

int combina(int n,int k){
    int c=1;
    for(int i=1;i<=k;i++,n--)
    c=c*n/i;
return c;
    
}

