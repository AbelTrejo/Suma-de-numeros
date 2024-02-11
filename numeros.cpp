#include <iostream>
#include <chrono>

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo n�mero: ";
    std::cin >> num2;

    int suma = 0; // Inicializaci�n de la variable para la suma

    // Registro del tiempo de inicio de la ejecuci�n
    auto inicio = std::chrono::steady_clock::now();

    // Suma consecutiva de los n�meros entre num1 y num2
    for (int i = num1; i <= num2; i++) {
        suma += i; // Acumulaci�n de la suma de los n�meros
    }

    // Registro del tiempo de finalizaci�n de la ejecuci�n
    auto fin = std::chrono::steady_clock::now();

    // C�lculo del tiempo de ejecuci�n en milisegundos
    auto tiempoEjecucion = std::chrono::duration_cast<std::chrono::milliseconds>(fin - inicio);

    // Mostrar la suma y el tiempo de ejecuci�n
    std::cout << "La suma de los n�meros entre " << num1 << " y " << num2 << " es: " << suma << std::endl;
    std::cout << "Tiempo de ejecuci�n: " << tiempoEjecucion.count() << " milisegundos" << std::endl;

    return 0;
}
