#include "Cjt_Idiomes.hh"


//Constructores

	Cjt_Idiomes::Cjt_Idiomes(){
	}


//Consultores

	bool Cjt_Idiomes::existeix_idioma(string nom_idioma){

		map <string, Idioma>::iterator it = conjunt.find(nom_idioma); //ben declarat?
		if (it!=conjunt.end()) return true;
		else return false;
	}

	Idioma Cjt_Idiomes::consultar_idioma(string nom_idioma){

		map <string, Idioma>::iterator it = conjunt.find(nom_idioma);
		
		Idioma aux;
		aux = (*it).second;
		return aux;
	}

	int Cjt_Idiomes::mida_conjunt(){

		int mida = conjunt.size();
		return mida;
	}


//Modificadores

	void Cjt_Idiomes::op_afegir_modificar(){


	}

	void Cjt_Idiomes::op_codifica(){

		
	}

	void Cjt_Idiomes::op_decodifica(){

		
	}



//Entrada / Sortida

	void Cjt_Idiomes::llegir_conjunt(){
		
		int n; //mida del conjunt
		cin>>n;

		for (int i=0;i<n;i++){

			string nom;
			cin>>nom;

			Idioma id;
			id.llegir_idioma();


			conjunt.insert(make_pair(nom,id));
		}
	}

	void Cjt_Idiomes::op_tabla_frec(){ //imprimeix la taula de frequencies d'un idioma que li passem
		string aux;
		cin>>aux;

		if(conjunt.existeix_idioma(aux)){
			conjunt.consultar_idioma(aux).consultar_taula_frequencies().escriure_taula_frequencies();
		}

		else cout<<"El idioma "<<aux<<" no existe"<<endl;
	}

	void Cjt_Idiomes::op_treecode(){ //imprimeix l'arbre d'un idioma que li passem
		string aux;
		cin>>aux;
		conjunt.consultar_idioma(aux).consultar_treecode().consultar_arbre().escriure_arbre();
	}

	void Cjt_Idiomes::op_codigos(){ 
		string i,c;
		cin>>i;
		cin>>c;

		if (c=="todos"){ //imprimeix tota la taula de codis d'un idioma que li passem
			conjunt.consultar_idioma(i).consultar_treecode().consultar_taula_codis().escriure_taula_codis();
		}

		else { //imprimeix un caracter amb el seu codi pertanyent a l'idioma que li passem
			conjunt.consultar_idioma(i).consultar_treecode().consultar_taula_codis().escriure_codi(c);
		}
	}

