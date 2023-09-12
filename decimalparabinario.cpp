#include <iostream>
#include <string>
using namespace std;

int main()
{
    string binario;
    cout << "Digite um número binário: ";
    cin >> binario;

    int decimal = 0;
    int base = 1;

    // Convertendo de binário para decimal
    for (int i = binario.length() - 1; i >= 0; i--)
    {
        if (binario[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }

    cout << "O número decimal correspondente é: " << decimal << endl;

    return 0;
}
