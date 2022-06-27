/*
 ============================================================================
 Name        : Segundo.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
} ePais;

void invertirCadena(char *cadena);
void actualizarRecuperados(ePais *pais, int recuperados);
void ordenarCaracteres(char *cadena);

int main()
{
	ordenarCaracteres("Hola");
	return 0;
}

void actualizarRecuperados(ePais *pais, int recuperados)
{
	if (pais != NULL && recuperados > 0)
	{
		pais->recuperados += recuperados;
	}
}
void invertirCadena(char *cadena)
{
	if (cadena != NULL)
	{
		int longitud = strlen(cadena);
		char temporal;

		for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
			 izquierda++, derecha--)
		{
			temporal = cadena[izquierda];
			cadena[izquierda] = cadena[derecha];
			cadena[derecha] = temporal;
		}
	}
}

void ordenarCaracteres(char *cadena)
{
	int longitud = strlen(cadena);
	int comp;
	char* auxCadena;
	char cadenaDos[99];
	for (int i = 0; i > longitud; i++)
	{
		for (int j = i + 1; i > longitud; i++)
		{
			comp = strcmp(cadena+j, cadena+j+1);
			if (comp > 0)
			{
				strcpy(auxCadena, cadena+j);
				strcpy(cadena+j, cadena+j+1);
				strcpy(cadena+j+1, auxCadena);
			}
			strcpy(cadenaDos + i, cadena + i);
		}
	}
	printf("%s", cadenaDos);
}


