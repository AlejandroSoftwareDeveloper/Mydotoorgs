- Los ficheros son archivos de almacenamiento de infomacion usados para no cargar 
  la memoria con informacion innesesaria.
- Existen 2 tipo de ficheros a operar los de texto y los binarios.
- Para abrir un fichero se utilizan varias funciones como fopen() de la biblioteca estandar <stdio.h>
- La funcion esta compuestas de la siguiente forma:

```c
#include <stdio.h>

FILE *fopen(const char *restrict name,const char*restrict mode);
//name representa el nombre del archivo a abrir implicando la ruta de este 
//mode representa el modo de apertura al archivo a abrir siendo.
//Ejemplo de apertura de archivo
FILE * file = fopen("C:\\ruta\\del\\archivo\\nombre_del_archivo.extension","r");
//Si el archivo no existe o esta corrupto y no se puede abrir, fopen retornara NULL, siendo nesesario verificar si se abrio este.
if(!file){
    printf("El archivo no se pudo abrir.");
}


``` 

- Exiten varios modos de apertura para archivos de texto 
```c
//Los siguientes modos son para ficheros de texto
//Modos
//"w" -- Abre el fichero para funciones de escritura. Si el fichero existe, borra el contenido del mismo.
//"a" -- Abre el fichero para funciones de adicion. Todas las escrituras se hacen al final del fichero.
//"r" -- Abre el fichero para funciones de lectura.
//"w+" -- Abre el fichero para funciones de actualización. Primero trunca la longitud del fichero a 0. Si el fichero existe, crea uno sino existe. 
//"a+" -- Abre el fichero para funciones de actualización. Adiciona al final del fichero si el fichero existe, crea uno sino existe. 
//"r+" -- Abre el fichero para funciones de escritura y lectura.

FILE * file = fopen("C:\\ruta\\del\\archivo\\nombre_del_archivo.txt",modo);

```

- Ejemplo de apertura de fichero
```c

    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename,"w");
    if(pfile == NULL){ //Esto es = a !pfile
        printf("Failed to open %s\n",filename);
    }else{
        printf("File %s opened\n",filename);
    }
```

- Una vez el fichero abierto debe cerrarse para evitar fugas de memoria ya que la funcion fopen() devuelve un puntero creado dinamicamente
- El fichero se cierra con la funcion fclose() la cual acepta un puntero como argumento
- Si falla retorna End of File (EOF) o (int)
- Si cierra correctamente retorna 0
- Se recomienda cerrar el fichero para evitar la perdida de datos
```c
    //Siguiendo con el ejemplo anterior 
    fclose(pfile);
    pfile = NULL;

```

- Para borrar un fichero se usa la funcion remove()
- Se debe comprobar las operaciones con ficheros que se van a borrar y chequer que el fichero esta cerrado.
```c

remove("myfile.txt");

```


- Se puede renombrar un archivo con la funcion rename()
- La funcion retornara 0 si se cambio el nombre correctamente, no zero si no se cambio el nombre
- OJO Si el fichero esta abierto la funcion fallara.

```c
int rename(const char *oldname,const char *newname);

if(rename("C:\\temp\\myfile.txt","C:\\temp\\myfile_copy.txt"))
    printf("Failed to rename the file");

printf("File to rename the successfully.");
```

