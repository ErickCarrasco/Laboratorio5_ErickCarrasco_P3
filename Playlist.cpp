#include "Playlist.h"
#include "Cancion.h"

#include <vector>;
using std::vector;

#include <string>
using std::string;

Playlist::Playlist(){
	name="playlist";
	descripzione="Empty";
}

Playlist::~Playlist(){
	cout<<"Data expunged"<<endl;
}

Playlist::Playlist(string Name, string Descripzione){
	this->name=Name;
	this->descripzione=Descripzione;
}

string Playlist::getName(){
	return name;
}

void Playlist::setName(string name){
	this->name=name;
}

string Playlist::getDescripzione(){
	return descripzione;
}

void Playlist::setDescripzione(string descripzione){
	this->descripzione=descripzione;
}

vector <Cancion*> Playlist::getLista(){
	return lista;
}

void Playlist::setLista(vector <Cancion*>){
	this->lista=lista;
}

void addCancion(Cancion e){
	lista.push_back(e);
}

