- Las estructura permiten crear grupos de datos de diferentes tipos agrupandolos para crear contenedor
- Hay varias formas crear una estructura pero las que se van a descibir a continuacion son las mas usuales.
```c
	struct date {   //Declaracion de la estructura
		int year;
		int month;
		int day;
	};
```

- Para crear una instancia de la estructura se debe declarar de la siguiente forma:
```c
struct date today; 
```

- Declaracion de una estructura de tipo Date
- Se puede inicializar una instancia de la struct ya declarada con typedef
```c
typedef struct { 
	int day;
} Date;

Date today = { 2023, 5, 26};

```

- Se puede inicializar una variable cuando se declara la estructura
- En este caso se declaro e inicializo la variable today de tipo struct date
```c
	struct date {   
		int year;
		int month;
		int day;
	} today; 

today.year = 2023;
```

- Se puede inicializar una struct de un solo uso 
- Se les conoce como estructuras anonimas
```c
	struct {   
		int year;
		int month;
		int day;
	} today; 
```


- Para acceder a los valores de una variable de una structura se usa el operador ( *.* )  para llamar a dichas variables.
```c
	struct Date {   //Declaracion de la estructura
		int year;
		int month;
		int day;
	};

struct Date today;
today.year = 2023;
today.month = 5;
today.day = 1;
```

- Se puede inicializar las variables de las estructuras como si fueran elementos de un arreglo, manteniendo la logica de declaracion de las variables en la estructura.
- Se puede inicializar parcialmente la estructura.
```c
	//                    year month day
struct Date today = { 2023 ,  5 ,   1};

//                    year month //inicializacion parcial 
struct Date today = { 2023 ,  5};
```

- Ademas se puede inicializar la estructura con elementos de la misma de la siguiente forma.
```c
struct Date today = { .year = 2023 , .month = 5};
```

- Ademas se puede inicializar la estructura con elementos de la misma con literales compuestos.
- Los valores al asignarlos deben tener el mismo orden de declaracion dentro de la structura, igual a su asignacion.
```c
today = (struct date) = { 2023 , 5, 30 };
```

-  Se puede combinar la asignacion con miembros en los literales compuestos. 
- La ventaja de esta aproximacion es que los argumentos pueden aparecer en cualquier orden.
```c
	struct date {   
		int year;
		int month;
		int day;
	};

struct date today;
today.year = 2023;
today.month = 5;
today.day = 1;

today = (struct date) = { 
		.month = 9 , 
		.day = 24 ,
	  .year = 2023 
  }; 

```
