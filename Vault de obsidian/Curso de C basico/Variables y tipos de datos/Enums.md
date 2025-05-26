- Los *enum* son tipos de datos que permiten al programador definir una variable y especificar los valores que se puede almacenar en esta.
```c
	enum myColors {    //Creacion de enum
		white,
		black,                 
		yellow,                  
	};
	enum myColors mis_colores,tus_colores; 
		//Inicializacion de enums	
		  //mis_colores y tus_colores							  
```

- Los enumerados se inicializan con valores o se pueden quedar sin estos. Por defecto los valores se inicializan en 0 si no tienen valor asignado como el ejemplo anterior. Los valores que toman en el enum se incrementan al ultimo valor asignado.
- En el proximo ejemplo vemos como se puede inicializar de diferentes formas.

```c
	enum Colores {
		black = 0,
		white = 2,
		yellow,
		blue,
		green = 10,
		red,
		brown	
	}
	// En este caso de declaracion los valores
		// yellow = 3 y blue = 4, porque continuan la cadena del 
		// enum sin asignacion de valores despues de haber creado white
		// con valor 2. Pasa lo mismo con red y brown  
```  