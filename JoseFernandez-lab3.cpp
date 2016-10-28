#include <iostream>
#include <math.h>	
#include <string>
#include <sstream>
using namespace std;

//int*** crearMatriz(int);
void imprimirMatriz(int, int**, int);
void Permutaciones (string);
int Gregor();
int** llenarMatriz(int**, int*, int);

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
			int domingos = 0;
			domingos = Gregor();
			cout << domingos << endl;
		}//Fin del if 1
		if (opcion == 2) {
			int grado = 0;
			cout << "Ingrese el grado mas alto del polinomio:";
			cin >> grado;
			int polinomio[grado + 1];
			int size = grado + 1;
			int contador = 0;
			for (int i = grado; i >= 0; --i) {
				int valor = 0;
				cout << "Ingrese el polinomio x^" << i << ":";
				cin >> valor;
				polinomio[contador] = valor;
				contador++; 
			}
			int a = 0;
			cout << endl << "Ingrese a:";
			cin >> a;
			int** matriz = new int*[3];
			for (int i = 0; i < 3; ++i) {
				matriz[i] = new int[size];
			}//Fin del for
			matriz = llenarMatriz(matriz, polinomio, size);
			imprimirMatriz(size, matriz, a);
			for (int i = 0; i < 5; ++i) {
				delete[] matriz[i];
				matriz[i] = NULL;	
			}
			delete[] matriz;
		}//Fin del if 2
		if (opcion == 3) {
			int numero = 0;
			cout << "Ingrese el numero:";
			cin >> numero;
			cout << endl;
			stringstream ss;
			ss << numero;
			string valor = ss.str();
			Permutaciones(valor);
			cout << endl;
		}//Fin del if 3
	} while (opcion != 4);
	return 0;
}//Fin del main

void Permutaciones (string numeros) {
	if (numeros.size() == 1) {
		cout << numeros;
	}//
	if (numeros.size() == 2) {
		cout << numeros[0] << numeros[1] << endl;
		cout << numeros[1] << numeros[0] << endl;
	}//
	if (numeros.size() == 3) {
		cout << numeros[0] << numeros[1] << numeros[2] << endl;
		cout << numeros[0] << numeros[2] << numeros[1] << endl;
		cout << numeros[1] << numeros[0] << numeros[2] << endl;
		cout << numeros[1] << numeros[2] << numeros[0] << endl;
		cout << numeros[2] << numeros[0] << numeros[1] << endl;
		cout << numeros[2] << numeros[1] << numeros[0] << endl;
	}//
	if (numeros.size() == 4) {
		cout << numeros[0] << numeros[1] << numeros[2] << numeros[3] << endl;
		cout << numeros[0] << numeros[1] << numeros[2] << numeros[3] << endl;
		cout << numeros[0] << numeros[1] << numeros[2] << numeros[3] << endl;
		cout << numeros[0] << numeros[1] << numeros[2] << numeros[3] << endl;
		cout << numeros[0] << numeros[1] << numeros[2] << numeros[3] << endl;
		cout << numeros[0] << numeros[1] << numeros[2] << numeros[3] << endl;

		cout << numeros[1] << numeros[0] << numeros[2] << numeros[3] << endl;
		cout << numeros[1] << numeros[0] << numeros[3] << numeros[2] << endl;
		cout << numeros[1] << numeros[2] << numeros[3] << numeros[0] << endl;
		cout << numeros[1] << numeros[2] << numeros[0] << numeros[3] << endl;
		cout << numeros[1] << numeros[3] << numeros[0] << numeros[2] << endl;
		cout << numeros[1] << numeros[3] << numeros[2] << numeros[0] << endl;

		cout << numeros[2] << numeros[0] << numeros[1] << numeros[3] << endl;
		cout << numeros[2] << numeros[0] << numeros[3] << numeros[1] << endl;
		cout << numeros[2] << numeros[1] << numeros[0] << numeros[3] << endl;
		cout << numeros[2] << numeros[1] << numeros[3] << numeros[0] << endl;
		cout << numeros[2] << numeros[3] << numeros[1] << numeros[0] << endl;
		cout << numeros[2] << numeros[3] << numeros[0] << numeros[1] << endl;


	}
}//Fin del metodo

int Gregor () {
	int dia = 1;
	int final = 0;
	for (int i = 1900; i < 2000; ++i) {
		if (i%4 == 0) {
			//BISIESTO
			for (int j = 1; j <= 12; ++j) {
				if (j == 9||j == 4||j == 6||j == 11) {
					for (int k = 1; k <= 30; ++k) {
						if (dia==7) {
							if (k==1) {
								final++;
							}
							dia = 1;
						} else {
							dia++;
						}
					}//fin
				} else if (j == 2) {
					for (int k = 1; k <= 29; ++k) {
						if (dia==7) {
							if (k==1) {
								final++;
							}
							dia = 1;
						} else {
							dia++;
						}	
					}//Fin
				} else {
					for (int k = 1; k <= 31; ++k) {
						if (dia==7) {
							if (k==1) {
								final++;
							}
							dia = 1;
						} else {
							dia++;
						}
					}//Fin
				} 
			}//Fin del año
		} else {
			//NO BISIESTO
			for (int j = 1; j <= 12; ++j) {
				if ((j == 9)||(j == 4)||(j == 6)||(j == 11)) {
					for (int k = 1; k <= 30; ++k) {
						if (dia==7) {
							if (k==1) {
								final++;
							}
							dia = 1;
						} else {
							dia++;
						}
					}//Fin
				} else if (j == 2) {
					for (int k = 1; k <= 28; ++k) {
						if (dia==7) {
							if (k==1) {
								final++;
							}
							dia = 1;
						} else {
							dia++;
						}		
					}
				} else {
					for (int k = 1; k <= 31; ++k) {
						if (dia==7) {
							if (k==1) {
								final++;
							}
							dia = 1;
						} else {
							dia++;
						}		
					}
				} 
			}//Fin del ano
		}
	}//Fin del siglo
	return final+1;
}//Fin del metodo

int** llenarMatriz(int**matriz, int* arreglo, int size) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < size; ++j) {
			if (i == 0) { 
				matriz[0][j] = arreglo[j];
			}
		}
	}
	return matriz;
}


void imprimirMatriz(int size, int** matriz, int a) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < size; j++) {
			cout<< matriz[i][j] << " ";
			if (j == size - 1 && i == 0) {
				cout << "|" << a;
			}
			if (j == size - 1 && i != 0) {
				cout << "|";
			}
		}
		cout << endl;
	}
	cout << "--------------------" << endl;
}


/*
int*** crearMatriz(int size) {
	int*** matriz = new int**[size];
	for (int i = 0; i < size; i++){
		matriz[i] = new int*[3];
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++) {
			matriz[i][j] = new int[size];
		}
	}
	return matriz;
}//Fin de crear matriz
*/