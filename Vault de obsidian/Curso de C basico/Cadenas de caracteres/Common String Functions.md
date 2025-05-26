```c

//La biblioteca de cadena de caracteres es:
#include <string.h>

strlen()                            //devuelve la longitude de la cadena cadena
//strlen devuelve un valor en tamaño que se puede convertir en a entero
// de tipo size_t

strcpy() y strncpy()   //Copia un cadena de caracteres a otra
strcat() y strncat()   //Concatena una cadena con otra
strcmp() y strncmp()   //Compara una cadena de caracteres con otras
```

```c
    #include <stdio.h>
    #include <string.h>

    int main(){
        char myString[] = "myString";
        printf("The length of this string is: %d",strlen(myString));
        return 0;
    }
```

```c
    char s[100];     //declaracion de la cadena 
    s = "hello";    //inicializacion - NO funciona ("lvalue required" error)

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
    strcpy(dest,src,10);  

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


