# El Completely Fair Scheduler (CFS)
Es un algoritmo de programación de procesos utilizado en el kernel de Linux para asignar tiempo de CPU a los procesos en ejecución. Fue introducido en la versión 2.6.23 del kernel de Linux y se basa en el concepto de justicia para garantizar una distribución equitativa del tiempo de CPU entre los procesos.
## Características principales y el funcionamiento del CFS

### Justicia: 
El objetivo principal del CFS es garantizar la justicia en la asignación de tiempo de CPU entre los procesos. Esto significa que cada proceso debería recibir una parte equitativa del tiempo de CPU disponible, independientemente de su prioridad o tamaño.

### Modelo de programación basado en tiempo de ejecución
En lugar de utilizar prioridades estáticas como en el algoritmo de programación anterior (O(1) Scheduler), el CFS utiliza un modelo de programación basado en el tiempo de ejecución. Cada proceso está asociado con un valor de tiempo de ejecución, que representa la cantidad de tiempo de CPU que ha consumido hasta el momento. Este valor se utiliza para determinar la prioridad dinámica del proceso.


### Balance de carga: 
El CFS realiza un seguimiento de la carga del sistema y busca distribuir equitativamente la carga de trabajo entre los núcleos de CPU disponibles. Esto significa que los procesos se ejecutan de manera equitativa en todos los núcleos de la CPU, lo que mejora la eficiencia del sistema.

###No hay prioridades fijas: 
A diferencia de algunos otros algoritmos de programación, como el algoritmo de programación en lotes (Batch Scheduler) que asigna prioridades fijas a los procesos, el CFS no tiene prioridades fijas. En su lugar, utiliza la cantidad de tiempo de CPU consumido para calcular dinámicamente la prioridad de cada proceso.

### Interactividad: 
El CFS está diseñado para ser sensible y dar prioridad a los procesos interactivos. Logra esto utilizando un mecanismo de medición de tiempo de ejecución y ajustando la prioridad de los procesos en función de su comportamiento interactivo.

