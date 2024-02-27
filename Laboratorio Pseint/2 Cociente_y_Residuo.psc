Algoritmo Cociente_y_Residuo
	Escribir 'Ingrese el primer valor'
	val1 <- 0
	Leer val1
	Repetir
		Escribir 'Ingrese el segundo valor'
		val2 <- 0
		Leer val2
	Hasta Que val2<>0
	Limpiar Pantalla
	cosi <- val1/val2
	residuo <- val1 MOD val2
	Escribir 'El cosiente de la divici?n es ', cosi, ' el residuo de la divici?n es ', residuo
FinAlgoritmo
