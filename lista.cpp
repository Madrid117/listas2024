#include <iostream>
using std::cout;
using std::endl;

#include "Lista.hpp"

Lista::Lista(int data){
	Nodo* nuevoNodo = new Nodo(data);  
	head = nuevoNodo; 
}

Lista::Lista(){
	this->head=0;
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
	Nodo *nuevoNodo = new Nodo(data); 
	
	if(head==NULL){
		head=nuevoNodo; 
	}
	     else
	     
	{
		nuevoNodo->next = this->head; 
	this->head = nuevoNodo;
	}

	
	
}

void Lista::push_back(int data){
	
	Nodo *nuevoNodo= new Nodo(data);

	
if (head != NULL) {
	Nodo *iter = head;
	while (iter->next != NULL)
	{
		iter =  iter->next;
		
	}
	 
	 iter->next=nuevoNodo;
}
else{
	head=nuevoNodo;
}
}
	

void Lista::pop_back(){
	
	if(head!=NULL)
 	{
 		Nodo *iter = head;


	while (iter->next->next != NULL)
	{
		iter =  iter->next;
		
	}
	 
	 iter->next=NULL;
	 }
	 else {
	 	cout<<"la lista esta vacia"<<endl;
	 }
	 
}	

void Lista::pop_front(){
    if (head==NULL){
    	cout<<"la lista esta vacia"<<endl;
	}
	else {
		Nodo *destructor;
		destructor=head;
		head=head->next;
		delete destructor;
		 
	}
	
//hola	
	
}




