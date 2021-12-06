bool bisiesto(int anio) 
{
	return ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0);
}

bool validarFecha() 
{
    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
        mes == 8 || mes == 10 || mes == 12) &&
        (dia > 0 && dia <= 31))
        return true;
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 10 ||
        mes == 11) && (dia > 0 && dia <= 30))
        return true;
    if (mes == 2) {
        if (bisiesto(anio) == true && (dia > 0 && dia <= 29))
            return true;
        if (bisiesto(anio) == false && (dia > 0 && dia <= 28))
            return true;
    }
    return false;
}

int ingresarFecha() 
{
	int fecha, dia, mes, anio;
	cout << "Ingrese la fecha:\n";
	do {
		cout << "Anio: ";
		cin >> anio;
	} while (anio <= 0 || anio > 2021);
	do {
		cout << "Mes: ";
		cin >> mes;
	} while (mes <= 0 || mes > 12);
	do {
		cout << "Dia: ";
		cin >> dia;
	} while (revisarFecha(anioBisiesto(anio), mes, dia) == false);
	fecha = anio * 10000 + mes * 100 + dia;
	return fecha;
}

void imprimirFecha(ArregloCompras* arrComp, int i) 
{
	int dia, mes, anio, fecha;
	fecha = arrComp->at(i)->getFecha();
	dia = fecha % 100;
	fecha /= 100;
	mes = fecha % 100;
	fecha /= 100;
	anio = fecha;
	cout << "Fecha: " << dia << "/" << mes << "/"
		<< anio << endl;
}

