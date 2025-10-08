#include "iostream"
using namespace std;

int main()
{ //calcule el numero de segundos que hay en determinados dias
int DIAS;
float SEGUNDOS;

//ENTRADA DE DATOS
cout<< "escribe el numero de dias" << "\n";
cin >> DIAS;
//CALCULO
SEGUNDOS= DIAS*24*60*60;
//RESULTADOS
cout<< " EN " <<DIAS<< " dias, hay " <<SEGUNDOS<< "segundos" <<"\n";
return 0;
}
