#include <iostream>
#include <string>
using namespace std;
int factorialRec(int);
int factorialIt(int);
int sumatoriaRec(int);
int sumatoriaIt(int);
int main(){
	cout << "start\n";
	int a = 0;
	int opcion;
	bool gate = true;
	int num;
	while (gate) {
	cout << "---Menu---"<<"\n";
	cout << "1) factorial Recursivo"<<"\n";
	cout << "2) factorial Iterativo"<<"\n";
	cout << "3) sumatoria Recursivo"<<"\n";
	cout << "4) sumatoria Iterativa"<<"\n";
	cout << "5) contar chiste"<<"\n";
	cout << "otro) Salir"<<"\n";
	cin >> opcion;
	switch (opcion) {
		case 1:
			cin >> num;
			a = factorialRec(num);
			break;
		case 2:
			cin >> num;
			a = factorialIt(num);	
			break;
		case 3:
			cin >> num;
			a = sumatoriaRec(num);
			break;
		case 4:
			cin >> num;
			a = sumatoriaIt(num); 
			break;
		case 5:
			cout << "¿como se reconoce a"<<"\n"<< 
				"un programador falso?"<<"\n";
			cout << "\n";
			cout << "yo se C, C+, C++, y C-hashtag"<<"\n";
			break;
		default:
			cout << "Adios! :3"<<"\n";
			gate = false;
			break;
	}
	cout << a;
	}
}
int factorialRec(int a) 
{
	if (a==0) {
		return 1;
	} else {
		return a* factorialRec(a-1);
	}
}
int factorialIt(int a) {
	int b = 1;
	while (a>0) {
		b = b * a;
		a--;
	}
	return b;
}
int sumatoriaRec(int a) {
	if (a==1) {
		return 1;
	} else {
		return a + sumatoriaRec(a-1);
	}
}
int sumatoriaIt(int a) {
	int b = 0;
	while (a > 0) {
		b = b + a;
		a--;
	}
	return b;
}
