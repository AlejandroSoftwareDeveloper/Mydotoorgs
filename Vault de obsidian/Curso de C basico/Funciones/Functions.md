- La declaracion de funciones se hacen hacen de la siguiente forma:
	  - Los prototipos de las funciones tienen que declararse antes de la llamada de la funciones principalmente en los encabezados(header).
	  - Despues de declararse un prototipo debe declararse la funcion antes de poder ser invocada.
	  - los prototipos y declaracion de funciones se pueden declarar en otros archivos.
	  - Los prototipos siguen el sig formato 
			1. tipo de dato de retorno.
			2. nombre de la funcion(no puede empezar con numeros o caracteres extranios).
			3. parametros que recibe la funcion.
```c
#include <stdio.h>

int suma(int); //prototipo de la funcion

int main(){
	suma(1);        //invocacion de funcion
	return 0;
}

int suma(int valor){   //declaracion de la funcion 
		return valor + 1;
}

```

- Si se declara una funcion de antes de la llamada no se tiene que poner prototipo de la funcion
```c
#include <stdio.h>

int sum(int max){
	return 1 + max;
}

int main(){
	pintf("%d",sum(10));
	return 0;
}


```