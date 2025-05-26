#Conversion_Implicita
- En c y c++ hay conversion implicita de datos y estas se realizan entre integers y floats (POR AHORA)
- Se siguen las siguientes reglas:
	- Cuando se asigna un flotante a un entero la parte despues de la coma se elimina truncadose el valor ej  75.45 seria 75. 
	- Si se realiza una operacion aritmetica entre dos enteros la porcion despues de la coma se descarta incluso si es un flotante.
```c
	int   x = 0;
	float y = 12.125
	x = y     // Aquí el valor al asignarse quedaria 12;

	int x2 = 12;
	int x3 = 5;
	float y = x2 / x3 // EL resultado aquí va a ser 2.0 aunque el 
					  //Verdadero resultado es 2.4 



```

#Conversion_explicita
- La conversion explicita se hace poniendo tipo de dato al que se quiere convertir poninendo el tipo de dato delante y entre parentesis.
	- Cuando se convierte de un tipo a otro se toma en cuenta la presedencia de operadores. Esto significa que se convertira primero y luego se realizara la operación aritmetica.
	
```c
	(int)21.51 + (int)26.99  //Se convierte a entero y luego se suma
```

- El operador sizeof (es un operador aunque que paresca una funcion) se usa para saber el tamaño de las variables en bytes almacenados en memoria. 
	- Se usa en tiempo de compilación a menos que se estime en tiempo real el tamaño de la variable de tipo arreglo.
	- El argumento de sizeof puede ser:
		1. Una variable
		2. El nombre de un arreglo
		3. El nombre de un tipo basico de datos
		4. El nombre de un tipo de dato derivado
		5. Una expresion
```c
	int c = 10;
	sizeof(c);
	sizeof(int);
	sizeof( 1 + 1);
```

- La precedencias de operadores se muetra en la tabla de la pagina 1 de documento de TR0173 C que esta en la carpeta D:\Literatura y Videotutoriales\c\C y C++\C. 








