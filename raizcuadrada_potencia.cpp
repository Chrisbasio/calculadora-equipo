#include <iostream>
#include <cmath> 
using namespace std;

void mostrarMenu() {
    cout << "** MENU **" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Raiz cuadrada" << endl;
    cout << "6. Potencia" << endl;
    cout << "7. Salir" << endl;
    cout << "******" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        mostrarMenu();
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Por favor, ingrese un numero valido." << endl;
            continue;
        }
       
        switch (opcion) {
            case 1: // Suma
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                resultado = num1 + num2;
                cout << "El resultado es: " << resultado << endl;
                break;

            case 2: // Resta
                cout << "Ingrese un numero: ";
                cin >> num1;
                cout << "Ingrese otro numero: ";
                cin >> num2;
                resultado = num1 - num2;
                cout << "El resultado es: " << resultado << endl;
                break;
                

            case 3: // Multiplicación
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                resultado = num1 * num2;
                cout << "El resultado es: " << resultado << endl;
                break;

            case 4: // División
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "El resultado es: " << resultado << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;

            case 5: // Raíz cuadrada
                 case 5: // Raíz cuadrada
                cout << "Ingrese un numero: ";
                cin >> num1;
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    cout << "El resultado es: " << resultado << endl;
                } else {
                    cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo." << endl;
                }
                break;

            case 6: // Potencia
                cout << "Ingrese la base: ";
                cin >> num1;
                cout << "Ingrese el exponente: ";
                cin >> num2;
                resultado = pow(num1, num2);
                cout << "El resultado es: " << resultado << endl;
                break;

            case 7: // Salir
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
        cout << endl;

    } while (opcion != 7);

    return 0;
} 
