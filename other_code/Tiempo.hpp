#include <iostream>
#include <ctime> 

using namespace System;
using namespace std;

	time_t tiempo_inicial = time(0); 
	while(true)
	{
		time_t tiempo = time(0);
		int segundos= difftime( tiempo, tiempo_inicial);
		if (segundos >= 5)
		{
			tiempo_inicial = std::time(0);  
		}
	}
	return 0;

#include <iomanip>
using namespace std;
put_time(localtime(&tiempo_inicial), "%c %Z")
