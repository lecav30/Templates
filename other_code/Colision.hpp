// Español

bool Controladora::colision(BaseMovimiento* obj1, BaseMovimiento* obj2) 
{
	Rectangle r1 = Rectangle(obj1->retornarX(), obj1->retornarY(), obj1->retornarW() * obj1->retornarZoom(),
		obj1->retornarH() * obj1->retornarZoom());
	Rectangle r2 = Rectangle(obj2->retornarX(), obj2->retornarY(), obj2->retornarW() * obj2->retornarZoom(),
		obj2->retornarH() * obj2->retornarZoom());
	return r1.IntersectsWith(r2);
}

bool Controladora::colision(BaseMovimiento* obj1, BaseMovimiento* obj2) 
{
	return obj1->retornarRectangulo().IntersectsWith(obj2->retornarRectangulo());
}

//Ingles

bool Controller::collision(MovementBase* obj1, MovementBase* obj2) 
{
	Rectangle r1 = Rectangle(obj1->getX(), obj1->getY(), obj1->getWidth() * obj1->getZoom(),
		obj1->getHeight() * obj1->getZoom());
	Rectangle r2 = Rectangle(obj2->getX(), obj2->getY(), obj2->getWidth() * obj2->getZoom(),
		obj2->getHeight() * obj2->getZoom());
	return r1.IntersectsWith(r2);
}

bool Controller::collision(MovementBase* obj1, MovementBase* obj2) 
{
	return obj1->getRectangle().IntersectsWith(obj2->getRectangle());
}
