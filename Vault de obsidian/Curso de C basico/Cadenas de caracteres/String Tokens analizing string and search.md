Otras funciones my utilizadas son las funciones de busqueda en cadenas de caracteres y particionamiento de cadenas.
las siguientes funcionalidades se encuentra en la cabecera string.h

```c
	//Busca en la cadena el caracter deseado y devuelve el puntero      de la posicion de el elemento que encontro, devuelve NULL si no encontro el caracter deseado. 
	char str[] = "Estoy cargando informacion que me ayude";
	char ch = 'c';
	char *elm = NULL;
	elm =	strchar(str,ch);
	
	//Busca en la cadena la palabra deseada y devuelve el puntero      de la posicion de el elemento que encontro, devuelve NULL si no encontro el caracter deseado. 

	char str[] = "Estoy cargando informacion que me ayude";
	char mystr[] = "informacion";
	char *elm = NULL;
	elm =	strstr(str,mystr);
	//devuelve la cadena de caracteres de la palabra encontrada hasta el final de la cadena

```

```c
	//Divide la cadena en tokens
	strtok()
	
  char str[] = "Hola alejandro-como estas hoy que-tal te va.";
  char tok[] = "-";
  char *token = NULL;
  token = strtok(str,tok);
  do {
    printf("%s",token);
		//strtok toma como referencia la cadena anterior por lo que si se quiere iterar sobre la misma cadena se usa NULL, si se desea iterar sobre la nueva cadena se le pasa la nueva cadena.
  } while( (token = strtok(NULL,tok)) != NULL );
	```

```c
	//Para analizar cadenas se usan las siguientes funciones las cuales retornan true o false, cuando resiven un 'CARACTER'.
	char letter = 'd';
	islower(letter) //Minuscula
	isupper() //Mayscula
	isalpha() //Alfanumerico 0 al 9, de a hasta z
	isalnum()  //Muestra cualquier caracter del '0' al '9' y de la A a Z minusculas y mayusculas.
	isdigit() //Muestra cualquier caracter del '0' al '9'
	isxdigit()//Caracteres hexadecimal del '0' al '9' 'A' a 'F' y de  'a' a 'f'
	iscntrl() //Muestra cualquier caracter  
	isprint() //Muestra cualquier caracter 
	isgraph() //Muestra cualquier caracter menos los espacios
	isblank() //Muestra los caracteres en blanco y tabulador '\t'
	isspace() //Muestra los caracteres que crean espacios en blancos como '\n' '\t' '\v' '\r' '\f'
	ispunct() //Muestra los caracteres que no muestra isspace() e isalnum()
```



