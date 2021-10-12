#include "ArrBaseMovimiento.h"

ArrBaseMovimiento::ArrBaseMovimiento() {
	nElementos = new int;
	*nElementos = 0;
}
ArrBaseMovimiento::~ArrBaseMovimiento() {
	for (int i = 0; i < *nElementos; i++)
		delete arreglo[i];
	delete[] arreglo;
	delete nElementos;
}

void ArrBaseMovimiento::insertar(BaseMovimiento *objeto) {
	BaseMovimiento **auxiliar = new BaseMovimiento *[*nElementos];
	for (int i = 0; i < *nElementos; i++)
		auxiliar[i] = arreglo[i];
	arreglo = new BaseMovimiento *[*nElementos + 1];
	for (int i = 0; i < *nElementos; i++)
		arreglo[i] = auxiliar[i];
	arreglo[*nElementos] = objeto;
	*nElementos = *nElementos + 1;
}
void ArrBaseMovimiento::eliminar() {
	int contador = 0;
	for (int i = 0; i < *nElementos; i++)
		if (arreglo[i]->retornarEliminar())
			contador++;
	BaseMovimiento** auxiliar = new BaseMovimiento * [ *nElementos - contador];
	int j = 0;
	for (int i = 0; i < *nElementos; i++)
		if (!arreglo[i]->retornarEliminar()) {
			auxiliar[j] = arreglo[i];
			j++;
		}
	arreglo = new BaseMovimiento * [*nElementos - contador];
	arreglo = auxiliar;
	*nElementos = *nElementos - contador;
}
void ArrBaseMovimiento::moverTodos(Graphics^ g) {
	eliminar();
	for (int i = 0; i < *nElementos; i++)
		arreglo[i]->mover(g);
}
void ArrBaseMovimiento::mostrarTodos(Graphics^ g, Bitmap^ bmp) {
	for (int i = 0; i < *nElementos; i++)
		arreglo[i]->mostrar(g, bmp);
}

void ArrBaseMovimiento::cambiarX(int indice, int nuevo) {
	arreglo[indice]->cambiarX(nuevo);
}
void ArrBaseMovimiento::cambiarY(int indice, int nuevo) {
	arreglo[indice]->cambiarY(nuevo);
}
void ArrBaseMovimiento::cambiarDx(int indice, int nuevo) {
	arreglo[indice]->cambiarDx(nuevo);
}
void ArrBaseMovimiento::cambiarDy(int indice, int nuevo) {
	arreglo[indice]->cambiarDy(nuevo);
}
void ArrBaseMovimiento::cambiarW(int indice, int nuevo) {
	arreglo[indice]->cambiarW(nuevo);
}
void ArrBaseMovimiento::cambiarH(int indice, int nuevo) {
	arreglo[indice]->cambiarH(nuevo);
}
void ArrBaseMovimiento::cambiarEliminar(int indice, bool nuevo) {
	arreglo[indice]->cambiarEliminar(nuevo);
}
int ArrBaseMovimiento::retornarX(int indice) {
	return arreglo[indice]->retornarX();
}
int ArrBaseMovimiento::retornarY(int indice) {
	return arreglo[indice]->retornarY();
}
int ArrBaseMovimiento::retornarDx(int indice) {
	return arreglo[indice]->retornarDx();
}
int ArrBaseMovimiento::retornarDy(int indice) {
	return arreglo[indice]->retornarDy();
}
int ArrBaseMovimiento::retornarW(int indice) {
	return arreglo[indice]->retornarW();
}
int ArrBaseMovimiento::retornarH(int indice) {
	return arreglo[indice]->retornarH();
}
bool ArrBaseMovimiento::retornarEliminar(int indice) {
	return arreglo[indice]->retornarEliminar();
}
int ArrBaseMovimiento::retornarNElementos() {
	return *nElementos;
}
BaseMovimiento *ArrBaseMovimiento::retornarElemento(int indice) {
	return arreglo[indice];
}
