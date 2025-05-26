- Los caracteres se declaran de la siguiente forma 
```c++
   char caracter {'d'};
```

- Los caracteres deben seguir las sig reglas:
  1. Los caracteres solo almacenan un caracter
  2. El cataracter debe estar entre comillas simples 
  3. Se admiten los carecteres de al ASCII 256
  4. Si un caracter almacena un numbero se representa como su caracter en ascii
```c++
   char caracter = 65;  //A
   static_cast<int>(caracter); // Da salida 65 porque combierte de char a int
   
```