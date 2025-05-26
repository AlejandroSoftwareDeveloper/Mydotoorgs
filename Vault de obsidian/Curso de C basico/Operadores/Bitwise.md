Los operadores de cambio de bits trabajan sobre los bits directamente

- Operador AND ( & )
```c
	//10010111001
	//10110011101
	& 
	//copia el bit 1 si existe en ambos elementos
	//10010111001
	//10110011101   &
      ^ ^^ ^^^ ^	  
	  10010011001
```

- Operador OR ( | )
```c
	//10010111001
	//10110011101
	| 
	//copia el bit 1 si existe al menos en un elemento
	//10010111001
	//10110011101   |
      ^ ^^ ^^^^	^  
	  10110111101
```

- Operador XOR ( ^ )
```c
	//10010111001
	//10110011101
	^ 
   //copia el bit 1 si existe en uno de los dos elementos pero no ambos
	//10010111001
	//10110011101   ^
        ^  ^  ^
	  00100100100
```

- Operador Binary Complement ( ~ )
```c
	//10010111001
	~ 
    //Cambia el valor del bit, se usa en complemento a 2 
	//01101000110
```

- Operador Binary ( << )
```c
	//01001 = 9  
	 9 << #
    //Cambia el valor de los bit # veces hacia la izquierda 
	//  9 << 2
	// 100100  =  36
```

- Operador Binary ( >> )
```c
	//01001 = 9  
	 9 >> #
    //Cambia el valor de los bit # veces hacia la derecha 
	//  9 >> 1
	// 100  =  4
```

