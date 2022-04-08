#include <iostream>
#include <string>

using namespace std;



int main()
{
	int indiceFinal;
	char frase[50];
	char frasePreProcesada[50];
	bool esPalindromo = true;
	int indiceNuevo = 0;

	cout << "Ingrese la cadena que desea evaluar: " << endl;
	cin.getline(frase, 50, '\n');

	for (int i = 0; i < strlen(frase); i++)
	{
		if (frase[i] != ' ')
			frasePreProcesada[indiceNuevo++] = frase[i];
	}
	frasePreProcesada[indiceNuevo] = '\0';

	
	indiceFinal = strlen(frasePreProcesada) - 1;

	for (int i = 0; i < strlen(frasePreProcesada) / 2; i++)
	{
		if (frasePreProcesada[i] != frasePreProcesada[indiceFinal])
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
