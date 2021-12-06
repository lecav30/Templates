// Español

BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
BufferedGraphics^ buffer = espacio->Allocate(g, this->ClientRectangle);

buffer->Render(g);
delete espacio, buffer;

//Ingles

BufferedGraphicsContext^ space = BufferedGraphicsManager::Current;
BufferedGraphics^ buffer = space->Allocate(g, this->ClientRectangle);

buffer->Render(g);

delete space, buffer;
