- Las llamadas por valor son aquellas que reciben el dato en la funcion pero hacen una copia de este para luego devolver el los valorer deseaos por la funcion.
- La llamadas por referencia se les pasa la direccion de una variable el cual permite modificar el valor original sin crear una copia de la variable original.
- Los parametros de las funciones de llamada por referencia, se declaran con * y cuando se los pasa un parametro que no es un array se usa el simbolo & que significa direccion de el valor. 
```c
#include <stdio.h>

int func_by_value(int val){
  return val + 1;
}

void func_by_reference(int *val){
   *val += 1;
}

int main(){
  int value = 10;
  
  printf("La function por valor retorna %d .\n",func_by_value(value));

  printf("El valor de value es %d .\n",value);
  
  func_by_reference(&value);

  printf("El valor de value despues de la funcion por referencia es: %d.",value);
  
  return 0;

}





```