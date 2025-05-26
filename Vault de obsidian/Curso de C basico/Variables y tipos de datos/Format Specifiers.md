- Los especificadores de formato sirven para dar formato de salida a las variables que se pasan a funciones como printf.

```c 
	int edad = 30;
	scanf("Inserte su edad aqui %d",&edad);
	// Este es un ejemplo de captura de datos de pantalla en C
	/*
	    Los parametros siguientes se usan para capturar los diferentes 
	    formatos en C:
	    
		Tipo de dato     Especificacion de       Especificacion de
        				     conversion de printf    conversion de scanf
        				
			char              %c                      %c
			_Bool             %i %u                   %i %u
			int               %d                      %d
			string            %s                      %s
		  float             %f %e %g %a             %f
	    double            %f %e %g %a             %lf 
		  long double       %Lf $Le %Lg             %Lf
	    long int          %ld %lx %li %lo         %ld
			short             %hd                     %hd  
			int--bool         %i
			short int         %hi %hx %ho               
			pointers			  	%u %p
   unsigned short int         %hu %hx %ho               		
   unsigned long int          %lu %lx %lo       %lu
   unsigned int               %u %x %o          %u
   long long int              %lli %llx %llo    %lu
   unsigned long long int     %llu %llx %llo    %lu
   sizeof(dato primitivo)     %u
		size_t                    %zu               %zu
		//Para saber la longitud con strlen()
	 */
```

- Los especificadores de formato permite adicionarles un ancho al formato del valor ej:
- Los valores se redondean por el compilador.

```c
	float value = 3.999230;
	int val     = 4;
	printf("%.2f",value);   //Este caso imprime hasta 3.99 osea dos
							 //valores despues de la coma
	printf("%.5f",value);   //Aqui se imprime hasta 5 valores despues
							 //de la coma (3.99923).    
	printf("Hola %4d",val); //Aqui se muestra valores de tipo decimal
							 // con 4 espacios despues de Hola ya que el valor
							 // despues de % dice la cantidad de espacios posterior
							 // a la cadena previa
```