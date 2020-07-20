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

    cout << "Ingrese el subtotal: ";
    cin >> subtotal;

    cout << "Ingrese un descuento (0, 5, 10, 15, 20): ";
    cin >> descuento;

    calculodescuento = (subtotal*descuento)/100;

    calculoimpuesto = (subtotal-calculodescuento)*impuesto;

    total = subtotal-calculodescuento+calculoimpuesto;

    cout >> endl;
    cout << "Total a pagar es: " << total;

    return 0;
}

