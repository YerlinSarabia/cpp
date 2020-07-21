#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal=0;
    double total=0;
    double impuesto=0.15;
    double calculodescuento;
    double calculoimpuesto;
    int descuento=0;
    char exenta;

    cout << "Ingrese el subtotal: ";
    cin >> subtotal;

    cout << "Ingrese un descuento (0, 5, 10, 15, 20): ";
    cin >> descuento;
    
    cout << "Es factura Exenta? escriba S o N"<< endl;
    cin >> exenta;

    calculodescuento = (subtotal*descuento)/100;

    calculoimpuesto = (subtotal-calculodescuento)*impuesto;

    total = subtotal-calculodescuento+calculoimpuesto;

    if (exenta == 'S' || exenta == 'S')
    {
    	total = subtotal - calculodescuento;
    	cout << "El total a pagar es: "<< total;
	}
		
	if (exenta == 'N' || exenta == 'N')
	{
		total = subtotal-calculodescuento+calculoimpuesto;
		cout << "El total a pagar es: "<< total;
	}

    return 0;
}