#include <iostream> 
using namespace std;
int main(){
    int cantnumeros=0;
    int numeros[cantnumeros];
    int suma=0;
    int promedio;
    cout<<"ingrese la cantidad de numeros deseados:\n";
    cin>> cantnumeros;
    for(int i=0;i<cantnumeros;i++){
        cout<<"ingrese el dato %d "<<i+1<<":"<<endl;
        cin>> numeros[i];}
    for(int i=0; i<cantnumeros;i++){
        suma= suma + numeros[i];
        promedio=suma/cantnumeros;
    }
    cout<<"el promedio es :\n"<<promedio;
    return 0;
}