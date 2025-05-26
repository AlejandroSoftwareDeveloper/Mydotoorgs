- La funciones de la cadena de caracteres se encuentran en la biblioteca 
string.h

```c
	#include <string.h>

	strlen()      //devuelve la longitude de la cadena cadena
//strlen devuelve un valor en tamaño que se puede convertir en a entero  de tipo size_t
	strcpy(), strncpy()    //copia un cadena de caracteres a otra
	strcat(),strncat()    //Concatena una cadena con otra
	strcmp(),strncmp()    //Compara una cadena de caracteres con otras
```
  
```c
    #include <stdio.h>
    #include <string.h>

    int main(){
	    char myString[] = "myString";
      printf("The length of this str is: %d",strlen(myString));
	    return 0;
    }

```

```c

    char s[100];     //declaracion de la cadena
    s = "hello";    //inicializacion - NO funciona ("lvalue required" error)
    char scr[50], dest[50];
    //Copia los string sin chequear que cabe la cadena de caracteres
    strcpy(src,"This is source");
    strcpy(dest,"This is detination");

```

```c
    char src[40];
    char dest[12];
    //Ver como funciona memset
    memset(dest,"\0",sizeof(dest));
    //Copia los string limitando la cadena de caracteres
    strcpy(src,"This is source");
    strncpy(dest,src,10);  
```

```c
    //Ejemplo de programa
    #include <string.h>
    int main(){
        char myString[] = "My name is Alejandro";
        char temp[50];
        strncpy(temp,myString,sizeof(temp) - 1); // aqui copia el maximo de la cadena -1 (que es el espacio reservado para el elemento del escape de caracteres.)
        printf("The length is %d\n",strlen(myString));
        printf("The string is %s",myString);
        return 0;
    }
```

```c
    //Ejemplo de programa

    #include <string.h>
   int main(){
	   char scr[50], dest[50];
        //Copia los string sin chequear que cabe la cadena de caracteres
        strcpy(src,"This is source");
        strcpy(dest,"This is detination");
        strncat(dest,src,15); //copia en el arreglo destino(dest) hasta 15 caracteres de la cadena fuente (src)
        printf("La cadena final es: | %s |",myString);
        return 0;
    }
```

```c 
//No se puede compara un char con un char [] 
//osea 'a' no se puede comparar con "a"

//El comparador de la cadena de caracteres es strcmp y retorna un valor en dependencia de sin el valor es
// si los valores son iguales retorna 0\
// si str1 > str2 retorna valor > 0
// si str1 < str2 retorna valor < 0
// strcmp recibe un 3er parametro que limita la comparacion 
// hasta la cantidad de elementos que se le paso como parametro 

	printf("strcmp(\"A\",\"A\") is");
	printf("%d\n",strcmp("A","A"));  //0

	printf("strcmp(\"A\",\"B\") is");
	printf("%d\n",strcmp("A","B"));  //-1

	printf("strcmp(\"B\",\"A\") is");
	printf("%d\n",strcmp("B","A"));  //1

	printf("strcmp(\"C\",\"A\") is");
	printf("%d\n",strcmp("C","A"));   //1

	printf("strcmp(\"Z\",\"a\") is");
	printf("%d\n",strcmp("Z","a"));   //-1

	printf("strcmp(\"apples\",\"apples\") is");
	printf("%d\n",strcmp("apples","apples")); //1 
	
 //Compara el primer elemento con el segundo hasta 5 caracteres
	if(strncmp("astronomy","astro",5) == 0){
		printf("Palabra astronomy encontra");
	}

	if(strncmp("astounding","astro",5) == 0){
		 printf("Esto no se ejecutara \n");
		 printf("porque no coinciden la cadenas.");
	}
	
```


