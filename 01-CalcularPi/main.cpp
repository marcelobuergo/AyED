#include <iostream>
#include <iomanip>
using namespace std;

long double liebniz(int& n){ 
    long double resu = 0;
    while (resu < 3.141592 || resu > 3.141593){ // Negando (resu > 3.141592 && resu < 3.141593) obtengo (resu < 3.141592 || resu > 3.141593) mediante leyes logicas.
        resu = (n%2==0) ? resu + 4.0/(2*n+1) : resu - 4.0/(2*n+1); // Originalmente es (-1) elevado a n, pero hacer (-1)*(-1) un billón de veces tomaría horas, el condicional reduce todo eso a ver si n es par o impar para que 1 sea o no negativo.
        n++;
    }
    return resu;
}
int main(){ 
    int n = 0; // n de Iteraciones
    cout << "Sumando hasta llegar a Pi: 3.141592"  << "\n\nAlcanzado el primer valor equivalente con el siguiente resultado: " << setprecision(20) << liebniz(n) << "...\n\nIteraciones: "<< n;
    return 0;
}