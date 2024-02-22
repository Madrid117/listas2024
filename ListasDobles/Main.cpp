#include <iostream>
#include "Lista.hpp"

using namespace::std;

int main(){
	cout<<"----------------"<<endl;
	cout<<"Creando Lista"<<endl;
	cout<<"----------------"<<endl;
	Lista l(2);  //Llamada al constructor de lista
	
    
	
	l.push_front(34);
	
	l.mostrarLista();
	
	return 0;
}
