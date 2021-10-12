#pragma once
#include <string>
using namespace std;
using namespace System::Drawing;

public enum movimiento { arriba, abajo, izquierda, derecha, ninguno };

class BaseMovimiento {
protected:
	int x, y;
	int dx, dy;
	int w, h;
	int fila, columna;
	int maxFil, maxCol;
	int factMov;
	float zoom;
	bool eliminar;
	movimiento direccion;
public:
	BaseMovimiento();
	~BaseMovimiento();
	virtual void mover(Graphics^ g);
	virtual void mostrar(Graphics^ g, Bitmap^ bmp);
	void cambiarX(int nuevo);
	void cambiarY(int nuevo);
	void cambiarDx(int nuevo);
	void cambiarDy(int nuevo);
	void cambiarW(int nuevo);
	void cambiarH(int nuevo);
	void cambiarFila(int nuevo);
	void cambiarColumna(int nuevo);
	void cambiarMaxFil(int nuevo);
	void cambiarMaxCol(int nuevo);
	void cambiarFactMov(int nuevo);
	void cambiarZoom(float nuevo);
	void cambiarEliminar(bool nuevo);
	void cambiarDireccion(movimiento nuevo);
	int retornarX();
	int retornarY();
	int retornarDx();
	int retornarDy();
	int retornarW();
	int retornarH();
	int retornarFila();
	int retornarColumna();
	int retornarMaxFil();
	int retornarMaxCol();
	int retornarFactMov();
	float retornarZoom();
	bool retornarEliminar();
	movimiento retornarDireccion();
};
