#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    
    int cont = 3;
    int matrizsuperior[3][3], matrizinferior [3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (i > j) {
                matrizsuperior[i][j] = 0;
            } else {
                matrizsuperior[i][j] = 1 + rand() % (10 - 1);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (i < j) {
                matrizinferior[i][j] = 0; 
            } else {
                matrizinferior[i][j] = 1 + rand() % (10 - 1); 
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           
            cout << matrizsuperior[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<"\n\n";
    
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            cout << matrizinferior[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}