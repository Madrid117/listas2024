#include <iostream>
#include "Lista.hpp"

using namespace::std;

int main(){
	cout<<"----------------"<<endl;
	cout<<"Creando Lista"<<endl;
	cout<<"----------------"<<endl;
	Lista l(2);  //Llamada al constructor de lista
	
    
	l.push_front(5);
	l.pop_front();
	l.push_front(34);
	l.push_front(23);
	l.push_front(12);
	l.pop_back();
	
	l.mostrarLista();
	
	return 0;
}
