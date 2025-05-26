- Son tipos nombrados de memoria que almacenan tipos especificos de datos.
- Las variables constan de tipos primitivos y tipos compuestos.
-  Se inicializan de la siguiente forma:
	1. Asignacion =
	2. Llaves {}
	3. Parentesis ()
	4. Las variables no pueden empezar con numeros o caracteres extraños.
	 
 ```c++
	// Asi se puede inicializar una variable 
	// int es el tipo de datos que almacena la variable
	// var1 es el nombre de la variable
	// los signos de = {} () son los usados para asignar valores a las variables  
	 int var1 = 0;
	 int var2 {12};
	 int var3 {};     //Esta variable inicializa en 0 con las llaves vacias.
	 int var4 (10.9); //Inicializacion funcional de variables
				      //sirve para iniccializar para hacer conversion implicita
				      // 10.9 es double y aqui es convertida a int 
```

- Las variables son varios tipo
```c++
	int       //Se usa para enteros 1,2,-1 
	float     //Se usa para fraccionarios 3,14 ,323,5 ect...
	double    //Son variables para almacenar float de mayor tamaño 
	char      //Para almacenar caracteres
	bool      /* Para almacenar valores binarios 1,0 pero representando valores falsos
			   o verdaderos */
	void      //Son tipos vacios no se almacena nada en ellos
	auto      /* Se inicializan en dependencia del valor que resiban tomando el tipo 
               necesario segun la vaiable que se les pasen  */
```


- Para saber el tamaño de una variable se usa la funcion sizeof()
```c++
  sizeof(int) //4 bytes
```