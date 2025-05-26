- En C existen varios tipos de datos primitivos, la diferencia entre estos es:
*la cantidad de memoria a almacenar*
```c
	int           /* enteros          (1,2,-10)*/
	float         /* punto flotantes  (10.0,23.33 ,-13.654)*/
	double
	char
	_Bool
```

1. Los enteros *int* almacenan números decimales completos
  -  Se puede almacenar los número positivos y negativos en los *int*
  - Los enteros almacenan ademas números hexadecimales 
  - Si se asigna un cero y despues una x seguido por numero y caracteres de 
    la A a la F en minuscula o mayuscula, se considerara un hexadecimal.
  - Los *int* contienen tres __adjetivos__ que convinados con el tipo int pueden darle un rango mas amplio de valor a los enteros.
  - Los adjetivos tambien se pueden usar con tipo de variables.
    
```c
    int value        = 10; //Declaracion de variables y asignacion de datos.
    int rgbColor     = 0x00FADB;
	short int value2 = 10;
	short value3     = 23;  // Ocupa menos espacio que un int.
	signed value4    = 12;  // Desde los limites negativos a los positivos.
	unsigned int values2 = 12   //Para numeros positivos solamente.
	long value5      = 23;
	long long value6 = 4567;
	signed long long values = 86532;
	long float valuex;
	long double valued;
```

2. Los flotantes *float* almacenan números punto flotantes ( números que contienen espacios decimales )
  - Los valores 3., 125.8 y -.0001 son ejemplo de constantes punto flotantes que pueden ser asignado una variable.
  - Los valores flotantes pueden ser expresados en notacion cientifica 
	  1.7e4 es un numero punto flotante expresado in esta notacion y representa el valor 1.7 x 10 a la potencia de 4.
  - Los float constantes se inicializan como double en la maquinas de  64 bits.
  - Para declarar que son de tipo *float* constantes se les pone una f al final del numero.
	  
```c
	float value = 1.01245; 
	float value2 = 1.56f;
```

3. Los *double* son del mismo tipo que los flotantes pero con mas precision.
  - Se usa cuando el rango de precision de las variables floats no son suficientes.
  - Puede almacenar el doble de digitos significativos.
  - La mayorias de las computadores representan doubles usando 64 bits
4. Los *_Bool* son los tipos de datos mas pequeños, para almacenar solo 0 u 1 estos representan el estado binario, apagado o encendido , si o no verdadero o falso. El valor 0 indica el valor falso, y 1 indica el valor verdadero.
5. Los *long* pueden ser usados para almacenar grandes cantidades.
  - Las variables constantes *long* se forman opcionalmente adicionando una L en mayuscula o minuscula al final de una cosntante de *int* 
  - Lo mismo es valido para los *double*. 
 
```c
 long int val = 131071100L;
 long double us_deficit_2017 = 1.234e+7L;
```
