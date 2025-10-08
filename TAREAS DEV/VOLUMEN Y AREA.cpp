#include "iostream"
#include "string"
using namespace std;

int main()
{ //calcule area y su volumen
float RADIO, ALTURA, VOLUMEN, AREA;
const float PI=3.141592;

// entrada de datos 
cout <<"escribe la medida del radio" << "\n";
cin >> RADIO;

cout << "escribe la medida de la altura" << "\n";
cin>> ALTURA;

//calculo
VOLUMEN= PI* (RADIO*RADIO)* ALTURA;
AREA=2*PI*RADIO*ALTURA;

//RESULTADOS
cout<< "el volumen del cilindro es " <<VOLUMEN<< "\n";
cout<< "el area del cilindro es " <<AREA<< "\n";
return 0;

}
