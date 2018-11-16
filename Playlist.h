#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Cancion.h"

#include <vector>;
using std::vector;

#include <string>
using std::string;

class Playlist{
	private:
		string name;
		string descripzione;
		vector<Cancion*> lista;
	public:
		Playlist();
		Playlist(string, string);
		string getName();
		void setName(string);
		string getDescripzione();
		void setDescripzione(string);
		vector <Cancion*> getLista();
		void setLista(vector <Cancion*>);
		void addCancion(Cancion);
		~Playlist();

	
};
#endif