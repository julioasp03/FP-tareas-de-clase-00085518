#include<iostream>
using namespace std;
int main(){
int m;
cout<<"\t\t\tElija una opcion\n\n";
cout<<"1 Desayuno\n";
cout<<"2 Almuerzo\n";
cout<<"3 Cena\n";
cout<<"4 Postres\n";
cout<<"5 Antojos\n";
cout<<"6 Salir\n\n";
cin>>m;
switch(m){
case 1:
cout<<"Homelete"<<endl;
cout<<"Fruta"<<endl;
cout<<"Tipico"<<endl;
break;
case 2:
cout<<"Sopa"<<endl;
break;
case 3:
cout<<"Por el momento no tenemos cenas "<<endl;
break;
case 4:
cout<<"Pastel de chocolate"<<endl;
cout<<"Sorbete"<<endl;
break;
case 5:
cout<<"Empanadas o pastelitos….. "<<endl;
cout<<"\n 1 Empanada"<<endl;
cout<<"\n 2 Pastelito"<<endl;
break;
case 6:
cout<<"Adios"<<endl;
break;
default: cout<<"El valor ingresado no esta en el menu"<<endl;
}

return 0;
}