#include <iostream>
#include <iomanip>
using namespace std;

long double liebniz(int& n, int piRef){ 
    long double resu = 0;
    int comp = 0;
    while (comp != piRef){
        resu = (n%2==0) ? resu + 4.0/(2*n+1) : resu - 4.0/(2*n+1); // Originalmente es (-1) elevado a n, pero el proposito de esto es para sumar (con n par) o restar (con n impar). Hacer un producto de millones de (-1) tomaría bastan
        comp = resu * 1e6; // Corro la coma seis lugares y me quedo con la parte entera para poder comparar los 7 digitos con piRef.
        n++;
    }
    return resu;
}
main(){ 
    int n = 0; // Iteraciones
    float pi = 3.141592; // Pi modificable
    int piRef = pi*1e6; // Pi vuelto a entero listo para comparar
    cout << "Sumando hasta llegar a pi (precision 7): " << setprecision(7) << pi;
    cout << "\n\nAlcanzado el primer valor equivalente con el siguiente resultado (precision 20): " << setprecision(20) << liebniz(n,piRef) << "...\n\nIteraciones cometidas: "<< n << endl;
    return 0;
}