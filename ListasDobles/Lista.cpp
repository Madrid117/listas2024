#include <iostream>
using std::cout;
using std::endl;

#include "Lista.hpp"

Lista::Lista(int data){    // constructor sobrecargado
	Nodo* nuevoNodo = new Nodo(data);  
	head = nuevoNodo;
	tail=nuevoNodo; 
}

void Lista::mostrarLista(){ // imprimir listas
	Nodo *iter = head;

	while (iter != NULL)
	{
		cout<<iter->key<<endl;
		iter =  iter->next;
		
	}
}

void Lista::push_front(int data){ // funcion para meter un nuevo a la lista
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
    
void Lista::push_back(int data)
    {
    	Nodo *nuevoNodo = new Nodo(data); 
    	if (head  == NULL ) {
		
            // Si la lista está vacía, el nuevo nodo es la cabeza
            head = nuevoNodo;
            tail= nuevoNodo; 
        } else{
            nuevoNodo->prev=tail;
            this->tail->next=nuevoNodo; 
            tail=nuevoNodo; 
	       }
		}
		
void Lista::pop_front(){
	if(head==NULL){
		cout<<"la lista esta vacia"<<endl; 
	}
	else{
		
		Nodo* destructor = head;
        head = head->next;

        if (head != NULL)
		 {
            head->prev = NULL;
        }
        delete destructor;
		 
	}
	}
	

	
    
    
	
	








