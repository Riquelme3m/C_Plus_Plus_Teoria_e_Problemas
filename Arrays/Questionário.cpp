#include<iostream>
using namespace std;
int const numstudents=3;
int const numquizzes=5;
typedef int Score[numstudents][numquizzes];

void read(Score);
void printQuiz(Score);
void printClass(Score);


int main(){
    Score score;
 cout<<"Insira "<<numquizzes<<" escores para cada estudante:"<<endl;
 read(score);
 cout<<"As médias do teste são: "<<endl;
 printQuiz(score);
 cout<<"As médias da classe são: "<<endl;
 printQuiz(score);
    
    return 0;
}

void read(Score score){
    for(int i=0;i<numstudents;i++){
        cout<<"Estudante "<<i<<" : ";
        for(int j=0;j<numquizzes;j++)
        cin>>score[i][j];
    }
}

void printQuiz(Score score){
    for(int i=0;i<numstudents;i++){
        float sum=0;
        for(int j=0;j<numquizzes;j++){
            sum=sum+score[i][j]; 
        }
        cout<<"\tEstudante "<<i<<": "<<sum/numquizzes<<endl;
        
    }
}

void printClass(Score score){
    for(int i=0;i<numstudents;i++){
        float sum=0;
        int j;
        for( j=0;j<numquizzes;j++){ 
            sum=sum+score[i][j];}
        
        cout<<"\tTeste "<<j<<": "<<sum/numstudents<<endl;
    
}}