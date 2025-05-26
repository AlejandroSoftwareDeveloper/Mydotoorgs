- Para acceder a la direccion de un puntero se puede usar el simbolo de direccion (&). Para evitar advertencia del compilador se pone delante de la direccion el operador void.
```c
	char letra = 'a';
	char *pletra = &letra;
	printf("El valor del puntero de es %p\n",(void*) &pletra); 
```

- Para saber el tamaño de los punteros se usa el sizeof pero tiene que hacer typecast o utilizar el operador "%zd"
```c
	int number = 5;
	int *pnumber = &number;

	printf("El tamaño del puntero de es %d\n",(int)sizeof(pnumber)); 
	printf("El tamaño del puntero de es %zd\n",sizeof(pnumber)); 
```

- Ejemplo de como pasar puntero de puntero por una funcion
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
