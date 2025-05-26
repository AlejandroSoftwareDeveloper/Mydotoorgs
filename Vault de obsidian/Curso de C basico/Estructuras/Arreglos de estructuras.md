- C permite la creacion de estructuras de arreglos y arreglos de estructuras. 
- Declarar un arraglo de estructuras es como declarar cualquier otro tipo de arraglo.
```c
	struct date {   //Declaracion de la estructura
		int day;
		int month;
		int year;
	};
// Cada elemento dentro del arreglo es como declarar varios elementos de estructuras;
struct date mydates[10];

```

- Para acceder a cualquier miembro de una estructura se usa los corchetes para seleccionar los elementos del arreglo y luego se usa el operador ( *.* ) para acceder a los valores de dicha estrutura.
```c

mydates[0].month = 12;
mydates[0].year  = 2023;
mydates[0].day   = 9;

```

- Otra forma de inicializar el arreglo es haciendolo como un arreglo multidimencional. 
- La siguiente inicializacion solo inicializara los primeros 3 elementos del
arreglo.
- Tambien se puede inicializar sin las llaves internas pero esta opcion tiende a provocar confusion.
```c
 struct date myDates[10] = {   
		  {1,3,2030},
		  {15,10,2012},
		  {15,12,2002},
  };
 struct date myDates[10] = { 1,3,2030,15,10,2012,15,12,2002 };
```

- Se puede inicialisar elementos especificos del arreglo seleccionando la posicion.
- De la inicializacion del arreglo por posicion se puede inicializar los parametros especificos deseados.
```c 
	//Se inicializó solo la tercera posicion del arreglo.
 struct date myDates[10] = { [2] = { 1,3,2030 } };

	//Inicializacion de parametros en una posicion dada.
 struct date myDates[10] = { [2].day = 1,[2].month = 3 };
```

- Otra forma de trabajar con arreglos en las estructuras 
```c
	struct month {   //Declaracion de la estructura
		int numberOfDays;
		char name[3];
	};

 struct month mymonth;
	mymonth.numberOfDays = 31;
	mymonth.name[0] = 'J';
	mymonth.name[1] = 'a';
	mymonth.name[2] = 'n';

//Otra forma de inicializar una estructura con arreglos dentro
 struct month mymonth = { 31,{'J','a','n'} };

```


