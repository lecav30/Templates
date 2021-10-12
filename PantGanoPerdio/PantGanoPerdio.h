#pragma once
#include "BaseMovimiento.h"
class PantGanoPerdio : public BaseMovimiento {
public:
	PantGanoPerdio(Graphics^ g, Bitmap^ bmpWinLose) {
		dx = dy = 0;
		enfoque = 1.0;
		fila = 0;
		columna = 0;
		maxFil = 7;
		maxCol = 1;
		ancho = bmpWinLose->Width / maxCol;
		alto = bmpWinLose->Height / maxFil;
		x = 500;
		y = g->VisibleClipBounds.Height / 2;
	}
	~PantGanoPerdio() {}

	void PantGanoPerdio::animacion(Graphics^ g, Bitmap^ bmpWinLose) {
		fila++;
		mostrar(g, bmpWinLose);
	}

	bool PantGanoPerdio::finAnimacion() {
		return (fila >= maxFil);
	}
};