#include <iostream>
#include <cmath>

using namespace std;

int punto_1();
int punto_2();
int punto_3();
int punto_4();
int punto_5();
int punto_6();
int punto_7();
int punto_8();
int punto_9();
int punto_10();
int punto_11();
int punto_12();

int main()
{
    int opcion;

    do
    {
        cout << "\n------ MENU DE EJERCICIOS ------" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Ejercicio 6" << endl;
        cout << "7. Ejercicio 7" << endl;
        cout << "8. Ejercicio 8" << endl;
        cout << "9. Ejercicio 9" << endl;
        cout << "10. Ejercicio 10" << endl;
        cout << "11. Ejercicio 11" << endl;
        cout << "12. Ejercicio 12" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "------ Ejercicio 1 ------" << endl;
            punto_1();
            break;
        case 2:
            cout << "------ Ejercicio 2 ------" << endl;
            punto_2();
            break;
        case 3:
            cout << "------ Ejercicio 3 ------" << endl;
            punto_3();
            break;
        case 4:
            cout << "------ Ejercicio 4 ------" << endl;
            punto_4();
            break;
        case 5:
            cout << "------ Ejercicio 5 ------" << endl;
            punto_5();
            break;
        case 6:
            cout << "------ Ejercicio 6 ------" << endl;
            punto_6();
            break;
        case 7:
            cout << "------ Ejercicio 7 ------" << endl;
            punto_7();
            break;
        case 8:
            cout << "------ Ejercicio 8 ------" << endl;
            punto_8();
            break;
        case 9:
            cout << "------ Ejercicio 9 ------" << endl;
            punto_9();
            break;
        case 10:
            cout << "------ Ejercicio 10------" << endl;
            punto_10();
            break;
        case 11:
            cout << "------ Ejercicio 11 ------" << endl;
            punto_11();
            break;
        case 12:
            cout << "------ Ejercicio 12 ------" << endl;
            punto_12();
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
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2)
        cout << "El mayor es: " << num1 << endl;
    else if (num2 > num1)
        cout << "El mayor es: " << num2 << endl;
    else
        cout << "Ambos numeros son iguales." << endl;

    return 0;
}

int punto_2()
{
    int a, b, c;

    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    int mayor = a;
    if (b > mayor)
        mayor = b;
    if (c > mayor)
        mayor = c;

    cout << "El mayor es: " << mayor << endl;

    return 0;
}

int punto_3()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0)
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;

    return 0;
}

int punto_4()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
        cout << "El numero es positivo." << endl;
    else if (numero < 0)
        cout << "El numero es negativo." << endl;
    else
        cout << "El numero es cero." << endl;

    return 0;
}

int punto_5()
{
    char caracter;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        cout << "Es una vocal minuscula." << endl;
    else
        cout << "No es una vocal minuscula." << endl;

    return 0;
}

int punto_6()
{
    char caracter;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        cout << "Es una vocal minuscula." << endl;
    else if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
        cout << "Es una vocal mayuscula." << endl;
    else
        cout << "No es una vocal." << endl;

    return 0;
}

int punto_7()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25)
        cout << "La edad esta en el rango de 18 a 25 anios." << endl;
    else
        cout << "La edad no esta en el rango de 18 a 25 anios." << endl;

    return 0;
}

int punto_8()
{
    int num1, num2, num3, num4;

    cout << "Ingrese tres numeros: ";
    cin >> num1 >> num2 >> num3;

    cout << "Ingrese un cuarto numero: ";
    cin >> num4;

    if (num4 == num1 || num4 == num2 || num4 == num3)
        cout << "El numero coincide con alguno de los anteriores." << endl;
    else
        cout << "El numero no coincide con ninguno de los anteriores." << endl;

    return 0;
}

string convertirARomano(int num)
{
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string resultado = "";
    for (int i = 0; i < 13; i++)
    {
        while (num >= valores[i])
        {
            resultado += romanos[i];
            num -= valores[i];
        }
    }
    return resultado;
}

int punto_9()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero > 0 && numero < 4000)
        cout << "Numero en romanos: " << convertirARomano(numero) << endl;
    else
        cout << "Numero fuera de rango (1-3999)." << endl;

    return 0;
}

int punto_10()
{
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
                      "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    int numero;
    cout << "Ingrese un numero (1-12): ";
    cin >> numero;

    if (numero >= 1 && numero <= 12)
        cout << "El mes correspondiente es: " << meses[numero - 1] << endl;
    else
        cout << "Numero fuera de rango." << endl;

    return 0;
}

int punto_11()
{
    double saldo = 1000.0;
    int opcion;
    double cantidad;

    do
    {
        cout << "\n--- Cajero Automatico ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Saldo actual: $" << saldo << endl;
            break;
        case 2:
            cout << "Ingrese cantidad a depositar: $";
            cin >> cantidad;
            saldo += cantidad;
            cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
            break;
        case 3:
            cout << "Ingrese cantidad a retirar: $";
            cin >> cantidad;
            if (cantidad > saldo)
                cout << "Fondos insuficientes." << endl;
            else
            {
                saldo -= cantidad;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
            }
            break;
        case 4:
            cout << "Gracias por usar el cajero." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
        }
    } while (opcion != 4);

    return 0;
}

int punto_12()
{
    int opcion, numero;

    do
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Calcular el cubo de un numero\n";
        cout << "2. Determinar si un numero es par o impar\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese un numero: ";
            cin >> numero;
            cout << "El cubo de " << numero << " es: " << (numero * numero * numero) << endl;
            break;
        case 2:
            cout << "Ingrese un numero: ";
            cin >> numero;
            if (numero % 2 == 0)
                cout << "El numero es par." << endl;
            else
                cout << "El numero es impar." << endl;
            break;
        case 3:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
        }
    } while (opcion != 3);

    return 0;
}