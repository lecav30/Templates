#pragma once
#include <string>
using namespace std;
using namespace System::Drawing;

class BaseMovimiento {
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int fila, columna;
	int maxFil, maxCol;
	float enfoque;
	bool visible;
public:
	BaseMovimiento::BaseMovimiento() { visible = true; }
	BaseMovimiento::~BaseMovimiento() {}

	virtual void BaseMovimiento::mover() {}
	virtual void BaseMovimiento::mostrar(Graphics^ g, Bitmap^ bmp) {
		Rectangle porcion = Rectangle(columna * ancho, fila * alto, ancho, alto);
		Rectangle enfoque = Rectangle(x, y, ancho * this->enfoque, alto * this->enfoque);
		g->DrawImage(bmp, enfoque, porcion, GraphicsUnit::Pixel);
	}

	void cambiarX(int x) { this->x = x; }
	void cambiarY(int y) { this->y = y; }
	void cambiarDx(int dx) { this->dx = dx; }
	void cambiarDy(int dy) { this->dy = dy; }
	void cambiarAncho(int ancho) { this->ancho = ancho; }
	void cambiarAlto(int alto) { this->alto = alto; }
	void cambiarFila(int fila) { this->fila = fila; }
	void cambiarColumna(int columna) { this->columna = columna; }
	void cambiarMaxFil(int maxFil) { this->maxFil = maxFil; }
	void cambiarMaxCol(int maxCol) { this->maxCol = maxCol; }
	void cambiarEnfoque(float enfoque) { this->enfoque = enfoque; }
	void cambiarVisible(bool visible) { this->visible = visible; }

	int retornarX() { return x; }
	int retornarY() { return y; }
	int retornarDx() { return dx; }
	int retornarDy() { return dy; }
	int retornarAncho() { return ancho; }
	int retornarAlto() { return alto; }
	int retornarFila() { return fila; }
	int retornarColumna() { return columna; }
	int retornarMaxFil() { return maxFil; }
	int retornarMaxCol() { return maxCol; }
	float retornarEnfoque() { return enfoque; }
	bool retornarVisible() { return visible; }

	Rectangle retornarRectangulo() {
		return Rectangle(x, y, ancho * enfoque, alto * enfoque);
	}

};
