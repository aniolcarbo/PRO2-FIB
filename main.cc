/**
 * @mainpage PRÀCTICA DE PRO2: Codificacions i decodificacions binàries.
 
Programa modular que realitza operacions de codificació, decodificació, etc. S'introdueixen les classes <em>Cjt_Idiomes</em>, <em>Idioma</em>, <em>TreeCode</em> i <em>TaulaFrequencies</em>.

*/

/** @file main.cc
    @brief Programa principal per a l'exercici <em>PRÀCTICA DE PRO2</em>.
*/

/** @brief Programa principal per a l'exercici <em>PRÀCTICA DE PRO2</em>.
*/

#include "Cjt_Idiomes.hh"

#ifndef NO_DIAGRAM
#include <iostream>
#include <string>
#endif

using namespace std;

int main(){

	Cjt_Idiomes conjunt;
	conjunt.llegir_conjunt();

	string s;
	bool acabat = false;

	while (cin>>s and not acabat){

		if (s == "tabla_frec"){

			conjunt.op_tabla_frec();

		}

		else if (s == "treecode"){

			conjunt.op_treecode();
		}

		else if (s == "codigos"){

			conjunt.op_codigos();
		}

		else if (s == "anadir_modificar"){

			conjunt.op_afegir_modificar();
		}

		else if (s == "codifica"){

			conjunt.op_codifica();
		}

		else if (s == "decodifica"){

			conjunt.op_decodifica();
		}

		else if (s == "fin"){
			acabat = true;
		}
	}
	
}