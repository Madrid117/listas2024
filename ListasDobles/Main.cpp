#include <iostream>
#include "Lista.hpp"

using namespace::std;

int main(){
	cout<<"----------------"<<endl; 
	cout<<"Creando Lista"<<endl;
	cout<<"----------------"<<endl;
	Lista l(2);  //Llamada al constructor de lista
	
    
	l.push_front(34);
	l.pop_front();
	l.push_front(12);
	l.push_front(4);
	l.push_back(5);
	l.mostrarLista();
	
	return 0;
}
