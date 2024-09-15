#include <iostream>

#include <locale.h>

#include <windows.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	double P, valor, R;
	
	SetConsoleTextAttribute(hConsole, 14);
	
	cout << "-------------------------------------- << PORCENTAGEM >> ----------------------------------------------- \n\n";
	
	SetConsoleTextAttribute(hConsole, 7);
	
	cout << "Digite a PORCENTAGEM: \n";
	cout << ">> ";
	cin >> P;
	
	cout << "Digite o VALOR: \n";
	cout << ">> ";
	cin >> valor;
	
	R = (P / 100) * valor;
	
	SetConsoleTextAttribute(hConsole, 14);
	
	cout << "\n";
	cout << ">>>>> RESULTADO <<<<< \n\n";
	
	cout << "Porcentagem: " << P << "%" << "\n";
	cout << "Valor: " << valor << "\n";
	cout << "\n";
	cout << P << "% " << "de " << valor << " é " << "----> "<< R << "\n";
	cout << "\n";
	
	SetConsoleTextAttribute(hConsole, 7);
	
	
system("pause");
return 0;
}
