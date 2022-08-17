#include<iostream>
using namespace std;

int main(){

int matriz[3][4];


for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        matriz[i][j]=i;
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<matriz[i][j]<<"   ";
    }
    cout<<endl;
}




    return 0;
}