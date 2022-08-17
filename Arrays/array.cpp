#include<iostream>
using namespace std;

void sort(float[],int);

int main(){
  
float a[]={55.5,22.5,99.9,66.6,44.4,88.8,33.3,77.7};
sort(a,8);





    return 0;
}

void sort(float a[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
   for(int i=0;i<n;i++){
       cout<<a[i]<<endl;
   }
}