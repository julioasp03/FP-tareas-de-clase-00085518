#include <iostream>
using namespace std;
int main(){
   int matriz[2][2], n;
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           cout<<"ingrese el valor ["<<i<<"]["<<j<<"]:\n";
           cin>>matriz[i][j];
       }
   }
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0;  j< 2; j++)
       {
           cout<<matriz[i][j];
       }
       cout<<endl;
   }
   

    
    return 0;
}