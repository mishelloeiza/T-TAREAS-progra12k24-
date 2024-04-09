Algoritmo calcule_Perimetro_y_area_de_un_circulo_dado_su_radio
	Escribir  "Hola Buen dia deseas activar la calculadora";
	Escribir  "1=Si";
	Escribir  "Otro valor=no";
	respuesta=0;
	Leer respuesta;
	//Valor true inicia la calculadora
	Mientras respuesta=1 Hacer
		Escribir "Ingresa el tama?o del radio del circulo ";
		radio =0;
		area=0;
		Leer  radio;
		perimetro=2*PI*radio;
		area=PI*(radio^2);
		perimetror=redon(perimetro);
		arear=redon(area);
		Escribir "El perimetro del circulo dado es ",perimetror," el area del circulo dado es ",arear;
		Escribir "";
		Escribir  "Hola  buen dia deseas activar la calculadora nuevamente";
		Escribir  "1=Si";
		Escribir  "Otro valor=no";
		respuesta=0;
		Leer respuesta;
		Limpiar Pantalla;
	Fin Mientras
	
FinAlgoritmo