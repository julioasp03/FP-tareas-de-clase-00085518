#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Razones por las que no se pudo engresar correctamente a facebook:\n-razon 1\n-razon 2\n-razon 3\n-razon 4\n-razon 5\n";
    cin>>x;
    switch (x)
    {
    case 1: 
        cout<<"error de credenciales";
        break;
    case 2:
        cout<<"error de credenciales";
        break;
    case 3:
        cout<<"error de credenciales";
        break;
    case 4:
        cout<<"su conexion no es la adecuada";
        break;
    case 5:
        cout<<"su cuenta no existe";
        break;
    default:
        break;
    }
    return 0;
}
