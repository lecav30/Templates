#include "BaseMovimiento.h"
#include <iostream>
using namespace std;
using namespace System;

BaseMovimiento::BaseMovimiento() { eliminar = false; }
BaseMovimiento::~BaseMovimiento() {}

void BaseMovimiento::mover(Graphics^ g) {}
void BaseMovimiento::mostrar(Graphics^ g, Bitmap^ bmp) {
	Rectangle porcion = Rectangle(columna * w, fila * h, w, h);
	Rectangle zoom = Rectangle(x, y, w * this->zoom, h * this->zoom);
	g->DrawImage(bmp, zoom, porcion, GraphicsUnit::Pixel);
}

void BaseMovimiento::cambiarX(int nuevo) { x = nuevo; }
void BaseMovimiento::cambiarY(int nuevo) { y = nuevo; }
void BaseMovimiento::cambiarDx(int nuevo) { dx = nuevo; }
void BaseMovimiento::cambiarDy(int nuevo) { dy = nuevo; }
void BaseMovimiento::cambiarW(int nuevo) { w = nuevo; }
void BaseMovimiento::cambiarH(int nuevo) { h = nuevo; }
void BaseMovimiento::cambiarFila(int nuevo) { fila = nuevo; }
void BaseMovimiento::cambiarColumna(int nuevo) { columna = nuevo; }
void BaseMovimiento::cambiarMaxFil(int nuevo) { maxFil = nuevo; }
void BaseMovimiento::cambiarMaxCol(int nuevo) { maxCol = nuevo; }
void BaseMovimiento::cambiarFactMov(int nuevo) { factMov = nuevo; }
void BaseMovimiento::cambiarZoom(float nuevo) { zoom = nuevo; }
void BaseMovimiento::cambiarEliminar(bool nuevo) { eliminar = nuevo; }
void BaseMovimiento::cambiarDireccion(movimiento nuevo) {
	direccion = nuevo; 
	dy = dx = 0;
	if (direccion == movimiento::arriba) dy = -(h / factMov);
	if (direccion == movimiento::abajo) dy = (h / factMov);
	if (direccion == movimiento::derecha) dx = (w / factMov);
	if (direccion == movimiento::izquierda) dx = -(w / factMov);
}

int BaseMovimiento::retornarX() { return x; }
int BaseMovimiento::retornarY() { return y; }
int BaseMovimiento::retornarDx() { return dx; }
int BaseMovimiento::retornarDy() { return dy; }
int BaseMovimiento::retornarW() { return w; }
int BaseMovimiento::retornarH() { return h; }
int BaseMovimiento::retornarFila() { return fila; }
int BaseMovimiento::retornarColumna() { return columna; }
int BaseMovimiento::retornarMaxFil() { return maxFil; }
int BaseMovimiento::retornarMaxCol() { return maxCol; }
int BaseMovimiento::retornarFactMov() { return factMov; }
float BaseMovimiento::retornarZoom() { return zoom; }
bool BaseMovimiento::retornarEliminar() { return eliminar; }
movimiento BaseMovimiento::retornarDireccion() { return direccion; }
