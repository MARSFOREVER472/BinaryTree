# BinaryTree

## ¿Qué es un árbol?


**_Un árbol es una estructura de datos no lineal puesto que cada elemento apunta a uno o varios elementos del mismo tipo; esto es dado un elemento, no hay un único camino a seguir. El elemento que apunta a otro es llamado padre, mientras que el elemento apuntado se conoce como hijo. Todos los elementos tienen un padre a excepción de la raíz. Puede decirse que un árbol esta formado por subárboles resaltando así su naturaleza recursiva._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/d773eb2a-7552-46de-ac2f-db4ee0c7c007)

**_Pero..._**

## ¿Qué es un árbol binario?

**_Un árbol binario es aquel es el que cada elemento apunta como máximo a otros 2 elementos, comúnmente llamados hijo izquierdo e hijo derecho._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/23546c2c-2dbe-450f-adad-bce138380131)

## ¿Qué es un árbol binario de búsqueda?

**_Un árbol binario de buque da o ABB, es un árbol binario en el cual para todo elemento, los elementos mayores a él, se ubican en su rama derecha, mientras que los elementos menores van en su rama izquierda. Cada elemento se almacena una sola vez por lo que no existen elementos repetidos._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/8455f336-0c37-4f81-b05e-a3a3a0dbc5a0)

**_Ya con estas definiciones claras sobre arboles, ahora estos son conceptos generales de lo que es un árbol, para poder implementarlos en lenguaje C++ tenemos que tener conocimientos previos sobre listas enlazadas y su implementación._**

**_Cada elemento(nodo) de un árbol ABB cuenta con tres campos:_**

- **_Dato(numero, letra, palabra, etc), en este caso usaremos un numero(entero)._**
  
- **_Puntero al nodo derecho._**
 
- **_Puntero al nodo izquierdo._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/6622f6bc-7213-489c-91c4-02e309179d6a)

**_Los punteros tienen que ser del tipo árbol, ya que apuntaran a un nodo del mismo tipo, este seria un ejemplo de como se seria el tipo arbol ABB._**

**_Primero creamos el nodo:_**

   ```
   struct nodo{
   
   int dato;
   
   struct nodo *der;
   
   struct nodo *izq;
   
};
```
**_Los punteros son variables que guardaran en la memoria la dirección de otra variable en este caso la de una estructura llamado nodo._**

## Recorridos de un árbol

_Es la manera recursiva como pasaremos por cada nodo del árbol, existen tres formas para recorrerlo:_

- _En-orden: Si visitamos primero hijo izquierdo, luego el padre y finalmente el hijo derecho._
- _Pre-orden: Primero el padre, luego el hijo izquierdo y finalmente el hijo derecho._
- _Post-orden: Primero hijo izquierdo, luego el hijo derecho y finalmente el padre._

_Existen muchos conceptos sobre árboles ABB por ejemplo, recorridos por nivel, profundidad de un árbol, etc._
