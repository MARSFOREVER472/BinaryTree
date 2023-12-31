# BinaryTree

## ¿Qué es un árbol?


Un árbol es una estructura de datos no lineal puesto que cada elemento apunta a uno o varios elementos del mismo tipo; esto es dado un elemento, no hay un único camino a seguir. El elemento que apunta a otro es llamado padre, mientras que el elemento apuntado se conoce como hijo. Todos los elementos tienen un padre a excepción de la raíz. Puede decirse que un árbol esta formado por subárboles resaltando así su naturaleza recursiva.

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/d773eb2a-7552-46de-ac2f-db4ee0c7c007)

Pero...

## ¿Qué es un árbol binario?

Un árbol binario es aquel es el que cada elemento apunta como máximo a otros 2 elementos, comúnmente llamados hijo izquierdo e hijo derecho.

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/23546c2c-2dbe-450f-adad-bce138380131)

## ¿Qué es un árbol binario de búsqueda?

Un árbol binario de buque da o ABB, es un árbol binario en el cual para todo elemento, los elementos mayores a él, se ubican en su rama derecha, mientras que los elementos menores van en su rama izquierda. Cada elemento se almacena una sola vez por lo que no existen elementos repetidos.

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/8455f336-0c37-4f81-b05e-a3a3a0dbc5a0)

Ya con estas definiciones claras sobre arboles, ahora estos son conceptos generales de lo que es un árbol, para poder implementarlos en lenguaje C++ tenemos que tener conocimientos previos sobre listas enlazadas y su implementación.

Cada elemento(nodo) de un árbol ABB cuenta con tres campos:

- Dato(numero, letra, palabra, etc), en este caso usaremos un numero(entero).
  
- Puntero al nodo derecho.
 
- Puntero al nodo izquierdo.

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/6622f6bc-7213-489c-91c4-02e309179d6a)

Los punteros tienen que ser del tipo árbol, ya que apuntaran a un nodo del mismo tipo, este seria un ejemplo de como se seria el tipo arbol ABB.

Primero creamos el nodo:

   ```
   struct nodo{
   
   int dato;
   
   struct nodo *der;
   
   struct nodo *izq;
   
};
```
Los punteros son variables que guardaran en la memoria la dirección de otra variable en este caso la de una estructura llamado nodo.

## Recorridos de un árbol

Es la manera recursiva como pasaremos por cada nodo del árbol, existes tres formas:

- En-orden: Si visitamos primero hijo izquierdo, luego el padre y finalmente el hijo derecho.
- Pre-orden: Primero el padre, luego el hijo izquierdo y finalmente el hijo derecho.
- Post-orden: Primero hijo izquierdo, luego el hijo derecho y finalmente el padre.

Existen muchos conceptos sobre árboles ABB por ejemplo, recorridos por nivel, profundidad de un árbol, etc.
