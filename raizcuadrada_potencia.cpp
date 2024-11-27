
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

          
