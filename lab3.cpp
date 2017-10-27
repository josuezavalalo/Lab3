#include <iostream>
#include <string>
using namespace std;

int main(){

int opcion;

cout << "Numero De Ejercicio"; cin >> opcion;

char s='s';

while(s=='s'){

	switch (opcion){

		case 1: 
			break;

		case 2: 
			break;

		case 3: string fecha;
			cout<<"Ingrese Fecha : "; cin >> fecha;
			cout << "Fecha:  "<< fecha.substr(0,4)<< endl;
			cout<< "Mes: " << fecha.substr(4,5)<< endl;
			cout << "Dia : " << fecha.substr(6,8); 
			break;
	}
cout<< "Desea Continuar s/n";cin >> s;
}
 return 0;
}
