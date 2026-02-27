#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string nombre;
    int cantidad;
    double precio_producto;
    double subtotal;
    double iva;
    double total_pagar;



    cout << "Ingrese su nombre completo:" << endl;
    getline(cin, nombre);
    cout << "Ingrese el precio del producto:" << endl;
    cin >> precio_producto;
    cout << "Ingrese la cantidad comprada:" << endl;
    cin >> cantidad;

    subtotal = precio_producto * cantidad;
    iva = subtotal * 0.12;
    total_pagar = subtotal + iva;

    cout << "Nombre del Cliente: " << nombre << endl;
    cout << fixed << setprecision(2);
    cout << "Subtotal: Q " << subtotal << endl;
    cout << "IVA: Q " << iva << endl;
    cout << "Total a pagar: Q " << total_pagar << endl;

    cout << ""<< endl;
    cout << "Desarrollado por: Jose Andres Santos Mota"<< endl;

    return 0;
}