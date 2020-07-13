#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	int a=0, b=0;
	int suma, multiplicacion, resta, division;
	
	cout << "Ingrese el valor de a:  "<<endl; 
	cin >> a;
	cout << "Ingrese el valor de b:  "<<endl; 
	cin >>b;
		
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	
	cout << "La suma es:  "<< suma <<endl;
	cout << "La resta es: "<< resta <<endl;
	cout << "La multiplicacion es: "<< multiplicacion <<endl;
	cout << "La division es: "<< division <<endl;
	
	return 0;
}