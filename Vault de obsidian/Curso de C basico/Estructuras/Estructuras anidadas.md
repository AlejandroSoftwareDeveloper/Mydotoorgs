- C permite definir estructuras dentro de estructuras
```c
    struct date {
        int day;
        int month;
        int year;
        char list_of_months[12],
    };

    struct time {
        int hours;
        int minutes;
        int seconds;
    };

    struct DateAndTime {
        struct date sdate;
        struct time stime;
    };

```

- Puede declarar una estructura dentro de otra estructura, donde el valor de la interior no se se puede declarar fuera de esta
```c
    struct time {
    struct date {
        int day;
        int month;
        int year;
    } dob;
        int hours;
        int minutes;
        int seconds;
    };

```

- EL primer miembro de DatAndTime la estructura is de type struct date y el segundo de tipo struct time
- Habiendo definido las estructuras dentro de la nueva estructura de tipo DateAndTime se puede crear una de este tipo, creando estructuras anidadas
- Para acceder a los miembros de las estructuras anidadas se usa el operador punto ( *.* )
```c
    struct DateAndTime event;

    //Accediendo a la estructura dentro de event;
    event.sdate
    
    //Accediendo a los valores de la estructura sdate dentro de event;
    event.sdate.month = 10;

    //Realizando operaciones con los datos anidados de la estructura sdate dentro de event;
    event.sdate.month = 10;
    
    //Incrementa en uno el valor de month 
    ++event.sdate.month;
    event.sdate.month++;

```
- La inicializacion de estructuras dentro de estructura se realiza como un arreglo
```c
    struct DateAndTime event = {{2,1,2015},{3,30,0}};
```

-  Se puede inicializar por miembros siguendo el orden de declaracion de los elementos de la estructura
```c
    struct DateAndTime event = {
             {.month = 2,.day = 1, .year = 2015},
             {.hour = 3, .minutes = 30, .seconds = 0}
        };
```

-  Se puede inicializar de una lista de elementos anidados con un arreglos de los mismos
```c
    struct DateAndTime events[100];
    events[0].stime.hour        = 12;
    events[0].stime.minutes     = 0;
    events[0].stime.seconds     = 0;
```
