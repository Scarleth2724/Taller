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
            cout << "------ Ejercicio 10 ------" << endl;
            punto_10();
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
    double a, b, resultado;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    resultado = (a / b) + 1;

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

int punto_2()
{
    double a, b, c, d, resultado;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;

    resultado = (a + b) / (c + d);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

int punto_3()
{
    double a, b, c, d, e, f, resultado;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;
    cout << "Ingrese el valor de e: ";
    cin >> e;
    cout << "Ingrese el valor de f: ";
    cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

int punto_4()
{
    double a, b, c, d, resultado;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;

    resultado = a + (b / (c - d));

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

int punto_5()
{
    int a, b, temp;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Despues del intercambio: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

int punto_6()
{
    double nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    cout << "La nota final es: " << promedio << endl;

    return 0;
}

int punto_7()
{
    double practicas, teorica, participacion, notaFinal;

    cout << "Ingrese la nota de practica (30%): ";
    cin >> practicas;
    cout << "Ingrese la nota teorica (60%): ";
    cin >> teorica;
    cout << "Ingrese la nota de participacion (10%): ";
    cin >> participacion;

    notaFinal = (practicas * 0.3) + (teorica * 0.6) + (participacion * 0.1);

    cout << "La nota final del alumno es: " << notaFinal << endl;

    return 0;
}

int punto_8()
{
    double hipotenusa, cateto1, cateto2;

    cout << "Ingrese el valor del cateto 1: ";
    cin >> cateto1;

    cout << "Ingrese el valor del cateto 2: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}

int punto_9()
{
    double x, y, resultado;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    if (y * y - 1 == 0)
    {
        cout << "Error: Division por cero." << endl;
    }
    else if (x < 0)
    {
        cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo." << endl;
    }
    else
    {
        resultado = sqrt(x) / (y * y - 1);
        cout << "El resultado de la funcion es: " << resultado << endl;
    }

    return 0;
}

int punto_10()
{
    double a, b, c;
    
    // Pedir coeficientes al usuario
    cout << "Ingrese el valor de a: ";
    cin >> a;
    
    cout << "Ingrese el valor de b: ";
    cin >> b;
    
    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Verificar si la ecuación es realmente de segundo grado
    if (a == 0) {
        cout << "Error: 'a' no puede ser 0 en una ecuación de segundo grado." << endl;
        return 1;
    }

    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;

    // Evaluar las soluciones según el valor del discriminante
    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones reales son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } 
    else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "La ecuación tiene una única solución real: x = " << x << endl;
    } 
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son complejas: " << endl;
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}