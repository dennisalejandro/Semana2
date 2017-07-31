#include <iostream>
#include <string>
using namespace std;
int menu();
void leerElementos(int[], int);

int main()
{
	menu();
	 cout << 0
	 return 0;
}
int menu()
{
	   int opcion = 0;
	        while (opcion == 0) 
		{
	        cout << "---MENU---\n";
       		cout << "1. Leer Elementos\n";
		 cout << "2. Imprimir Elementos\n";
		 cout << "3. Salir\n";
		 cout << "Ingrese una opcion :)\n";
		cin >> opcion;									        if (opcion < 1 || opcion >3) {
			cout << "La opcion ingresada no es valida\n";
			         opcion = 0;	
			}
			switch (opcion) 
			{
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
			}
		}
}
