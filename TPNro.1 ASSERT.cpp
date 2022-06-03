/* Materia: Algoritmos y estructuras de datos
 * Trabajo Practico Nro. 1
 * Realizo: Bottone Pagella Bautista Joaquin
 * Fecha de ultima modificacion: 20220602 - 02 de Junio de 2022 */



#include <iostream> //Biblioteca estandar de input/output de datos
#include <iomanip>  //Biblioteca que permite manipular la diferencia infinitesimal entre dos numeros similares
#include <cassert>  //Biblioteca estandar para poder incluir las funciones de assert

int main() {

    //Operaciones basicas con numeros constantes reales

    assert (2 == 1 + 1);
    assert (3*2 == 6);
    assert (8/2 == 4);
    assert ( 2.5 + 2.5 == 5);
    assert (2 ==  5/2); //Se considera division de enteros, por lo cual se redondea al entero mas cercano
    assert (2.5 != 5/2);

    // Operaciones con booleanos

    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);
    assert (true && true == true);
    assert (true || false != true );

    // Operaciones con datos constantes

    int a = 5;
    int b = 9;
    int c = 14;

    assert (a == 5);
    assert (a!=7);
    assert (b != a);
    assert (b && a != NULL);
    assert (b || a != c);
    assert (4.99999999 != a);
    assert (a < b);
    assert ((--a + b) + --c);
    assert (++a = --c - b);
    assert ( --b == 8);

    // Operaciones con caracteres; comparamos caracteres con valores numericos del codigo ASCII

    assert('a' != 'b');
    assert('d' + 'q' == 0xD5);
    assert( 'C' - 'A' == 2);
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);
    assert('C' - 2 == 65 and 'C' - 2 == 'A');

    //Punto Flotante (reales)(double) otros tipos flotantes:(float) y(long double)

    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    assert(0.23 > -1.0);
    assert(3E2 == 3e2 );
    assert(3E2 == 3*10*10 );
    assert(3E2 == 300.0 );
    assert(3E6 == 3000000.0 );
    assert(3E6 == 3'000'000.0 );
    assert(2.0 + 1 == 3.0);
    assert(1.0);
    std::cout << std::setprecision(17) << 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 << '\n';
}

//Gracias por su tiempos, vuelvas prontos =D