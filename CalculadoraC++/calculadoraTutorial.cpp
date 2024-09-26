#include <iostream>
#include "calculadora.h"

using namespace std;


int main()
{
    double x = 0.0;
    char operador = '+';
    double y = 0.0;
    double result = 0.0;

    cout << "CALCULADORA TESTE" << endl;
    cout << "coloque dois numeros e um operador" << endl;
    
    Calculadora c;
    while(true)
    {
        cin >> x >> operador >> y;
        result = c.Calcular(x,operador,y);
        cout << "resultado = " << result << endl; 
    }
};