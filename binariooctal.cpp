#include <iostream>
using namespace std;

int main()
{
    string binario;
    cout << "Digite um número binário: ";
    cin >> binario;

    int octal = 0, base = 1;

    // Converte o número binário para octal
    for (int i = binario.length() - 1; i >= 0; i--)
    {
        if (binario[i] == '1')
        {
            octal += base; // Acumula o valor do dígito
        }
        base = base * 2; // Move para o próximo dígito binário
    }

    // Exibe o número octal correspondente
    cout << "O número octal correspondente é: " << octal << endl;

    return 0;
}
