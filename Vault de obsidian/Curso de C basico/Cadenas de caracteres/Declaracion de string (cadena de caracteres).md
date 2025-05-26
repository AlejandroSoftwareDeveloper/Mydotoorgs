- Las cadenas de caracteres se inicializan con longitud fija donde se permite que el compilador las inicialize
  terminando con un caracter nulo '\\0'
- Un arreglo de 10 caracteres tiene, 9 caracteres para almacenar y un carater nulo '\\0'
- Cuando se inicializa el string con mas caracteres de los permitido el compilador lanzara un advertencia si la cadena es mas larga que el tamaño dado 

```c
	// Inicializacion de cadena
	char arr[11] = "Hola mundo";

	// Inicializacion de la cadena con el caracter nulo
	char arr2[] = {'H','o','l','a',' ','m','u','n','d','o','\0'};

	// Inicializacion de la cadena con el caracter nulo
	char arr3[11] = {'H','o','l','a',' ','m','u','n','d','o','\0'};

	// Inicializacion con problema, el compilador permitira 
	// inicializarlo pero dara error en la salida, 
	// ya que muestrara datos no validos al final de la cadena 
	char arr4[10] = {'H','o','l','a',' ','m','u','n','d','o','\0'};
  
  //----------------------------//
	// Declaracion de la cadena
	char arr4[20];
	
	//No se puede inicializar la cadena despues de declararse
	arra5 = "Esto no es valido";

	//Se puede inicializar la cadena con varios elementos como char
	char array1[5];
	array1[0] = {'H'};
	array1[1] = {'o'};
	array1[2] = {'l'};
	array1[3] = {'a'};
	array1[4] = {'\0'}; 
```
