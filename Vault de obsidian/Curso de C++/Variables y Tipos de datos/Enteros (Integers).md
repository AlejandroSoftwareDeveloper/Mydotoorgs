- Tienen valor de 4 bits o mas
-  Almacenan decimales  
- Los int tienen modificadores que permiten condicionar los valores que almacenan 
```c++ 
  // Un int se declara como sigue a continuacion
  // Esta declaracion de int va desde -2_147_483_648 hasta 2_147_483_648
  int var1 = 0;
```

```c++ 
	// Esto permite almacenar la cantidad del ejemplo anterior, positivos y negativos
   signed int var1 {0};
```

```c++
	 // Este modificador almacena solo los tipos de enteros positivos 4_294_967_295
   unsigned int var {21};
```

- Los modificadores de short y long se usan en conjunto con int para cambiar el tamaño 
 de la variable
```c++ 
 short var0 {};                          // 2 bytes
 short int var1 {};                      
 signed short int var2 {};               
 unsigned short int var3 {};             

 long int var4 {};                       // 4 o 8 bytes
 signed long int var5 {};
 unsigned long int var6 {};              

 // Las combinaciones son iguales que short e int  
 long long var7 {};                     // 8 bytes
 signed long long int var8 {};
 unsigned long long int var9 {};
```


Type      size_in_bytes  
-----------------------------------
short   -   2
int       -   4
long    -   8 