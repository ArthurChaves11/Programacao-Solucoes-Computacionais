// Escreva um algoritmo que leia 3 n�meros inteiros e mostre o maior deles.

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

  setlocale(LC_ALL,"portuguese");

    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;

    cout << "Digite o primeiro n�mero: ";
        cin >> numero1;

    cout << "Digite o segundo n�mero: ";
        cin >> numero2;

    cout << "Digite o terceiro n�mero: ";
        cin >> numero3;

    if(numero1 > numero2 && numero3)
    {
        cout << "O maior n�mero �: " << numero1;
    }

    else if(numero2 > numero1 && numero3)
    {
        cout << "O maior n�mero �: " << numero2;
    }

    else if(numero3 > numero1 && numero2)
    {
       cout << "O maior n�mero �: " << numero3;
    }

    else if(numero1 == numero2 || numero3){
        cout << "O maior n�mero �: " << numero1;
    }

}
