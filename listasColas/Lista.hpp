#include "Nodo.hpp"

class Lista{
	public: 
		Lista(int ); //constructor
		void mostrarLista();
		void push_front(const int ); // Añadir por enfrente.
		void push_back( const int); 

		void pop_back(); 
		
	private: 
		Nodo *head; 
		Nodo *cola;	
    
	
};
