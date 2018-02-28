//Practica1
// Carlos Ramirez
// 1063039

#include <iostream>
#include <iomanip>
#include<cmath>
#include <string>

using namespace std;

int main() {

	string n, c;
	float p, p2, c2;

	cout<<"Gracias por usar los servicios de KAOS Dominicana, por favor digite los siguientes datos"<<endl;
	cout<<"----------------------------------------------------------------------------------------"<<endl;
	cout<<"Digite su nombre y primer apellido"<<endl;
	getline(cin, n);
	cout<<"Digite su cedula."<<endl;
	cin>>c;
	cout<< "Digite el peso del paquete"<<endl;
	cin>>p;
	cout<< "Digite el precio del paquete"<<endl;
	cin>>p2;


if (p<50) {
	if (p2>75) c2=0.00;
	else if ((50<p2) && (p2<75)) c2=5.00;
	else if ((25<p2) && (p2<50)) c2=10.00;
	else if (p2<25) c2=15;
}

else if (p>50) c2=25*(1-(pow(1.01, (-9.21*p))));

	cout<< left<<setw(20)<< "Nombre"<<right<<setw(15)<<"Cedula"<<right<<setw(10)<<"Peso"<<right<<setw(10)<<"Precio"<<right<<setw(10)<<"Costo"<<endl;
	cout<< fixed << setprecision(2);
	cout<< left << setw(20) << n<< right << setw(15) << c<< right << setw(10) << p<< right << setw(10) << p2 <<right << setw(10)<<c2<<endl;


	return 0;
}
