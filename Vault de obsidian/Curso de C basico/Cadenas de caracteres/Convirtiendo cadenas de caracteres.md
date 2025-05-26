Para convertir los caracteres en de minuscala a mayuscula y viceversa se usan las siguintes funciones 
```c
	toupper();
	tolower();
	int a = 47;
	```

1- Ambas funciones devuelven un entero despues hay que convertirlos a char (char)a
2- Las funciones anteriores mantienen o convierten en mayuscala o minuscula segun la funcion y devuelven los signos de puntuacion intactos.

```c
char buffer[50] = "Hola alejandro esta cadena la voy a convertir en mayuscula.";
 
for(int i = 0;(buffer[i] = (char)toupper(buffer[i])) != "\0";i++);
```
