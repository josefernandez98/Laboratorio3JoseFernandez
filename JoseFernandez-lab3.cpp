#include <iostream>
#include <math.h>	
using namespace std;

int*** crearMatriz(int);

int  main(int argc, char const *argv[]) {
	int opcion = 1;
	do {
		cout << "Menu" << endl;
		cout << "1. Domingos en Primero." << endl;
		cout << "2. Division Sintetica." << endl;
		cout << "3. Permutaciones." << endl;
		cout << "4. Salir." << endl;
		cout << "Ingrese su opcion:";
		cin >> opcion;
		if (opcion == 1) {

		}//Fin del if 1
		if (opcion == 2) {

		}//Fin del if 2
		if (opcion == 3) {

		}//Fin del if 3
	} while (opcion != 4);
	return 0;
}//Fin del main

int*** crearMatriz(int size) {
	int*** matriz = new int**[size];
	for (int i = 0; i < size; ++i){
		matriz[i] = new int*[3];
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			matriz[i][j] = new int[size];
		}
	}
	return matriz;
}//Fin de crear matriz