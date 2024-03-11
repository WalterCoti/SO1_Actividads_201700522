a)¿Cuántos procesos únicos son creados?
Se crean 7 procesos únicos en total:
1 proceso padre: Es el proceso original que ejecuta el código.
3 procesos hijos: Se crean tres procesos hijos a partir del proceso padre con la llamada fork().
3 procesos nietos: Cada uno de los tres procesos hijos crea un proceso nieto con la llamada fork().

b)¿Cuántos hilos únicos son creados?
  Se crea 1 hilo único en uno de los procesos hijos.
