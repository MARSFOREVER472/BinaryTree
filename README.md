# BinaryTree

## What is a tree?

**_A tree is a non-linear data structure since each element points to one or more elements of the same type; This is given an element, there is no single path to follow. The element that points to another is called the parent, while the pointed element is known as the child. All elements have a parent except the root. It can be said that a tree is made up of subtrees, thus highlighting its recursive nature._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/d773eb2a-7552-46de-ac2f-db4ee0c7c007)

**_But..._**

## What is a Binary Tree?

**_A binary tree is one in which each element points to at most 2 other elements, commonly called left child and right child._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/23546c2c-2dbe-450f-adad-bce138380131)

## What is a binary search tree?

**_A binary search tree or ABB, is a binary tree in which for every element, the elements larger than it are located in its right branch, while the smaller elements go in its left branch. Each element is stored only once so there are no repeated elements._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/8455f336-0c37-4f81-b05e-a3a3a0dbc5a0)

**_With these right definitions about trees, now these are general concepts of what a tree is, in order to implement them in the C++ language we have to have prior knowledge about linked lists and their implementation._**

**_Each element (node) of an ABB tree has three fields:_**

- **_Data (number, letter, word, etc.), in this case we will use a number (integer)._**

- **_Pointer to the right node._**

- **_Pointer to the left node._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/4b480752-5f1c-4004-8084-895653c94047)

**_The pointers have to be of the tree type, since they will point to a node of the same type, this would be an example of what the ABB tree type would be like._**

_First we create the node:_

**_Traducido del español:_**

## ¿Qué es un árbol?

**_Un árbol es una estructura de datos no lineal puesto que cada elemento apunta a uno o varios elementos del mismo tipo; esto es dado un elemento, no hay un único camino a seguir. El elemento que apunta a otro es llamado padre, mientras que el elemento apuntado se conoce como hijo. Todos los elementos tienen un padre a excepción de la raíz. Puede decirse que un árbol esta formado por subárboles resaltando así su naturaleza recursiva._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/d773eb2a-7552-46de-ac2f-db4ee0c7c007)

**_Pero..._**

## ¿Qué es un árbol binario?

**_Un árbol binario es aquel es el que cada elemento apunta como máximo a otros 2 elementos, comúnmente llamados hijo izquierdo e hijo derecho._**

![image](https://github.com/MARSFOREVER472/BinaryTree/assets/69094327/23546c2c-2dbe-450f-adad-bce138380131)

## ¿Qué es un árbol binario de búsqueda?

**_Un árbol binario de búsqueda o ABB, es un árbol binario en el cual para todo elemento, los elementos mayores a él, se ubican en su rama derecha, mientras que los elementos menores van en su rama izquierda. Cada elemento se almacena una sola vez por lo que no existen elementos repetidos._**

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

**_Es la manera recursiva como pasaremos por cada nodo del árbol, existen tres formas para recorrerlo:_**

- **_En-orden: Si visitamos primero hijo izquierdo, luego el padre y finalmente el hijo derecho._**
- **_Pre-orden: Primero el padre, luego el hijo izquierdo y finalmente el hijo derecho._**
- **_Post-orden: Primero hijo izquierdo, luego el hijo derecho y finalmente el padre._**

**_Existen muchos conceptos sobre árboles ABB por ejemplo, recorridos por nivel, profundidad de un árbol, etc._**
