/**
 ******************************************************************************
 * @file           : main.c
 * @author         : icsuarezr
 * @brief          : Punteros
 ******************************************************************************
 *
 ******************************************************************************
 */

#include <stdint.h>

int main(void){

	// 1.0 Ejemplo punteros

	uint8_t dato = 124;

	// Creación de un puntero
	uint8_t *pDato; //pDato es implícitamente una variable especial "*uint32_t".

	//Asignando el valor en memoria al puntero
	pDato = &dato;

	// Crear una variable para almacenar el valor de memoria (Casteo)
	uint32_t direccionDato = (uint32_t) pDato;

	//Accerder al valor a través del puntero
	*pDato = 200;

	// Pasar a la siguiente dirección de memoria
	pDato++;

	uint8_t nuevoDato = *pDato;

	//Creación de variable de 16 bits

	uint16_t variable = 12;

	//Creamos el puntero
	uint16_t *pVariable;

	//Asignando el valor en memoria al puntero
	pVariable = &variable;

	// Crear una variable para almacenar el valor de memoria (Casteo)
	uint32_t direccionVariable = (uint32_t) pVariable;

	pVariable++;

	*pVariable = 12;

	// 2.1 Creación arreglo

	#define sizeOfArray 4 //Estamos definiendo una macro de valor 4

	uint8_t miPrimerArreglo[sizeOfArray] = {5, 0xA, 'a', 254};

	//2.2 Recorrer los arreglos con ciclos

	for (uint8_t i = 0; i< sizeOfArray; i++){
		uint8_t contenido = miPrimerArreglo [i];
	}

	//2.3 Recorrer los arreglos con punteros
	for (uint8_t i = 0; i< sizeOfArray; i++){
		uint8_t contenido = *(miPrimerArreglo + i);
	}

	// 3.0 Estructuras

	// Definición general

	typedef struct{
		uint8_t elemento1;
		uint16_t elemento2;
		uint32_t elemento3;
		uint8_t arreglo[sizeOfArray];
	}miPrimeraEstructura_t;

	//Inicializando la estructura
	miPrimeraEstructura_t estructuraEjemplo = {0};

	// Asignamos valores
	estructuraEjemplo.elemento1 = 'F';
	estructuraEjemplo.arreglo[0] = 10;

	//Cómo acceder a las estructuras con punteros
	miPrimeraEstructura_t *ptrMiPrimeraEstructura;

	ptrMiPrimeraEstructura-> elemento1 = 9;
	ptrMiPrimeraEstructura-> arreglo[0] = 3;


}
