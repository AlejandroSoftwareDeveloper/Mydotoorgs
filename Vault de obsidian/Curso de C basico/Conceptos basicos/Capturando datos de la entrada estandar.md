- la funcion *scanf* (scan format)  sirve para recibir datos desde la consola 
- Esta funcion sigue tres reglas
  1. Retorna el numero de objetos que leyó
  2. Si la informacion para un tipo de dato primitivo con *int* , *char* ect.. , debes poner el simbolo *&* de direccion y despues el nombre de la variable.
  3. Si usas *scanf* para leer una cadena de caracteres en un arreglo no uses & con el arreglo.
```c
	#include<studio.h>
	
	int main(){
		char array[20];
		int edad;
		double dir;
		scanf("%d",&edad); //La funcion scanf no recibe texto solo 
											 //el indicador de formato a almacenar
											 //en este caso %d por ser un int
	}
```






