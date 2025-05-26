- Los archivos externos se abren y se leen con la biblioteca stdio.h.
- Cada archivo se lee byte a byte.
- Existen dos tipos de archivos:
	1. Texto
	2. Binario
- Cada archivo de texto esta escrito por una o varias lineas de caracteres que terminan en una nueva linea ("\\n").
- Los datos binarios estan escritos como una serie de bytes exactamente a como aparecen en memoria.
	1. datos de imagenes
	2. musica codificada - not readable
- Se debe entender el formato de archivo que se esta leyendo.
	1. Una secuencia de 12 bytes de en un archivo binario pueden ser cualqiuer cosa; 12 8 bit signed integers, 12 8 bit unsigned inetgers o culaquier otro tipo de elemento.
	2. En modo binario todo byte del archivo es accesible.
- Los *Stream* abren tres tipos abren tres archivos en  en tu comportamiento.
	 1. Entrada estandar - la entrada de tu sistema, usualmente el teclado.
	 2. Salida estandar    - la salida de tu sistema, usualmente el monitor 
	 3. Salida de error     - la salida de tu sistema, usualmente el monitor.

- Algunas funciones de la Entrada estandar:
```c
	getchar();
	scanf();
```

- Algunas funciones de la *Salida estandar*
```c
	putchar();
	puts();
	printf();
```
