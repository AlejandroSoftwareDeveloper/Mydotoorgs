Para encontrar la posicion en el fichero se usan 2 funciones principalmente
```c
ftell();
fgetpos();
fsetpos();
fseek();
```

- La funcion ftell() devuelve un long int con que es la longitud de en bytes del fichro abierto en cuestion.

```c
#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *fp;
	long int len;

	fp = fopen("test.txt","r");

	if(fp == NULL) {
		perror("Error al abrir el fichero.");
		return  -1;
		
	}
	
	fseek(fp,0,SEEK_END);
	len = ftell(fp);

	fclose(fp);

	printf("El tamanio del fichero es de %d bytes ", len);

}


```

- La funcion fgetpos() almacena en una variable de tipo *fpos_t* la posicion de actual del puntero y  devuelve 0 si la operacion es exitosa o no 0 si la 
- La definicion de la funcion es: 
```c
int fgetpos( FILE *pfile,fpos_t *position);
```


```c
#include <stdio.h>

int main(){

	FILE *fp;
  //La variable esta definida en stdio.h
	fpos_t here; // No se puede declarar como puntero
 
 fp = fopen("file.txt","W+");
 fgetpos(fp,&here);
 fputs("Hello world",fp);
	
 fclose(fp);
 return 0;

}
	
```

- La funcion fsetpos() almacena en una variable de tipo *fpos_t* la posicion de actual del puntero y  devuelve 0 si la operacion es exitosa o no 0 si la funcion es correcta.
- Esta funcion esta disenada para trabajar con fgetpos, la cual usa los mismos parametros para posisionarse en el archivo, con los parametros que retorna fgetpos.
- La definicion de la funcion es: 
```c
int fsetpos( FILE *pfile,fpos_t *position);
```
	

```c
#include <stdio.h>

int main(){

	FILE *fp;
  //La variable esta definida en stdio.h
	fpos_t position; // No se puede declarar como puntero
 
 fp = fopen("file.txt","W+");
 fgetpos(fp,&position);
 fputs("Hello world",fp);
	
 fsetpos(fp,&position);
 fputs("This will erase previous content.",fp);
 fclose(fp);
 return 0;

}
	
```

- La funcion fseek() permite posicionar el puntero en el archivo. 
```c
int fseek(FILE *pfile,long offset,int origin);
```

- La funcion esta definida por 3 parametros
 1. El primer parametro es el fichero en cuestion.
 2. El segundo es define la posicion inicial del puntero en el archivo
 3. El tercero es la posicion final del puntero a la cual se va a dirigir el mismo. Esta compuesta por 3 variables.
```c
SEEK_SET //Define el principio del archivo
SEEK_CUR //Define la posicion actual en el archivo
SEEK_END //Define el final del archivo del archivo
```

- La funcion determina en la posicion actual definida por uno de los tres parametros anteriores cuanto se va a leer en la funcion.
```c
#include <stdio.h>

int main(){

	FILE *fp;
	fpos_t here;
  int pos = 7; //Numero de bytes que se movera a partir de la posicion deseada.
 fp = fopen("file.txt","W+");

	if(!fp){
		printf("Error al abrir el archivo");
	}

	fputs("Hola soy Alejandro",fp);
	fseek(fp,pos,SEEK_SET);

	fputs("Hola soy Alejandro",fp);
  fclose(fp);
  return 0;
}
```

- Ejemplo de posicion en un fichero
```c
#include <stdio.h>

int main(){

	FILE *fp;
 
 	fp = fopen("file.txt","w+");

	if(!fp)
	 printf("Error al abrir el archivo");
	

	fputs("This is Jason \n",fp);
	fputs("Espero que estes bien Jason \n",fp);
	fputs("\n",fp);
	fseek(fp,10,SEEK_END);

	fputs("Hello how are you",fp);
 	fclose(fp);

  	return 0;
}
```


