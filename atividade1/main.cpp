//Na venda da esquina, as ma��s custam R$ 0,30 cada se forem compradasmenos do que uma d�zia, e R$ 0,25 se forem compradas pelomenos doze.
//Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o valor total da compra.


#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");


    int macas = 0;
    float preco_macas = 0;
    float valor_total = 0;


    cout << "Ma��s compradas: ";
        cin >> macas;


    if(macas < 12)
    {
        preco_macas = 0.30;
        valor_total = macas * preco_macas;

        cout << "O valor total foi de: R$" << valor_total;
    }

    else {
        preco_macas = 0.25;
        valor_total = macas * preco_macas;

        cout << "O valor total foi de R$" << valor_total;
    }

}

