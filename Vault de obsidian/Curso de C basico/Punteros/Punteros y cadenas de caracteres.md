- Los punteros se usan con cadenas de caracteres para apuntar al principio de la cadena de y con la aritmetica se puede apuntar al final de  de la cadena para obtener la longitud del arreglo o el final de la cadena.
```c
#include <stdio.h>

int arraySum(int array[],const int n) {
    int sum = 0,*ptr = NULL;
    int *const arrayLong = array + n;
    for(ptr = array;ptr < arrayLong;ptr++)
	    sum += *ptr;
    return sum;
}

int arraySumPtr(int *p_arr,const int n){
  int sum = 0;
  int *const arrayLong = p_arr + n;
  for(;p_arr < arrayLong;p_arr++)
	sum += *p_arr;
  return sum;
}

void copyStringWhile(char *to ,char *from){
  while( *from && *to )
  	*to++ = *from++; 
  *to = '\0';
}

//Para copiar de 
void copyStringFor(char *from ,char *to){
  for (;*to = *from,*from != '\0' ;from++,to++);
  *to = '\0';
}

int main(){
  char str1[] = "hola mundo";
  char str2[20];
  char str3[] = "hola mundo";
  char str4[20];
  int arraySum(int arr[],const int n); 
  
  void copyStringWhile(char *,char *);
  void copyStringFor(char *,char *);

  int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};
  printf("The sum is %i\n",arraySum(values, 20));

  copyStringWhile(str1, str2);
  printf("El valor de la primera cadena de caracteres es %s\n",str2);
  
  copyStringFor(str3, str4);
  printf("El valor de la segunda cadena de caracteres es %s\n",str4);
  return 0;
}
```
