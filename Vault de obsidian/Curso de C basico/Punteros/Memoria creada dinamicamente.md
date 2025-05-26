- La memoria creada dinamicamente permite asignar memoria adicional en tiempo de ejecucion.
- Existen tres formas bases de reservar memoria dinamicamente estas se encuentran en la biblioteca *stdlib.h*
 1. malloc 
 2. calloc
 3. realloc
 - Para liberar la memoria reservada se usa la funcion *free* de la misma biblioteca.
- La funcion *malloc* reserva memoria basada en el numero que se le pasa por parametro. Este valor representa la cantidad de bytes a reservar en memoria. La funcion retorna un puntero *void* que hay que dereferenciar al tipo de memoria que se desea reservar.  
- Es importante verificar si la memoria fue reservada correctamente por *malloc* para poder lidiar con los errores de este.
- No se debe reservar memoria dentro de un ciclo *while* o *for* aunque se lleve la lista de espacios de memoria reservada.
 ```c
	 #include <stdlib.h>

	int main(){
		int *test = (int *)malloc(100); // Funciona pero no es recomendado ya que puede crear problemas.
		//En multiples sistemas operativos un int puede valer 4 bytes o 2 bytes.

		int *test = (int *)malloc(25 * sizeof(int)); // Funciona mejor
		//Se reserva 25 elemento de tipo int
	if(!test) {  //Verifica si se reservo la memoria y si no es NULL
							 //Aqui va el codigo que trata el NULL de la reservacion de la memoria.
	}
	free(test);    //Aqui se libera la memoria ocupada por malloc
	*test = NULL;  //Para dejar la memoria liberada. 
	}
```

- La funcion *calloc* reserva memoria basada en el numero que se le pasa por parametro y el tamanio de los valores a reservar. Aunque esta funcion es similar a *malloc*, *calloc* inicializa los valores cuando reserva la memoria .
```c

	 #include <stdlib.h>

	int main(){
		char array[50] = "Hola mundo como estas hoy.";
		char *test = (char *)calloc(20, sizeof(char)); 

	if(!test){
		//aqui valido que no es NULL el valor de memoria que reserve con calloc
	}

	free(test);   
	*test = NULL; 
	}

```

- La funcion *realloc* reserva memoria basada en la memoria ya reservada anteriormente mas la memoria adicional que se desea reservar.
```c
	 #include <stdlib.h>

	int main(){
		char array[50] = "Hola mundo como estas hoy.";
		char *test  = (char *)calloc(10, sizeof(int)); 
		//No se reservo memoria nesesaria para la cadena.
		test = (char *)realloc(test,20); 
		
	if(!test){
		//aqui valido que no es NULL el valor de memoria que reserve con calloc
	}

	free(test);   
	*test = NULL; 
	}

```


```c
#include <stdio.h>
#include <stdlib.h>

void get_ptr_add(int **var){

	//Como liberar la memoria del puntero
  printf("la direccion del puntero es: %p\n", var);
  free(*var);
  *var = NULL;
}

int main(){
  int *ptr = (int *)calloc(70, sizeof(int)); 
  printf("la direccion del puntero es: %p\n", &ptr);
  get_ptr_add(&ptr);
  free(ptr);  //Ya se libero la memoria pero mientras que la memoria liberida apunte a NULL este free no dara problemas.
  
   return 0;
}

```

- Ejemplo de como pasar punteros de punteros por una funcion.
```c
#include <stdio.h>
#include <stdlib.h>

void get_ptr_add(int **var){

    printf("%p la direccion del puntero \n", var);
    printf("%p es la direccion a la que apunta el puntero\n", *var);
    printf("%d es el valor de la variable \n", **var);
}


int main(){
  int a = 10; 
  int *ptr = &a;
  printf("%p es la direccion del puntero \n", &ptr);
  printf("%p es la direccion a la que apunta el puntero \n", ptr);
  printf("%p es la direccion de la variable a \n", &a);
  printf("%d es el valor de la variable \n", a);
  printf("%d es el valor de la variable atravez del puntero \n\n", *ptr);
  get_ptr_add(&ptr);
  
   return 0;
}

```


