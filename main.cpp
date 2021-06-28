#include <iostream>
using namespace std;
int cubo (int num){
    return (num*num*num);

}
int main() {
    cout <<endl<< "El cubo de 5 es: " << cubo(5);
    cout <<endl<< "El cubo de 6 es: " << cubo(6);
    cout <<endl<< "El cubo de 7 es: " << cubo(7);
    int numero;
    cout <<endl<< "Ingresar un numero: ";
    cin>>numero;
    numero= cubo(numero);
    cout <<endl<< "El cubo es: " << numero;
    return 0;
}
