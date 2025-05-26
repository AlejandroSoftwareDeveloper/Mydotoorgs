- Los fraccionarios se declaran con la palabra reservada float, double y long double

```c++ 
	float number1       { 1.2345678901234567890f }; 
	double number2      { 1.2345678901234567890  };
	long double number3 { 1.2345678901234567890L };
	
	double number4 { 192400023 };
	double number5 { 192400023e8 };   //Elevado a la potencia 10 exp(8)
	double number6 { 1924e8 };        //Se puede omitir 00023
	double number7 { 0.000003498 };   //Se puede omitir 00023
	double number8 { 3.498e-11 };     //Se multiplica 10 por exp(-11)
	 
```
-  Los float admiten hasta 7 digitos antes de la coma ej 123456789.09f  dara error de conversion ya que el elemento float solo admite hasta 7 elementos antes de la coma en lo adelante dara un valor errado despues del septimo 