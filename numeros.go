package main

import (
	"fmt"
	"time"
)

func main() {
	// Pedimos al usuario que ingrese los dos números
	var num1, num2 int
	fmt.Print("Ingrese el primer número: ")
	fmt.Scanln(&num1)
	fmt.Print("Ingrese el segundo número: ")
	fmt.Scanln(&num2)

	suma := 0 // Inicializamos la variable suma

	// Registro del tiempo de inicio de la ejecución
	inicio := time.Now()

	// Suma consecutiva de los números entre num1 y num2
	for i := num1; i <= num2; i++ {
		suma += i // Acumulación de la suma de los números
	}

	// Registro del tiempo de finalización de la ejecución
	fin := time.Now()

	// Cálculo del tiempo de ejecución en segundos
	tiempoEjecucion := fin.Sub(inicio).Seconds()

	// Mostrar la suma y el tiempo de ejecución en la consola
	fmt.Printf("La suma de los números entre %d y %d es: %d\n", num1, num2, suma)
	fmt.Printf("Tiempo de ejecución: %.6f segundos\n", tiempoEjecucion)
}
