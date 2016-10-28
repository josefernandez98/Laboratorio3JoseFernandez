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
		cout << endl;
		if (opcion == 1) {
			int bisiesto = 0;
			for (int i = 0; i < 100; ++i) {
				for (int j = 0; j < 12; ++j) {
					if (j == 1) {
						if (bisiesto == 4) {
							bisiesto = 0;

						}
					} else {

					}
				}//Fin del año
				bisiesto++;
			}//Fin del siglo
		}//Fin del if 1
		if (opcion == 2) {
			int grado = 0;
			cout << "Ingrese el grado mas alto del polinomio:";
			cin >> grado;
			int polinomio[grado + 1];
			int size = grado + 1;
			int contador = 0;
			for (int i = size; i >= 0; --i) {
				int valor = 0;
				cout << "Ingrese el polinomio x^" << i;
				cin >> valor;
				polinomio[contador] = valor;
				contador++; 
			}
			int a = 0;
			cout << endl << "Ingrese a:";
			cin >> a;
			crearMatriz(size);
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