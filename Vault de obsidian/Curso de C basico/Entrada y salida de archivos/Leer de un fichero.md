- Para leer de un fichero abierto se usa la funcion fgetc()
- La funcion recibe el puntero de el fichero y retorna un int 
```c 
//Lee caracter a caracter del fichero pfile  
int mchar = fgetc(pfile);
```

- Para leer un caracter en un fichero se usa la funcion fgetc. Esta funcion lee caracter a caracter.
```c
 #include <stdio.h>

	 FILE *fp = NULL;
	 int mchar = fgetc(fp);

	//Funcion para empezar colocar el puntero al principio del fichero;
	rewind(fp);
```

- Se puede tantas veces el fichero como se quiera usando la funcion rewind
- Ejemplo de lectura con fgetc 
```c 
	#include <stdio.h>

	int main(){
		FILE *fp;
		int c;
		fp = fopen("myfichero.txt");

		if(fp == NULL){
			printf("%s","Error al abrir el fichero");
			return -1;
		}
		//Falta el resto que esta en el video de lectura de ficheros del curso de c

		fclose(fp);
		fp = NULL;
		return 0;
	}
```

- Para leer un fichero en todos los datos de un fichero caracter a caracter se debe un funcion que lea todo el archivo
```c
FILE *fp;
int c = 0;

fp = fopen("text_file.txt","r");

if(!fp){
	printf("Hay problemas al abrir el archivo");
	return (-1);
}
//Para leer un solo caracter 
while( (c = fgetc(fp)) != EOF )
	printf("%c",c);

fclose(fp);
fp = NULL;
return (0);

```

- Otra forma de leer en un fichero es fgets pero esta funcion solo lee el limite que se le pasa como parametro 
- char * fgets(char * str, int nchars, FILE * stream)
- La lee la cadena en el area de memoria
 1. La funcion lee y almacena en memoria  * str, desde un archivo especificado por el tipo FILE , con limite de nchars.
 2. Si un carater de nueva linea es leido se almacena en la cadena.
 3. Un  caracter de fin de cadena '\\0' se adicionara al final de la linea.
 4. Si no hay errores con la funcion fgets esta retorna el puntero con la variable  str que se le pasó.
 5. 
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  int len = 21;
  char *myname = malloc(sizeof(char) * len);

  fp = fopen("test.txt", "r");

  if( fgets(myname, len, fp) != NULL) 
	
  for(int i = 0; i < len;i++){
    //if(myname[i] == '\0')
    //break;

    if(myname[i] == '\0')
      printf("el signo es '\\0'");
      printf("%c ,%d \n",myname[i],i + 1);
		
  }

  free(myname);
  myname = NULL;

  fclose(fp);
  fp = NULL;
  
  return 0;
}

```

