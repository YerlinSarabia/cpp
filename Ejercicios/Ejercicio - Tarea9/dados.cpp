#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;


int main(int argc, char const *argv[])

{

    int a = 0, b = 0;



    srand(time(0));

    a = rand() % 6+1;

    b = rand() % 6+1;
    

    cout << "Dado 1: "<< a;
	cout << endl; 
	
    cout << "Dado 2: "<< b;
	cout << endl;    
	    

    cout << "Resultado es: " << a + b<<endl;

    

    return 0;

}