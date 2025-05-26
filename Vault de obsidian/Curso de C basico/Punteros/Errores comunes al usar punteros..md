- Los punteros en c tiene un inconveniente que es el manejo de la informacion asignada. Un ejemplo es la asignacion de valores a un puntero que no tiene asignado una direccion de memoria de otra variable.
```c
int *pnumber;  //Puntero inicializado
*pnumber = 5;  //Asignacion de valores a un puntero no inicializado
```

- El ejemplo anterior puede no ser dañino, pero al almacenar el valor 5 se podria guardar en cualquier parte, por lo que podria sobreescribir la una direccion de memoria determinada alterando el valor y creando efectos secundarios.
- Al crear un puntero solo se asigna memoria para guardar la informacion del mismo, por lo si se desea usar se debe asignar direccion de otros valores del mismo tipo o inicializar espacios de memorias con malloc() y posterior eliminarla usando free() para evitar la fuga de memoria.