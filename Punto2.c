#include <stdio.h>
#include <string.h>

int main() 
{
	char c[] = "rwsy12"; //se declara la variable de la contraseņa y su contenido
	
	char u[50]; //Se declara la variable en el que el usuario depositara su contraseņa
	printf("Introduce la contraseņa: ");
	scanf("%s", &u); //imprime y lee la contraseņa depositada por el usuario
	
	if (strcmp(c, u) == 0) //compara los strings y si coinciden imprime un resultado u otro
	{
		printf("Contraseņa exitosa, conincide");
	}
		else
		{
			printf("Contraseņa invalida, no coincide");
		}
}
