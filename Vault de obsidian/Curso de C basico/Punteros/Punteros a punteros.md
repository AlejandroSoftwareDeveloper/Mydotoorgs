Se puede hacer inicializacion de puntero a puntero.

```c
#include <stdio.h>

int main(int argc, char** argv) {
	int var = 9;
	int* ptr = &var;
	int** gptr = &ptr;
	printf("El valor de var es %d\n",var);
	printf("La direccion de var es %p\n",&var);
	printf("---------------------------\n");
	printf("El valor de ptr es %d\n",*ptr);
	printf("La direccion de var atravez de ptr es %p\n",ptr);
	printf("---------------------------\n");
	printf("La direccion de ptr es %p\n",&ptr);
	printf("La direccion de gptr es %p\n",&gptr);
	printf("El valor de gptr es la direccion de ptr %p\n",gptr);
	return 0;
}

```