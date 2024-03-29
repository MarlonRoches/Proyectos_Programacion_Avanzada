#include <stdio.h>
#include "pch.h"
#include <stdlib.h>
using namespace std;

struct Nodo {
	int dato;
	Nodo *der;
	Nodo *izq;
};

Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
Nodo *arbol = NULL;

int main() {
	int dato, opcion;
	while (opcion != 5) {

		printf("*********MENU**********\n\n");
		printf("Seleccione una opcion:\n\n");
		printf("1) Insertar Nodo\n");
		printf("2)\n");
		printf("3)\n");
		printf("4)\n");
		printf("5) Salir\n");
		scanf("%i", &opcion);
		switch (opcion) {
		case 1:
			insertarNodo(arbol, dato);
			break;
		}
	}
	return 0;
}

Nodo *crearNodo(int n) {
	Nodo *nuevo_nodo = new Nodo();

	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;

	return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n) {

	if (arbol == NULL) {
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
		printf("Nodo creado");
	}
	else {
		int valorRaiz = arbol->dato;
		if (n < valorRaiz) {
			insertarNodo(arbol->izq, n);
		}
		else {
			insertarNodo(arbol->der, n);
			printf("Nodo creado");
		}
	}
}﻿