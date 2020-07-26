#include "TaulaFrequencies.hh"


//Constructores

	TaulaFrequencies::TaulaFrequencies(){
	}

//Consultores

	bool TaulaFrequencies::existeix_element(string c){

		map <string, int>::const_iterator it = taula_frequencies.find(c);

		if (it!=taula_frequencies.end()) return true;
		else return false;

	}

	int TaulaFrequencies::consultar_freq(string c){

		map <string, int>::const_iterator it = taula_frequencies.find(c);

		if (it!=taula_frequencies.end()){
			int aux = (*it).second;
			return aux;
		}

		else cout<<"El caracter"<<c<<" no esta a la taula"<<endl;
	}

	int TaulaFrequencies::mida_taula_frequencies(){

		int mida = taula_frequencies.size();
		return mida;
	}


//Modificadores

	void TaulaFrequencies::afegir_caracter(string nom_caracter, int frequencia){

	}

//Entrada / Sortida

	void TaulaFrequencies::llegir_taula_frequencies(){

		int n; //mida de la taula
		cin>>n;

		for (int i=0;i<n;i++){

			string nom;
			cin>>nom;

			int frequencia;
			cin>>frequencia;

			taula_frequencies.insert(make_pair(nom,frequencia));
		}
	
	}

	void TaulaFrequencies::escriure_taula_frequencies(){

		for (map <string, int>::const_iterator it = taula_frequencies.begin(); it != taula_frequencies.end(); ++it){
			cout<<(*it).first<<' '<<(*it).second<<endl;
		}
		
	}