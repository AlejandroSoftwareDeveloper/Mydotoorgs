Las constantes en los punteros permiten modificar el comportamiento de estos cuando va a cambiar su valor de direccion o el valor a donde apunta
Hay tres formas de modificar el puntero con *const* 

```c
int data = 1,data2 = 2,data3 = 3;

const int *ptr1 = &data //Esta declaracion no permite modificar el valor de data atravez del puntero.
*ptr1 = 50;             //Error

int *const ptr2 = &data2 //Esta declaracion no permite modificar el valor del puntero, osea la direccion a la que apunta no puede ser cambiada.  
ptr2 = &data             //Error

const int *const ptr3 = &data3 //Esta declaracion no permite modificar el valor del puntero, ni el valor de la variable a la que apunta.
ptr3 = &data             //Error
*ptr4 = 50;              //Error

```

- Otros ejemplos
```c
	int data = 10;
	const int *ptr = &data  //Esta declaracion no permite cambiar el valor de data atravez del puntero.
  *ptr = 20;              //Esto dara error
//------------------------------------------//
	int data2 = 2;
	int data3 = 3;
	int *const ptr2 = &data2; //Esta declaracion no permite cambiar la direccion del puntero 
	ptr2 = &data3;            //Error

//------------------------------------------//
	int data4 = 4;
	int data5 = 5; 
	const int *const ptr3 = &data4; //No se puede cambiar el valor de data4 atravez del puntero, ni cambiar la direccion al que el puntero apunta.

```