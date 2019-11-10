#include <iostream>
using namespace std;
int main(){
    int n,m;
    int matriz[100][100];
    cout<<"ingrese el valor de n:\n";
    cin>>n;
    cout<<"ingrese el valor de m:\n";
    cin>>m;
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           cout<<"ingrese el valor ["<<i<<"]["<<j<<"]:\n";
           cin>>matriz[i][j];
       }
   }
   for (int i = 0; i < n; i++)
   {
       for (int j = 0;  j< m; j++)
       {
           cout<<matriz[i][j];
       }
       cout<<endl;
   }
   

    
    return 0;
}