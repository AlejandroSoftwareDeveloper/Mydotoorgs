- Para escribir en un archivo se usa la misma biblioteca estandar de c para trabajos con ficheros. En el ejemplo anterior se usa fgetc para escribir caracter a caracter.
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fp;
	fp = fopen("test.txt","w+");
	
	if(!fp)
		for(int ch = 33;ch < 100;ch++)	
			fputc(ch,fp); //Retorna un caracter si la funcion lee      correctamente
	//Si la funcion falla retorna EOF
	
	fclose(fp);
	return 0;	
}

```

- Para escribir en un archivo con la funcion fgets se deben cumplir los siguientes requisitos.
 1. Escribira caracteres de la cadena hasta llegar al caracter de terminacion NULL '\\0'.
 2. Para escribir en una nueva linea debes adicionar en el final de la linea actual el caracter '\\n' manualmente.
 ```c
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fp;
	fp = fopen("test.txt","w+");

	 //Para escribir en un archivo con fgets se debe usar el caracter de salto de linea '\n' porque la proxima insercion se hara a continuacion de la ultima insercion.
	 
	fputs("Hola soy alejandro \n",fp);
	fputs("Hola soy javier",fp);

	fclose(fp);
	return 0;	
}

```

