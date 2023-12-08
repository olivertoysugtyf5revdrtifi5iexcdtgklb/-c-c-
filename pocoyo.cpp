#include  <stdio.h>  /* indicar al compilador que inserte el codigo fuente en el registro y lo compile con el programa principal*/
#include <string.h> /*contiene un conjunto de funciones para manipular cadenas :copear , cambiar caracteres , comparar cadenas*/
#include <stdlib.h> /*convertir un entero a cadena de caracteres*/

int main() /*covertir un entero a cadena de caracteres */
{ /* para definir el principio y el final  de un bloque de instrucciones */
	char password[100]; /* a proteger informacion confidencial , como contraseñas o codigos de seguridad*/
	printf("ingrese la contrasenia: "); /*imprime un mensaje por pantalla utilizando una "cadena de formato*/
	scanf("%s",password);/*leee datos del flujo de entrada estandar stdin y escribe los datos en la ubicacion  que le proporcona en argument */
	
	if (strcmp(password,"my clave")==0) /* cpmpara lascadenas */
	{ /* para definir el principio y el final de un bloque de intrucciones */
	printf ("contasenia correctta.bienvenido\n");	/* imprime un mensaje por pantalla utilizando una "cadena de formato */
}
	else /* ejecutan uno o varios sentencias de manera condicional */
   {
printf("contrasenia incorrecta .\n"); /* imprime un mensaje por pantalla utilizando una "cadena de formato */

}
system("PAUSE") ; /* EJECUTA UN COMANDO INTERNO DEL SITEMA OPERATIVO O UN ARCHIVO DENTRO DE UN PROGRAMA */

return 0; /* FINALIZA LA EJECUCON DE UNA FUNCION Y DEVUELVE EL CONTROL A LA FUNCION DE LLAMADA */
}/* PARA DEFINIR EL FINAL DE UN BOQUE DE INTRUCCIONES */

/*Gomez Nequiz Paula Jimena Ortega Sanchez Alejandro Peña Rojas Cesar Josue*/










