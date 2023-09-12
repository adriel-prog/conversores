#include <iostream>
using namespace std;

int main()
{
    int decimal, octal[100], i = 0;

    // Solicita ao usuário que digite um número decimal
    cout << "Digite um número decimal: ";
    cin >> decimal;

    // Converte o número decimal para octal
    while (decimal > 0)
    {
        octal[i] = decimal % 8; // Calcula o resto da divisão por 8
        decimal = decimal / 8;  // Divide o número por 8
        i++;
    }

    // Exibe o número octal correspondente
    cout << "O número octal correspondente é: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << octal[j]; // Mostra os dígitos do octal
    }

    cout << endl;

    return 0;
}
