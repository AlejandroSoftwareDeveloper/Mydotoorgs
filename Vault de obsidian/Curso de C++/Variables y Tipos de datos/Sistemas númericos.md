Hay tres sistemas numéricos conocidos 
1. Binario       
2. Octal 
3. Hexadecimal
4. Decimal

- El sistema *binario* solo se usan el 1 y el 0, que es la minima expresion de almacenamiento y lectura en el sistema
  ```c++
100101   // 1 * 2^5 + 0 * 2^4 + 0 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0 = 37 
```

- El sistema *octal*  se usan los valores del 0 al 8 para almacenamiento y lectura en el sistema, se toman los digitos binarios de 3 entre
- El sistema *hexadecimal* se cuentan con 16 valores que van  desde el 0 al 9 y a partir del 10 hasta el 15 se cuentan con las letras de la A a la F, se dividen los grupos de 1 bit en cuatro ej:
   0110 1101 = 0x 6D
## Relleno
- Cuando un numero se convierte de decimal, hexa, u octal a binario puede quedar espacios a la izquierda conocidos como bits menos significativos, por lo que se rellena con ceros ej:
   110 1101 es 0x6D pero el sistema le pone un cero al final para hacer el conteo mas facil
   0110 1101 ahora si es 0x6D 

## Generalizacion 

Digitos          Rango
1                    0 ~ 1
2                    0 ~ 3
3                    0 ~ 7
n                    0  ~ 2^(n -1) 


## Representacion en bits

Digitos         Bits        Rango
8                    1          0  ~ 255
16                  2          0  ~  65,535
32                  3          0  ~  34,359,738,367
64                  4          0  ~  18,466,744,073,709,551,615

## Representacion en codigo

```c++ 
 int decimal = 15;         //Decimal
 int octal   = 017;        //Octal se debe poner un cero delante del decimal
 int hex     = 0x0f;       //Hexadecimal 
 int binario = 0b00001111; //Binario en c++14
 ```







