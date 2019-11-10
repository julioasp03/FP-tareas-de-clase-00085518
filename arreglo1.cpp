#include <iostream> 
using namespace std;
int main(){
    int cantnumeros=5;
    int numeros[cantnumeros];
    for(int i=0;i<cantnumeros;i++){
        cout<<"ingrese el dato %d"<<i+1<<":"<<endl;
        cin>> numeros[i];}
    cout<<"los numeros ingresados son:\n";
    for(int i=0; i<cantnumeros;i++){
        cout<<numeros[i]<<endl;
    }
    return 0;
}