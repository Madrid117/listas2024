#include <iostream>
using std::cout;
using std::endl;

#include "Lista.hpp"

Lista::Lista(int data){
	Nodo* nuevoNodo = new Nodo(data);  
	head = nuevoNodo;
	tail=nuevoNodo; 
}

void Lista::mostrarLista(){
	Nodo *iter = head;

	while (iter != NULL)
	{
		cout<<iter->key<<endl;
		iter =  iter->next;
		
	}
}

void Lista::push_front(int data){
	Nodo* nuevoNodo = new Nodo(data);
	if (head  == NULL ) {
		
            // Si la lista está vacía, el nuevo nodo es la cabeza
            head = nuevoNodo;
            tail= nuevoNodo; 
        } else {
            // Si la lista no está vacía, ajustamos los punteros
            nuevoNodo->next = head;
            head->prev = nuevoNodo;
            head = nuevoNodo;
            
        }     
    }
	
	








