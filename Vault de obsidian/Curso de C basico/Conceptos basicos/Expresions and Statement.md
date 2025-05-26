- Las declaraciones o "*statement*" son los pasos basicos de un programa en C. Muchas declaraciones estan construidas a partir de expresiones.
- Las declaraciones son los bloques de un programa.
- Un programa es una series de declaraciones con sintasis especial que teminan con un _punto y coma_.
```c
	//Los siguientes son ejemplos de declaraciones
	int alejando;       // Declaracion (Declaration Statement) 
    alejandro = 5;      // Asignacion  (Assignment)
	printf("Alex");     //Llamada de funcion (Function call statement)
	while(alejandro < 20) alejandro += 1; 
	// Declaracion structurada (Structure Statement)
	return 0;          // Declaracion de retorno (return statement)
	//C considera que una expresion puede ser una declaracion si se le 
	//adiciona un ; son perfectamente valido en c.
	8; 3 - 4;   // Expresion  (Expression Statements)
```

- Las *declaracion compuestas* se encuentran dentro de bloques de codigo
```c 
  int index = 0;           
  while(index < 10){       //Declaracion estructurada
	  printf("Hola");      
	  index = index + 1;
  }
```



- Una expresion o "*expression*" consiste en una combination de operandos y operadores 
   1. Los operandos son sobre los que un operador trabaja ej: 2 + 4 los operando son 2 y 4 y el operador es +
   2. Los operandos pueden ser constantes, variables, o combinaciones de los 2 tipos.
   3. Todas las expresiones tienen un valor.
   4. Ejemplos de expresion:
```c
  -6 
  4 + 21
  a * (b+ d/c) /20
  q = 5*2
  x = ++q % 3
  q > 3    
```