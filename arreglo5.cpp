#include <iostream> 
using namespace std;
int main(){
    int cantNotas;
    cout<<"ingrese la cantidad de notas:"<<endl;
    cin >> cantNotas;

    float notas[cantNotas];
    float ponderaciones[cantNotas];
    float suma1=0,multi[cantNotas],suma2=0,promedio;
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
      for(int i=0;i<cantNotas;i++){
        multi[i]=notas[i]*ponderaciones[i];
        suma1=suma1+ponderaciones[i];
        suma2=suma2+multi[i];
        promedio=suma2/suma1;
    }
    cout<<"su promedio es igual a: "<<promedio;
    
    return 0;
}