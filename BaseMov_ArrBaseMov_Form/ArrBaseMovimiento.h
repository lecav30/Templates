#pragma once
#include "BaseMovimiento.h"

class ArrBaseMovimiento
{
protected:
	int *nElementos;
	BaseMovimiento **arreglo;

public:
	ArrBaseMovimiento();
	~ArrBaseMovimiento();
	void insertar(BaseMovimiento *objeto);
	void eliminar();
	void moverTodos(Graphics^ g);
	void mostrarTodos(Graphics^ g, Bitmap^ bmp);
	void cambiarX(int indice, int nuevo);
	void cambiarY(int indice, int nuevo);
	void cambiarDx(int indice, int nuevo);
	void cambiarDy(int indice, int nuevo);
	void cambiarW(int indice, int nuevo);
	void cambiarH(int indice, int nuevo);
	void cambiarEliminar(int indice, bool nuevo);
	int retornarX(int indice);
	int retornarY(int indice);
	int retornarDx(int indice);
	int retornarDy(int indice);
	int retornarW(int indice);
	int retornarH(int indice);
	bool retornarEliminar(int indice);
	int retornarNElementos();
	BaseMovimiento *retornarElemento(int indice);
};
