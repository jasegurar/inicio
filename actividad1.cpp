#include <iostream>

using namespace std;

int main(){
	int tal, cost, prec;
	char descrip[40], ref[30];	//La variable ref debe ser char para que tome los ceros adelante o por si existe alguna letra en la referencia.
	char disp;
	
	cout<<"ADMINISTRAR VENTA DE ZAPATOS"<<endl;
	cout<<"Digite la referencia del zapato..."<<endl;
	cin >> ref;
	cin.ignore(256,'\n');
	cout<<"Digite una descripcion del zapato..."<<endl;
	cin.getline(descrip, 50);
	cout<<"Digita la talla..."<<endl;
	cin >> tal;
	cout<<"Digita la letra si esta disponible o no para la venta S/N..."<<endl;
	cin >> disp;
	cout<<"Digita el costo del zapato..."<<endl;
	cin >> cost;
	cout<<"Digita el precio de venta del zapato..."<<endl;
	cin >> prec;
	
	system("cls");
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES"<<endl;
	cout<<"\nReferencia: "<<ref<<endl;
	cout<<"Descripcion: "<<descrip<<endl;
	cout<<"Talla: "<<tal<<endl;
	cout<<"Disponibilidad: "<<disp<<endl;
	cout<<"Costo: "<<cost<<endl;
	cout<<"Precio: "<<prec<<endl;
	
	cout<<"\nGracias por digitar la informacion"<<endl;
	cout<<"Juan Alejandro Segura Reyes\n"<<endl;
	
	system("pause");
	return 0;
}

//Juan Alejandro Segura Reyes
