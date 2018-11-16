#include "Cancion.h"
#include "Artista.h"
#include "Playlist.h"
#include "Radio.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	cout<<"Bienvenido al ESPOTIFAI"<<endl;
	int valueE=1;
	vector <Artista*> artistas;
	vector <Cancion*> canciones;
	vector <Radio*> radios;
	vector <Playlist*> playlists;
	while(valueE==1){
		cout<<"1/Agregar"<<endl;
		cout<<"2/Mostrar y Agregar al playlist"<<endl;
		cout<<"3/Radio"<<endl;
		cout<<"4/EXIT"<<endl;
		int selection;
		cout<<"Ingrese su seleccion: "<<endl;
		cin>>selection;
		while(selection<0 || selection>4){
			cout<<"Fuera de rango, ingrese de nuevo el valor: "<<endl;
			cin>>selection;
		}
		switch(selection){

			case 1:
				{
					int selection1;
					cout<<"1/ Crear Artista"<<endl;
					cout<<"2/ Crear Playlist"<<endl;
					cout<<"3/ Crear Cancion"<<endl;
					cout<<"4/ Crear Radio"<<endl;
					cout<<endl;
					cout<<"Ingrese su selection: "<<endl;
					cin>>selection1;
					while(selection<0 || selection>4){
						cout<<"Fuera de rango, ingrese de nuevo el valor: "<<endl;
						cin>>selection;
					}
					if (selection1==1){
						string nombre;
						cout<<"Ingrese el nombre del artista: "<<endl;
						cin>>nombre;
						artistas.push_back(new Artista(nombre,0));
						cout<<"Data was saved successfully"<<endl;
						cout<<endl;
					}

					if (selection1==2){
						cout<<endl;
						string nombreP;
						cout<<"Ingrese el nombre de la playlist: "<<endl;
						cin>>nombreP;

						string descripcion;
						cout<<"Ingrese una descripcion para la playlist: "<<endl;
						cin>>descripcion;

						playlists.push_back(new Playlist(nombreP, descripcion));
					}

					if(selection1==3){
						string genero;
						string titulo;
						double duracion;
						cout<<"Ingrese el genero de la cancion: "<<endl;
						cin>>genero;
						cout<<"Ingrese el titulo: "<<endl;
						cin>>titulo;
						cout<<"Ingrese la duracion de la cancion: "<<endl;
						cin>>duracion;
						canciones.push_back(new Cancion(titulo,genero, duracion, 0 ));
						for (int i = 0; i < artistas.size(); i++){
							cout<<" "<<i<<"-"<< artistas.at(i)->getNombreA()<<" "<<endl;
						}
						cout<<"Ingrese el numero del artista donde agregara la cancion: "<<endl;
						int pos;
						cin>>pos;
						if(pos<0 || pos>artistas.size()){
							cout<<"No se ha encontrado un numero registrado"<<endl;
						}else{
							artistas[pos]->addCanciones(new Cancion(titulo, genero, duracion, 0));
							cout<<"Cancion agregada"<<endl;
						}

					}
					if (selection1==4){
						string nombre;
						string genero;
						cout<<"Ingrese un nombre para la radio: "<<endl;
						cin>>nombre;
						cout<<"Ingrese el genero: "<<endl;
						cin>>genero;
						radios.push_back(new Radio(nombre, genero));
						for (int i = 0; i < canciones.size(); i++){
							if (canciones[i]->getGenero()==genero){
								radios[radios.size()-1]->addCancionR(canciones[i]);
							}
						}
					}

				}
				break;
				//FIn case 1

			case 2:
			{
				cout<<"1/ Agregar al playlist"<<endl;
				cout<<"2/ "<<endl;
				cout<<"3/ "<<endl;
				int selection2;
				cout<<"Ingrese su seleccion: "<<endl;
				while(selection2<0 || selection2>3){
						cout<<"Fuera de rango, ingrese de nuevo el valor: "<<endl;
						cin>>selection;
				}
				if (selection2==1){
					for (int i = 0; i < canciones.size(); i++){
							cout<<" "<<i<<"-"<< canciones.at(i)->getTitulo()<<" "<<endl;
					}
					for (int i = 0; i < playlists.size(); i++){
							cout<<" "<<i<<"-"<< playlists.at(i)->getName()<<" "<<endl;
					}
					int numerocancion;
					cout<<"Ingrese el numero de la cancion a seleccionar: "<<endl;
					cin>>numerocancion;
					bool validador=true;
					if(numerocancion<0 || numerocancion>canciones.size()){
						cout<<"No existe tal numero"<<endl;
						validador=false;
					}
					if (validador==true){
						
						for (int i = 0; i < playlists.size(); i++){
							cout<<" "<<i<<"-"<< playlists.at(i)->getName()<<" "<<endl;
						}
						cout<<"Ingrese un numero para asignar la cancion al numero de la playlist: "<<endl;
						int numeroplaylist;
						bool validador2=true;
						cin>>numeroplaylist;
						if (numeroplaylist<0 || numeroplaylist>playlists.size())
						{
							cout<<"out of bounds"<<endl;
							validador2=false;
						}
						if (validador==true && validador2==true)
						{
							playlists[numeroplaylist]->addCancion(canciones[numerocancion]);
						}



					}
				}


			}
			break;

			case 3:
				{

				}
				break;

			case 4:
				{
					if(artistas.empty()||canciones.empty()||playlists.empty()||radios.empty()){
						valueE=-2000;
					}else{
						for (int i = 0; i < canciones.size(); i++){
							delete canciones[i];
							canciones[i]=NULL;
						}

						for(int i = 0; i<artistas.size();i++){
							delete artistas[i];
							artistas[i]=NULL;
						}

						for(int i = 0; i< playlists.size();i++){
							delete playlists[i];
							playlists[i]=NULL;
						}

						for(int i = 0; i< radios.size();i++){
							delete radios[i];
							radios[i]=NULL;
						}

						valueE=-1000;
					}

				}
				break;


		}

	}//Fin While Principal
	return 0;
}