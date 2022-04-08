#include <iostream>
#include <string>

using namespace std;

int main()
{
    int indiceFinal;
    char frase[50];
    bool esPalindromo = true;
    cout << "Ingrese la cadena que desea evaluar: " << endl;
    cin.getline(frase,50,'\n');    
    indiceFinal = strlen(frase) - 1;
    for (int i = 0; i < strlen(frase)/2; i++)
    {
        if (frase[i] != frase[indiceFinal])
        {
            esPalindromo = false;
            break;
        }
        indiceFinal--;
    }
    if (esPalindromo)
        cout << "Es palindromo" << endl;
    else
        cout << "No es palindromo" << endl;
}
