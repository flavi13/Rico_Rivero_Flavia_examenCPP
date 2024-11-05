//
// Created by Flavia Rivero on 5/11/24.
//

#include "main.h" //he incluido el main.h
#include <iostream>

int main() {
// EJERCICIO 1: Analiza si un número es positivo, negativo o cero
    int numero;

    std::cout << "Por favor, ingresa un número entero: ";  // se pide al usuario que introduzca un numero (input) que en c se hace con el std::cout
    std::cin >> numero;

    if (numero > 0) {  // una condición de si el numero es mayor a 0 que imprima que es positivo
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {   // sigue en la condición pero hay un if porque hay otra condición si no se cumple esta que sería la de abajo (esta condición significa que si el numero es menor a 0, imprime negativo"
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl; //por último el final de la condición donde si no se han dado ninguno de los otros casos se imprimirá éste
    }

//EJERCICIO 2: Imprime el nombre del día de la semana según un número del 1 al 7
    std::cout << "Por favor, ingresa un número del 1 al 7: ";  //se pide al usuario que elija un numero
    std::cin >> numero;

    switch (numero) {   // se introducen todos los casos posibles hasta el 7 (Domingo) para que tenga en cuenta todos los días de laa semana
        case 1:
            std::cout << "Lunes" << std::endl; //Además, se realiza un break despues de cada caso para que se interrumpa el código y no siga contando más dias de la semana cuando ha llegado al dia deseado
        break;
        case 2:
            std::cout << "Martes" << std::endl;
        break;
        case 3:
            std::cout << "Miércoles" << std::endl;
        break;
        case 4:
            std::cout << "Jueves" << std::endl;
        break;
        case 5:
            std::cout << "Viernes" << std::endl;
        break;
        case 6:
            std::cout << "Sábado" << std::endl;
        break;
        case 7:
            std::cout << "Domingo" << std::endl;
        break;
        default:
            std::cout << "Número inválido. Por favor, ingresa un número del 1 al 7." << std::endl; //cuando no se introduce un numero del 1 al 7 se imprime un mensaje de numero invalido
    }

//EJERCICIO 3 (cálculo del promedio de calificaiones : En este ejercicio se muestra un codigo donde le pide al usuario que solicite un numero 8 veces ya que hay 8 calificaciones y despues realiza la operación del promedio de las notas para dar una final)
    const int numEjercicios = 8; //se crea la variable (numEjercicios) y se introduce el numero de ejercicios para corregir
    int calificaciones[numEjercicios];
    int suma = 0;

    for (int i = 0; i < numEjercicios; ++i) {  // Solicitar al usuario las calificaciones de los 8 ejercicios
        std::cout << "Por favor, ingresa la calificación del ejercicio " << (i + 1) << ": ";
        std::cin >> calificaciones[i];
        suma += calificaciones[i]; // Sumar las calificaciones
    }

    double promedio = static_cast<double>(suma) / numEjercicios; //se utiliza un double para que el resultado sea más exacto ya que guarda todos los decimales (se calcula el promedio)

    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;  //se muestra el promedio


// EJERCICIO 4: Promoción de 3x2 en tienda
    double precio1, precio2, precio3;

    // Solicita al usuario ingresar los precios de tres artículos
    std::cout << "Por favor, ingresa el precio del primer artículo: ";
    std::cin >> precio1;
    std::cout << "Por favor, ingresa el precio del segundo artículo: ";
    std::cin >> precio2;
    std::cout << "Por favor, ingresa el precio del tercer artículo: ";
    std::cin >> precio3;


    double total = precio1 + precio2 + precio3 - std::min({precio1, precio2, precio3}); //determina lo que hay que pagar teniendo la promocion

    std::cout << "El total a pagar por los dos artículos más caros es: " << total << std::endl;  // Muestra el total a pagar, además si introduces un numero negativo no lo sumara


    return 0;
}

