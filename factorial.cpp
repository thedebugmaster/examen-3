#include <iostream>
using namespace std;


int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);  // aqui mande a llamar la funcion recursiva
    }
}

int main() {
    int num;
    cout << "Ingrese un numero porfavor: ";
    cin >> num;

    if (num < 0)
    {
        cout << "No existen factoriales para numeros negativos" << endl;
    }
    else
    {
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }

    return 0;
}




