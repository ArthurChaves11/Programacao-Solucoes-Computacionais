#include <iostream>
using namespace std;

int main()
{

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

