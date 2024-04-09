Algoritmo promedio_de_N_numeros
	Escribir 'Desea realizar el promedio';
	Escribir '1=si';
	Escribir '0=no';
	Leer respuesta;
	Mientras respuesta=1 Hacer
		Escribir "Cuantos numeros desea ingresar";
		n=0;
		x=1;
		itera=0;
		Leer  n;
		Mientras x<=n Hacer
			Escribir "Brinda primer valor  ",x;
			Leer  val;
			itera=itera+val;
			x=x+1;
			total = itera/n;
		Fin Mientras
		Escribir "El resultado es ",total;
		Escribir 'Desea realizar otro promedio';
		Escribir '1=si';
		Escribir '0=no';
		Leer respuesta;
		Limpiar Pantalla;
	FinMientras
	Escribir "Gracias por su preferencia";
	
FinAlgoritmo