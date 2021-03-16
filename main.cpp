#include <iostream>

using namespace std;

//for(iniciciacion;condicion;aumento de variable);

int main()
{
    char letra;
    int numero_letras = 7;
    for(int i = 0; i < numero_letras;i++){
        letra = 'A';

        for(int j = 0; j<=i;j++){
            cout << letra << ' ';
            letra = letra + 1;
        }

        for(int j = 0; j < 11 - 2*i; j++){
            cout << "  ";
        }

        letra = 'A'+i;
        for(int j = 0; j <= i;j++){
            if(letra != 'G') cout << letra << ' ';
            letra = letra - 1;
        }
        cout << endl;

    }
    for(int i = 7; i > 0;i--){
        letra = 'A';

        for(int j = 0; j<=i;j++){
            cout << letra << ' ';
            letra = letra + 1;
        }

        for(int j = 0; j < 11 - 2*i; j++){
            cout << "  ";
        }

        letra = 'A'+i;
        for(int j = 0; j <= i;j++){
            if(letra != 'G') cout << letra << ' ';
            letra = letra - 1;
        }
        cout << endl;

    }

    return 0;
}
