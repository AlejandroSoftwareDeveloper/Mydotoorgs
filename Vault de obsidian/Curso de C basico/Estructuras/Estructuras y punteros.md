- Las estructuras se pueden inicializar con punteros y funcionar como otros tipos de puntero  

```c
    struct date {
        int day;
        int month;
        int year;
    };

struct date today,*datePtr;
datePtr = &today;

```

- Se puede acceder indirectamente a cualquier elemento de la estructura de today a travez del puntero Stcptr
```c
//Se usa los parentesis porque el operador . tiene mayor precedencia que el operador *
(*datePtr).day = 10;

//La forma mas conocida es con el operador ->
datePtr->day = 10;

//Se puede conciderar que (*x).y es igual a x -> y
```

- Ejemplo completo 
```c
    struct date {
        int day;
        int month;
        int year;
    };

struct date today,*datePtr;
datePtr = &today;


datePtr->day   = 9;
datePtr->month = 10;
datePtr->year  = 1785;

printf("Hoy es %i del %i de %.2i\n",datePtr->day,datePtr->month,datePtr->year % 100);

```
- Las estructuras pueden contener punteros
- Se puede acceder a los elementos de esta como elementos de una estructura corriente
```c
    struct intPtrs {
        int *p1;
        int *p2;
    };

struct intPtrs pointers;
int i1 = 100, i2;

pointers.p1  = &i1;
pointers.p2  = &i2;
*pointers.p2 = -97;


printf("i1 = %i, *pointers.p1 = %i\n",i1,*pointers.p1);
printf("i2 = %i, *pointers.p2 = %i\n",i2,*pointers.p2);

```
- La inicializacion de arreglos de caracteres en las estructuras y punteros en la estructura son bastante similares, pero tiene diferencias notables.   
- En el siguente caso la estructura names tiene reservada la 40 bytes en elementos char.
- En el caso de la estructura pnames tiene reservada la 2 byte en elementos char*, permitiendo cambiar el tamanio a dinamicamente.
- Los punteros que se crean dentro de una estructura almacenan valores constantes con lo que se inicializan o se reserva espacio con malloc, calloc ect...

```c
    struct names {
        char first[20];
        char last[20];
    };

    struct pnames {
        char *first;
        char *last;
    };

    struct names  veep  = {"Talia","Summers" };
    struct pnames treas = {"Brad","Fallingjaw"};
    printf("%s and %s\n",veep.first,veep.last);

```

- Ejemplos de punteros utilizando memoria dinamica
```c
void get_info(struct namect* ptr){

    char temp[SLEN];
    printf("Por favor introdusca su primer nombre.\n");
    s_gets(temp,SLEN);

    //Reserva memororia que guarde el nombre
    ptr->fname = (char *)malloc(strlen(temp) + 1);   
    strcpy(ptr->fname,temp);

    printf("Por favor introdusca su primer apellido.\n");
    s_gets(temp,SLEN);

    //Reserva memoria que guarde el segundo nombre
    ptr->lname = (char *)malloc(strlen(temp) + 1);   
    strncpy(ptr->lname,temp,SLEN);

}
```
