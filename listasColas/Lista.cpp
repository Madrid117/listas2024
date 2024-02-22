#include <iostream>
using std::cout;
using std::endl;

#include "Lista.hpp"

Lista::Lista(int data){
	Nodo* nuevoNodo = new Nodo(data);  
	head = nuevoNodo;
	cola= nuevoNodo; 
}

void Lista::mostrarLista(){


	Nodo *iter = head;

	while (iter != NULL)
	{
		cout<<iter->key<<endl;
		iter =  iter->next;
		
	}
	
}

void Lista::push_front(int data)
{
    Nodo *nuevoNodo = new Nodo(data); 
	nuevoNodo->next = this->head; 
    this->head=nuevoNodo;
}

void Lista::push_back(int data){
	 Nodo *nuevoNodo = new Nodo(data);
	 Nodo *iter = head;
	 
     
	while (iter->next != NULL)
	{           
		iter =  iter->next;
	}  
	 cola=nuevoNodo;    
	 iter->next=nuevoNodo;
	 
}

void Lista::pop_back(){
 	Nodo *iter = head;
 	
	while (iter->next->next != NULL)
	{
		iter =  iter->next;
		
	}
	this->cola=iter;
	iter->next=NULL;
}






