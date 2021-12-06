void mover(Graphics^ g, char t) 
{
    switch (t) {
    case 'W':
        fila = 2;
        if (y + dy > 0) y -= dy;
        break;
    case 'A':
        fila = 1;
        if (x + dx > 0) x -= dx;
        break;
    case 'S':
        fila = 0;
        if (y + dy + alto * enfoque < g->VisibleClipBounds.Height) y += dy;
        break;
    case 'D':
        fila = 3;
        if (x + dx + ancho * enfoque < g->VisibleClipBounds.Width) x += dx;
        break;
    default:
        break;
    }
    columna++;
    if (columna >= maxCol) columna = 0;
}


//INGLES

void move(Graphics^ g, char i) 
{
    switch (i) {
    case 'W':
        idy = 0;
        if (y - dy > 0) y -= dy;
        break;
    case 'A':
        idy = 1;
        if (x - dx > 0) x -= dx;
        break;
    case 'S':
        idy = 2;
        if (y + dy + height * zoom < g->VisibleClipBounds.Height) y += dy;
        break;
    case 'D':
        idy = 3;
        if (x + dx + width * zoom < g->VisibleClipBounds.Width) x += dx;
        break;
    default:
        break;
    }
    idx++;
    if (idx >= totalIdx) idx = 0;
}
