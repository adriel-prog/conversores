#include <iostream>
using namespace std;

int main()
{
    string binario;
    cout << "Digite um número binário: ";
    cin >> binario;

    string hexadecimal = "";
    int decimal = 0, base = 1;

    // Converte o número binário para decimal
    for (int i = binario.length() - 1; i >= 0; i--)
    {
        if (binario[i] == '1')
        {
            decimal += base; // Acumula o valor do dígito
        }
        base = base * 2; // Move para o próximo dígito binário
    }

    // Converte o decimal resultante para hexadecimal
    while (decimal > 0)
    {
        int resto = decimal % 16;
        char digitoHexa;

        // Verifica se o dígito é menor que 10 ou não
        if (resto < 10)
        {
            digitoHexa = resto + '0'; // Dígito entre '0' e '9'
        }
        else
        {
            digitoHexa = resto - 10 + 'A'; // Dígito entre 'A' e 'F'
        }

        hexadecimal = digitoHexa + hexadecimal; // Acumula os dígitos hexadecimais
        decimal = decimal / 16;                 // Move para o próximo dígito hexadecimal
    }

    // Exibe o número hexadecimal correspondente
    cout << "O número hexadecimal correspondente é: " << hexadecimal << endl;

    return 0;
}
