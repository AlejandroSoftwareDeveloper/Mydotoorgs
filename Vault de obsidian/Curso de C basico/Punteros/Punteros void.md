- Los punteros *void* permiten guardar la direccion de memoria de cualquier tipo de elemento.
- Se puede utilizar este puntero para retornar la direccion de memoria de de un puntero dentro de una sin retornar un valor en especifico
- Si se almacena la direccion de una variable de un puntero de un tipo x a un puntero *void*  para obtener el puntero anterior ahy que hacer un *typecast* del tipo de puntero deseado.

```c
#include <stdio.h>

void* retorna_valor_mas_1(int *valor){
  *valor += 1;
  return valor;
}

int main(int argc, char *argv[]){
  int data = 10; 

  printf("%d",*(int *)retorna_valor_mas_1( &data));
  
  return 0;
}
```

- Ejemplo 2
```c

    int i = 10; 
    float f = 2.34;
    char ch = 'k';

    void *vptr;
    vptr = &i;
    printf("Value of i = %d\n",*(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n",*(float *)vptr);

    vptr = &ch;
    printf("Value of f = %c\n",*(char *)vptr);

```