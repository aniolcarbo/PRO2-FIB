#include "Idioma.hh"


// Constructores

	Idioma::Idioma(){
	}


// Consultores


	TaulaFrequencies Idioma::consultar_taula_frequencies(){

		TaulaFrequencies aux;
		aux = tf;
		return aux;

	}

	TreeCode Idioma::consultar_treecode(){

		TreeCode aux;
		aux = tc;
		return aux;

	}


//Modificadores

	void Idioma::afegir_frequencies(){ //no se si fa falta, esperarme a input de afegir_modificar idioma

	}


//Entrada / Sortida

	void Idioma::llegir_idioma(){

		//llegir tf
		tf.llegir_taula_frequencies();


		//generar arbre
		TaulaFrequencies taulaf = tf;
		tc.generar_arbre(tf);

		//generar tc

	}
