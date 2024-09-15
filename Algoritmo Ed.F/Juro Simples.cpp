#include <iostream>

#include <locale.h>

#include <windows.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	double M, J, C, i, t, iog;
	
	SetConsoleTextAttribute(hConsole, 14);
	
	cout << "-------------------------------------- << JURO SIMPLES >> ----------------------------------------------- \n\n";
	
	SetConsoleTextAttribute(hConsole, 7);
	
	cout << "Digite o valor do CAPITAL (C): \n";
	cout << ">> ";
	cin >> C;
	
	cout << "Digite o valor da TAXA (i): \n";
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Verifique se a TAXA e TEMPO estão na mesma unidade de medida de tempo \n" ;
	SetConsoleTextAttribute(hConsole, 7);
	cout << ">> ";
	cin >> i;
	
	cout << "Digite o valor do TEMPO (t): \n";
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Verifique se a TAXA e TEMPO estão na mesma unidade de medida de tempo \n" ;
	SetConsoleTextAttribute(hConsole, 7);
	cout << ">> ";
	cin >> t;
	
	J = (C*i*t)/100;
	M = J + C;
	
	SetConsoleTextAttribute(hConsole, 14);
	
	cout << "\n";
	cout << ">>>>> RESULTADO <<<<< \n\n";
	
	cout << "Capital (C): " << C << "\n";
	cout << "Taxa (i): " << i << "\n";
	cout << "Tempo (t): " << t << "\n";
	cout << "Juros (J): " << J << "\n";
	cout << "Montante (M): " << M << "\n";
	cout << "\n";
	
	SetConsoleTextAttribute(hConsole, 7);
	
	
system("pause");
return 0;
}
