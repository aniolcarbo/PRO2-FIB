#include "TreeCode.hh"

//Constructores

	TreeCode::TreeCode(){
	}


//Consultores

	BinTree<Caracter> TreeCode::consultar_arbre(){
		BinTree<Caracter> aux;
		aux = arbre;
		return aux;
	}

	int TreeCode::mida_taula_codis(){
		int mida;
		mida = TaulaCodis.size();
		return mida;
	}

	void TreeCode::consultar_codi(string c){
		map<string, string>::const_iterator it = TaulaCodis.find(c);

		if (it!=TaulaCodis.end()){
			string aux = (*it).second;
			cout<<c<<aux<<endl;
		}

		else cout<<"El caracter"<<c<<" no esta a la taula"<<endl;
	}



//Modificadores

	void TreeCode::generar_arbre(TaulaFrequencies taulaf){

		set<BinTree <Caracter>,ordenacio> nodes;

		//omplim el set amb bintrees
		for (map <string, int>::const_iterator it = tf.begin(); it!=tf.end(); it++){
			//com transformem cada pair a bintree?
			BinTree<Caracter> aux;
			aux.identificador = (*it).first; //no es pot fer, sa de consultar valor del node i despres fer valor.identificador
			aux.frequencia = (*it).second;
			nodes.insert(aux);
		}

		//creem el bintree (format pels bintrees del set)
		while(nodes.size()>1){
			string id_aux = (*it2).identificador + (*it2++).identificador;
			int fq_aux = (*it2).frequencia + (*it2++).frequencia;

			BinTree <Caracter> n;
			n.identificador = id_aux;
			n.frequencia = fq_aux;

			BinTree<Caracter> b (n,(*it2),(*it2++));
			nodes.insert(b);

			nodes.erase(it2);
			nodes.erase(it2);
		}		

	}

	static bool ordenacio(const Caracter& a, const Caracter& b){

		if (a.frequencia == b.frequencia) return a.identificador < b.identificador;
		else return a.frequencia < b.frequencia;
	}

	void TreeCode::modificar_arbre(TaulaFrequencies taulaf){


	}

	void TreeCode::omplir_codis(){
		//recorrer arbre, si esquerra 0, si dreta 1. despres afegir codi obtingut a la taula


	}

//Entrada / Sortida


	void TreeCode::escriure_arbre(){
		cout<<"recorrido en preorden:"<<endl;
		escriure_arbre_preorden();

		cout<<"recorrido en inorden:"<<endl;
		escriure_arbre_inorden();
	}

	void TreeCode::escriure_arbre_preorden(){

	}

	void TreeCode::escriure_arbre_inorden(){


	}

	void TreeCode::escriure_taula_codis(){

		for (map <string, string>::const_iterator it = TaulaCodis.begin(); it != TaulaCodis.end(); ++it){
			cout<<it->first<<' '<<it->second<<endl;
		}
	}




