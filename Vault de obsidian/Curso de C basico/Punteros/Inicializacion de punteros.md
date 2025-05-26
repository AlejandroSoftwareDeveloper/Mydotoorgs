- Los punteros se inicializan con la dirección de las variables antes declaradas.
- Los elementos como NULL o escape de cadenas de caracteres ('\\0') son considerados elementos falsos dentro de un ciclo if o while.
```c
#include <stdio.h>

int main(){
	int num = 3;
	int *pnum = &num;

	printf("EL valor de num es %d\n",num);
	printf("EL valor de pnum es %d\n",*num);

	return 0;
}
```

- Se puede inicializar los punteros en null incluyendo la bibloioteca.
```c
	#include <stddef.h>
	int *pnum  = NULL;
	int *pnum2 = 0;    //Tambien se puede inicializar con 0 que es igual que decir NULL
```

- Los punteros reservan espacios de 8 bytes, las direcciones de los punteros son de 16  digitos hexadecimales.
 1. Si el sistema operativo es de 64 bit y el compilador lo permite los punteros seran de direcciones de 64 bit.
 2. Algunos compiladores solo soportaran direcciones de 64 bit
