#include <iostream>
#include "Lista.hpp"

using namespace::std;

int main(){
	cout<<"----------------"<<endl;
	cout<<"Creando Lista"<<endl;
	cout<<"----------------"<<endl;
	Lista l(2);  //Llamada al constructor de lista
	l.push_back(3);
	l.push_front(4);
	l.push_front(45);
	l.push_front(31);
	l.pop_back();
	l.mostrarLista();
	
	return 0;
}
