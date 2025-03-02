#include <iostream>
#include <cmath>

using namespace std;

int punto_1();
int punto_2();
int punto_3_4();

int main()
{
    int opcion;

    do
    {
        cout << "\n------ MENU DE EJERCICIOS ------" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3 - 4" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "------ Punto Ejercicio 1 ------" << endl;
            punto_1();
            break;
        case 2:
            cout << "------ Ejercicio 2 ------" << endl;
            punto_2();
            break;
        case 3:
        case 4:
            cout << "------ Ejercicio 3 - 4 ------" << endl;
            punto_3_4();
            break;
        case 0:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}

int punto_1()
{
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << (num1 + num2) << endl;
    cout << "Resta: " << (num1 - num2) << endl;
    cout << "Multiplicacion: " << (num1 * num2) << endl;

    if (num2 != 0)
    {
        cout << "Division: " << (num1 / num2) << endl;
    }
    else
    {
        cout << "No se puede dividir por cero." << endl;
    }

    return 0;
}

int punto_2()
{
    double precio, precio_con_iva;
    const double iva = 0.19;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    precio_con_iva = precio + (precio * iva);

    cout << "El precio con iva es: " << precio_con_iva << endl;

    return 0;
}

int punto_3_4() {
    int edad;
    char sexo;
    float altura;

    while (true) {
        cout << "Ingrese su edad: ";
        cin >> edad;

        if (cin.fail() || edad <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Ingresaste un dato no valido para la edad. Intentalo de nuevo.\n";
        } else {
            break;
        }
    }

    while (true) {
        cout << "Ingrese su sexo (M / F): ";
        cin >> sexo;

        if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f') {
            break;
        } else {
            cout << "Error: Ingrese 'M' para Masculino o 'F' para Femenino.\n";
        }
    }

    while (true) {
        cout << "Ingrese su altura en metros: ";
        cin >> altura;

        if (cin.fail() || altura <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Ingresaste un dato no valido para la altura. Intentalo de nuevo.\n";
        } else {
            break;
        }
    }

    cout << "\n--- Datos ingresados ---" << endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Sexo: " << ((sexo == 'M' || sexo == 'm') ? "Masculino" : "Femenino") << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}