#include <iostream>

#include "factura.h"



using namespace std;





void productos(int opcion)

{

    system("cls");

    int opcionProducto = 0;



    switch (opcion)

    {

        case 1:

        {

            cout << "BEBIDAS CALIENTES" << endl;

            cout << "*****************" << endl;

            cout << "1 - Capuccino" << endl;

            cout << "2 - Expresso" << endl;

            cout << "3 - Americano" << endl;

            cout << endl;



            cout << "Ingrese una opcion: ";

            cin >> opcionProducto;



            switch (opcionProducto)

            {

                case 1:

                    agregarProducto("1 Capuccino - L.44.00", 1, 44);

                    break;

                case 2:

                    agregarProducto("1 Expresso - L.30.00", 1, 30);

                    break; 

                case 3:

                    agregarProducto("1 Americano - L.21.00", 1, 21);

                    break; 

                default:

                {

                    cout << "Opcion no valida";

                    return;

                    break;

                }

            }

            

            cout << endl;

            cout << "Producto agregado" << endl << endl;

            system("pause");



            break;

        }

        

        case 2:

        {

            cout << "BEBIDAS FRIAS" << endl;

            cout << "*************" << endl;

            cout << "1 - Granita de Cafe" << endl;

            cout << "2 - Granita de Fresa" << endl;

            cout << "3 - Piña Colada" << endl;

            cout << endl;



            cout << "Ingrese una opcion: ";

            cin >> opcionProducto;



            switch (opcionProducto)

            {

                case 1:

                    agregarProducto("1 Granita de Cafe - L.42.00", 1, 42);

                    break;

                case 2:

                    agregarProducto("1 Granada de Fresa - L.33.00", 1, 33);

                    break; 

                case 3:

                    agregarProducto("1 Piña Colada - L.50.00", 1, 50);

                    break; 

                default:

                {

                    cout << "Opcion no valida";

                    return;

                    break;

                }

            }

            

            cout << endl;

            cout << "Producto agregado" << endl << endl;

            system("pause");



            break;

        }



        case 3:

        {

            cout << "REPOSTERIA" << endl;

            cout << "**********" << endl;

            cout << "1 - Pan Con Frijoles" << endl;

            cout << "2 - Galleta de Leche" << endl;

            cout << "3 - Galleta de Avena con Pasas" << endl;

            cout << endl;



            cout << "Ingrese una opcion: ";

            cin >> opcionProducto;



            switch (opcionProducto)

            {

                case 1:

                    agregarProducto("1 Pan Con Frijoles - L.42.00", 1, 42);

                    break;

                case 2:

                    agregarProducto("1 Galleta de Leche - L.20.00", 1, 20);

                    break; 

                case 3:

                    agregarProducto("1 Galleta de Avena con Pasas - L.19", 1, 19);

                    break; 

                default:

                {

                    cout << "Opcion no valida";

                    return;

                    break;

                }

            }

            

            cout << endl;

            cout << "Producto agregado" << endl << endl;

            system("pause");



            break;

        }



        default:

            break;

    }

}