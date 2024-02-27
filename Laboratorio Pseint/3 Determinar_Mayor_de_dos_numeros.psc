Algoritmo Determinar_Mayor_de_dos_numeros
	Escribir " compara 2 numeros";
	Escribir '1=si';
	Escribir '0=no';
	Leer respuesta;
	Mientras respuesta=1 Hacer
		Escribir "Ingresa val 1";
		Leer  val1;
		Escribir 'Ingresa val 2';
		Leer  val2;
		
		Si val1>val2 Entonces
			Escribir "El numero ",val1," es mayor a ",val2;
			
		SiNo
			Escribir "El numero ",val2," es mayor a ",val1;
		Fin Si
		Escribir "Deseas comparar otros  2 numeros";
		Escribir '1=si';
		Escribir '0=no';
		Leer respuesta;
	Fin Mientras
	Limpiar Pantalla;
FinAlgoritmo