#include <iostream>
#include <chrono>

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    int suma = 0; // Inicialización de la variable para la suma

    // Registro del tiempo de inicio de la ejecución
    auto inicio = std::chrono::steady_clock::now();

    // Suma consecutiva de los números entre num1 y num2
    for (int i = num1; i <= num2; i++) {
        suma += i; // Acumulación de la suma de los números
    }

    // Registro del tiempo de finalización de la ejecución
    auto fin = std::chrono::steady_clock::now();

    // Cálculo del tiempo de ejecución en milisegundos
    auto tiempoEjecucion = std::chrono::duration_cast<std::chrono::milliseconds>(fin - inicio);

    // Mostrar la suma y el tiempo de ejecución
    std::cout << "La suma de los números entre " << num1 << " y " << num2 << " es: " << suma << std::endl;
    std::cout << "Tiempo de ejecución: " << tiempoEjecucion.count() << " milisegundos" << std::endl;

    return 0;
}
