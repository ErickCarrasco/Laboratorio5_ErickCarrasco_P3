#include "Radio.h"
#include "Cancion.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Radio::Radio(){
	nombreR="No name";
	generoR="No data";
}
Radio::~Radio(){
	cout<<"data deleted"<<endl;
}
Radio::Radio(string nombreR, string generoR){
	this->nombreR=nombreR;
	this->generoR=generoR;
}

string Radio::getNombreR(){
	return nombreR;
}

void Radio::setNombreR(string nombreR){
	this->nombreR=nombreR;
}

string Radio::getGeneroR(){
	return generoR;
}

void Radio::setGeneroR(string generoR){
	this->generoR=generoR;
}

vector <Cancion*> Radio::getListaR(){
	return listaR;
}

void Radio::setListaR(vector <Cancion*> listaR){
	this->listaR=listaR;
}

void Radio::addCancionR(Cancion* e){
	listaR.push_back(e);
}