#include <iostream>



using namespace std;



int sumar(int a, int b){

    return a + b;

}

int restar(int a, int b){

    return a - b;

}



int main(int argc, char const *argv[])

{

    system("cls");



    int numero1 = 0;

    int numero2 = 0;



cout << "ingrese el avlor de a: ";

cin >> numero1;

cout << "ingrese el avlor de b: ";

cin >> numero2;





cout << endl;



cout << "El resultado de la suma es :" << sumar(numero1, numero2);

cout << endl;

cout <<"El resultado de la resta es :" <<  restar(numero1, numero2);

cout << endl;





    sumar( 8, 9 );

    return 0;

}