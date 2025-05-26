- Los arreglos tienen 2 limitantes:
	- Son de un unico tipo de datos
	- El tamaño es limitado
```c
	//Se puede declarar un arreglo con cualquier tipo de dato
	int array1 [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int array2 [] = { 1, 2, 3, 4, 5};
	float array3 [] = { 1.3, 2.1, 3.10, 4.3, 5.0};

	//Se puede inicializar los arreglos de sin haberlos inicializado 
	//completamente. El resto de los elementos se inicializa en 0.
  int array5 [10] = { 1, 2, 3, 4, 5};
  
  //Guarda el valor que entra por teclado en la posicion 4
  //de arreglo3
	int i = 4;
	scanf("%f",&array3[i]);
```


```c
	//arreglo de 2 dimensiones
  int numeros[3][4] = {   
		  {10,20,30,40},
		  {15,25,35,45},
		  {47,48,49,50},
  };
```