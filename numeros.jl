function main()
    println("Ingrese el primer número: ")
    num1 = parse(Int64, readline())
  
    println("Ingrese el segundo número: ")
    num2 = parse(Int64, readline())
  
    suma = 0
  
    inicio = time_ns()
  
    for i in num1:num2
        suma += i
    end
  
    fin = time_ns()
  
    tiempo_ejecucion = (fin - inicio) / 1000000
  
    println("La suma de los números entre $num1 y $num2 es: $suma")
    println("Tiempo de ejecución: $tiempo_ejecucion milisegundos")
  end
  
  main()
  