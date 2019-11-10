#include <iostream>
using namespace std;

int afp(int p){
    float AFP;
    AFP=p*0.075;
    cout<<"descuento de AFP: "<<AFP<<" $"<<endl;
    return AFP;
}
int ISS(int p){
    float iss;
    iss=p*0.03;
    cout<<"descuento de seguro social: "<<iss<<" $"<<endl;
    return iss;
}
int renta(int p){
    float renta2;
    renta2=p*0.06405;
    cout<<"descuetno de renta: "<<renta2<<" $\n";
    return renta2;
}
int extra(int p){
    int extra,horas=0,total;
    cout<<"ingrese la cantidad de horas extra: ";
    cin>>horas;
    extra=horas*3;
    total=p+extra;
    cout<<"salario con horas extra: "<<total<<" $\n";
    return total;
}
int main(){
    int p; 
    cout<<"ingrese su salario mensual:\n";
    cin>>p;
    afp(p);
    ISS(p);
    renta(p);
    extra(p);

    return 0;
}
