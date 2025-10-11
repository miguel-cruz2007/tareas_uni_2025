#include "iostream"
#include <stdio.h> 
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1, CAL2,CAL3,CAL4,CAL5;
	cout << "Hola! Este programa 1.8 Promedio calificaciones" << "\n";
	cout << "Por favor ingrese la matricula del alumno: " << "\n";
	 cin >> MAT;
	 cout << "Por favor ingrese la primer calificacion: " << "\n";
	 cin >> CAL1;
	 cout << "Por favor ingrese la segunda calificacion: " << "\n";
	 cin >> CAL2;
	 cout << "Por favor ingrese la tercera calificacion: " << "\n";
	 cin >> CAL3;
	 cout << "Por favor ingrese la cuarta calificacion: " << "\n";
	 cin >> CAL4;
	 cout << "Por favor ingrese la quinta calificacion: " << "\n";
	 cin >> CAL5;
	  PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	  printf("\n El promedio del alumno de matricula %d es %5.2f\n",MAT,PRO);
	  cout << "\n El promedio del alumno de matricula " << MAT <<" es "<<PRO <<"\n";
	  return 0;
 } 
