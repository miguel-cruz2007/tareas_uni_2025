#include "iostream"
#include "math.h"
using namespace std;
int main()

{
 float X1,X2,Y1,Y2,DIS;
 
cout<< "pon x1"<< "\n";
cin>>X1;

cout<< "pon y1"<< "\n";
cin>>Y1;

cout<< "pon x2"<< "\n";
cin>>X2;

cout<< "pon y2"<< "\n";
cin>>Y2;

DIS=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));

cout<< "La distancia entre el punto "<<X1<<","<<Y1<<" y el punto " <<X2<<","<<Y2<<" es " <<DIS<< "\n";
return 0;
}

