- El proximo ejemplo muestra como leer el contenido de un fichero con fgets, fseek y ftell.
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char *buffer = (char *)malloc(sizeof(char) * 200);

	FILE *fp = fopen("test.txt", "r");
	if (fp == NULL) {
		fputs("Cannot open fred.txt file\n", stderr);
		return EXIT_FAILURE;
	}
  //Verifica que se lee el fichero hasta el final
  //Posiciona el puntero de lectura del fichero en el
  //ultimo byte con SEEK_END
	if (fseek(fp, 0, SEEK_END) != 0) {
		fputs("Seek to end of file failed\n", stderr);
		return EXIT_FAILURE;
	}
			//Captura la longitu del fichero, este debe estar
			//abierto para contar los (bytes) por caracter con ftell
			long int fpi = ftell(fp);
     	
     	//Reasigna espacio suficiente para leer el fichero completo
     	buffer = (char *)realloc(buffer, fpi + 1);

		  //Posiciona el puntero de lectura del fichero en el
		  //primer byte ,o posicion 0 con SEEK_SET
			fseek(fp, 0, SEEK_SET);

			//Lee linea a linea y cuando encuentra el caracter '\\0' 
			//se detiene y pasa a la proxima linea
	   	while(fgets(buffer, fpi, fp) != NULL){
		  for (int i = 0; i <= fpi; i++) {

		    if(buffer[i] == '\0')
		    	break;
		printf("El caracter %c esta en la posicion %i \n",str[i],i);
		 }
		  break;
		}
	//Cierra el fichero y libera memoria
	fclose(fp);
	fp = NULL;

	//Libera memoria del buffer
	free(buffer);
	buffer = NULL;
	return EXIT_SUCCESS;
}

```

- Como localizar la posicion del puntero en un fichero 
```c

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  fpos_t pos = 0; //Necesario para usar fgetspos

  char *str = (char *)malloc(sizeof(char) * 200);
  int total = 0;
  FILE *fp = fopen("pisos.txt", "r");
  if (fp == NULL) {
	  fputs("Cannot open fred.txt file\n", stderr);
	  return EXIT_FAILURE;
  }
  
  if (fseek(fp, 0, SEEK_END) != 0) {
	   fputs("Seek to end of file failed\n", stderr);
	   return EXIT_FAILURE;
  }
  
  //long int fpi = ftell(fp);
  long int fpi = 500;
  str = (char *)realloc(str, fpi );
  fseek(fp, 0, SEEK_SET);
  while(fgets(str, fpi, fp) != NULL){
    fgetpos(fp, &pos);//Guarda en en pos la posicion actual del 
    //puntero
		printf("Estoy en la posicion %lld\n",pos);
  for (int i = 0; i <= fpi; i++){
	  if(str[i] == '\0' || str[i] == '\n' )
		  break;
		  total += str[i] == ')' ? 1 : -1;
	  }
  }
  printf("%i",total);
  
  fclose(fp);
  fp = NULL;
  	
  free(str);
  return EXIT_SUCCESS;
}

```

- Ejemplo numero 3
```c

#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int primera_vez_sotano = 0;
  _Bool entro_al_sotano = 0;
  char *str = (char *)malloc(sizeof(char) * 200);
  int total = 0;
  FILE *fp = fopen("pisos.txt", "r");
  if (fp == NULL) {
  fputs("Cannot open fred.txt file\n", stderr);
  return EXIT_FAILURE;
  }
  
  if (fseek(fp, 0, SEEK_END) != 0) {
  fputs("Seek to end of file failed\n", stderr);
  return EXIT_FAILURE;
  }
  
  long int fpi = ftell(fp);
  str = (char *)realloc(str, fpi );
  fseek(fp, 0, SEEK_SET);
  while(fgets(str, fpi, fp) != NULL){
  for (int i = 0; i <= fpi; i++){
  if(str[i] == '\0' || str[i] == '\n' )
  	break;
  	total += str[i] == '(' ? 1 : -1;

  	if(entro_al_sotano == 0 && total > 0){
	  primera_vez_sotano++;

	}else{
	  entro_al_sotano = 1;
	}

  	}
	  
  }

  printf("Subio y bajo %i veces y entro en el sotano a la vez %i\n",total,primera_vez_sotano + 1);
  fclose(fp);
  fp = NULL;
  	
  free(str);
  return EXIT_SUCCESS;
}




```