#include <stdint.h>

//Definición de variables

//Variables de 8 bits

unsigned char siempreUsarCamelCase = 7;		//Definición de una variable
uint8_t diasDeLaSemana = 7;					//Definición e inicialización de una variable

char miPrimerCaracter = 'j';				//Definición caracter
int8_t miPrimerNumeroNegativo= -12;         //Definición de número negativo

//Variables de 16 bits

unsigned short diasAnuales= 365;			//Definición 16 bits
uint16_t diasAnuales2= 70;

//Variables de 32 bits

unsigned int x,y,z;
int a=1, b=2, c=3;
unsigned int i; int j; long k;

//Otros tipos de variables

char miPrimerArreglo[5] = "LINUX";
uint64_t miSegundoArreglo[3]={2999021536,7984521659,0};

int main (void){

	//Tamaño de variables en diferentes compiladores
	char edad=22;

	char sizeChar = sizeof (edad);
	char sizeShort = sizeof (short);
	char sizeInt = sizeof (int);
	char sizeIntLong = sizeof (long int);
	char sizeLongLongInt =sizeof (long long int);


}
