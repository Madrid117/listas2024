#include "Nodo.hpp"

class Lista{
	public: 
	    Lista();
		Lista(int ); //constructor
		void mostrarLista();
		void push_front(const int ); // Añadir por enfrente.
		void push_back( const int); 

        void pop_front();
		void pop_back(); 
		
	private: 
		Nodo *head; 	
    
	
};


