# Importamos el módulo necesario para leer la entrada del usuario
import time

# Pedimos al usuario que ingrese los dos números
num1 = int(input("Ingrese el primer número: "))
num2 = int(input("Ingrese el segundo número: "))

suma = 0  # Inicializamos la variable suma

# Registro del tiempo de inicio de la ejecución
inicio = time.time()

# Suma consecutiva de los números entre num1 y num2
for i in range(num1, num2 + 1):
    suma += i  # Acumulación de la suma de los números

# Registro del tiempo de finalización de la ejecución
fin = time.time()

# Cálculo del tiempo de ejecución en segundos
tiempo_ejecucion = fin - inicio

# Mostrar la suma y el tiempo de ejecución en la consola
print("La suma de los números entre", num1, "y", num2, "es:", suma)
print("Tiempo de ejecución:", tiempo_ejecucion, "segundos")