Algoritmo  el_número_es_par_o_impar
	Escribir  "Hola buen dia deseas activar evaluador ";
	Escribir  "1=Si";
	Escribir  "Otro valor=no";
	respuesta=0;
	Leer respuesta;
	//Valor true inicia la calculadora
	Mientras respuesta=1 Hacer
		Escribir "Ingrese un numero";
		num=0;
		Leer num;
		residuo=num%2;
		Si residuo==0 Entonces
			Escribir "El numero",num," es par";
		SiNo
			Escribir "El numero ",num," es impar";
		Fin Si
		Escribir  "Hola buen dia deseas activar evaluador otra vez ";
		Escribir  "1=Si";
		Escribir  "Otro valor=no";
		respuesta=0;
		Leer respuesta;
		Limpiar Pantalla;
	Fin Mientras
FinAlgoritmo