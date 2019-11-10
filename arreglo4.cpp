#include <iostream> 
using namespace std;
int main(){
    int cantNotas;
    cout<<"ingrese la cantidad de notas:"<<endl;
    cin >> cantNotas;

    float notas[cantNotas];
    float ponderaciones[cantNotas];
    for (int i = 0; i < cantNotas; i++)
    {
        cout<<"ingrese la nota "<<i+1<<":"<<endl;
        cin>> notas[i];
    }
    for (int i = 0; i < cantNotas; i++)
    {
        cout<<"ingrese la ponderacion "<<i+1<<":"<<endl;
        cin>> ponderaciones[i];
    }
    cout<<"las notas son:\n";
    for(int i=0; i < cantNotas ;i++){
        cout<<notas[i]<<endl;
    }
    cout<<"las ponderaciones son:\n";
    for(int i=0;i<cantNotas;i++){
        cout<<ponderaciones[i]<<endl;
    }
    
    return 0;
}