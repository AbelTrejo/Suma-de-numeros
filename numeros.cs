using System;

class Program
{
    static void Main()
    {
        Console.Write("Ingrese el primer número: ");
        int num1 = int.Parse(Console.ReadLine());

        Console.Write("Ingrese el segundo número: ");
        int num2 = int.Parse(Console.ReadLine());

        int suma = 0; // Inicialización de la variable para la suma

        // Registro del tiempo de inicio de la ejecución
        DateTime inicio = DateTime.Now;

        // Suma consecutiva de los números entre num1 y num2
        for (int i = num1; i <= num2; i++)
        {
            suma += i; // Acumulación de la suma de los números
        }

        // Registro del tiempo de finalización de la ejecución
        DateTime fin = DateTime.Now;

        // Cálculo del tiempo de ejecución en milisegundos
        TimeSpan tiempoEjecucion = fin - inicio;

        // Mostrar la suma y el tiempo de ejecución en la consola
        Console.WriteLine($"La suma de los números entre {num1} y {num2} es: {suma}");
        Console.WriteLine($"Tiempo de ejecución: {tiempoEjecucion.TotalMilliseconds} milisegundos");
    }
}
