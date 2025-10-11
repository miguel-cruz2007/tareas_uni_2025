#include "iostream"
#include "math.h"
 using namespace std;
 int main ()
{
	float L1,L2,L3,S,AREA;
	const float PI=3.141592;
	
	cout << "lado uno"<< "\n";
	cin>>L1;
	
	cout << "lado dos"<< "\n";
	cin>>L2;

	cout << "lado tres"<< "\n";
	cin>>L3;
	
	S=(L1+L2+L3)/2;
	AREA=sqrt(S*(S-L1)*(S-L2)*(S-L3));
	
	cout<<"El area es" <<AREA<<"\n";
	return 0;
}
