- El preprosesador es una caracteristica unica de C y C++ permite llamar bibliotecas, definir constantes, crear macros ect..
- Las funcionalidades del preprosesador se declaran comenzando con el simbolo #.
- Usualmente se declara al principio de los archivos .c o .h, pero pueden declararse en cualquier parte del archivo. 
- El preprocesador se ejecuta antes de que el codigo declarado en c se ejecute en una parte del proceso de compilacion llamado **preprosado**:
```c
  #include <stdio.h> //Directiva del Preprosesador
	
  int main(){
	  return 0;
  };
					  
```

- Los archivos cabecera *header(.h) definen la informacion de algunas de las funciones que vamos a utilizar.
- En el caso de <stdio.h> define la funcionalidades de entrada y salida de datos del sistema que necesita el compilador para funcionar, ejemplo es la funcion printf(). stdio significa "*standart input output*" 
- Los archivos cabecera especifica la infomacion que el compilador usa para integrar cualquier informacion de una funcion dentro del programa.
- Los nombres de los headers son case sensitive significa que deben escribirse con cuidado, ya que sino daria problemas al importarlos en el programa durante el preprocesado.

- Hay 2 formas de incluir un archivo header en un programa
```c

	Me quede en el capitulo 3 basic concept min 8:17
	/*
		Usando llaves angulares le decimos al sistema que busque dentro
		del sistema de directorio estandar
	*/		
	#include <stdio.h>   
    /*
	    Usando las doble comilla "milib.h"
		Les decimos al compilador que busque en el directorio 
		actual
	*/
	#include "mylib.h"

```

- Las directivas del preprocesador *#ifndef* y *#define* protegen contra la inclusion de multiples archivos headers.
- En los [[Header]] puedes declarar varios tipo de elementos y el codigo va en los archivos .c
