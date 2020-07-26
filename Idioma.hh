/** @file Idioma.hh
    @brief Especificació de la classe Idioma
*/

#ifndef _IDIOMA_HH_
#define _IDIOMA_HH_

#include "TaulaFrequencies.hh"
#include "TreeCode.hh"

#ifndef NO_DIAGRAM 
#include <iostream>
#include <string>
#endif

using namespace std;

/** @class Idioma
    @brief Representa un idioma.

    Està identificat per un string i conté la seva respectiva taula de frequencies i el seu TreeCode 

*/
class Idioma{
	
	private:
		
		TaulaFrequencies tf;
		TreeCode tc;

	public:

		//Constructores:

		/** @brief Creadora per defecte. 

     		S'executa automàticament al declarar un idioma.
     		\pre <em>Cert</em>
     	 	\post El resultat es un idioma buit
 		*/ 
		Idioma(); 


		//Consultores:

		/** @brief Retorna la taula de frequencies d'un idioma

     		\pre <em>Cert</em>
     	 	\post Retorna la taula de frequencies del paràmetre implícit
 		*/ 
		TaulaFrequencies consultar_taula_frequencies(); //no es pot retornar la taula sencera?


		/** @brief Retorna el TreeCode d'un idioma

     		\pre <em>Cert</em>
     	 	\post Retorna el TreeCode del paràmetre implícit
 		*/ 
		TreeCode consultar_treecode();
		


		//Modificadores:

		/** @brief Afegeix frequencies a la taula de l'idioma

     		\pre <em>Cert</em>
     	 	\post S'ha actualitzat la taula de frequencies de l'idioma
 		*/
		void afegir_frequencies(); //crida la funcio afegir_frequencies de la classe TaulaFrequencies




		//Entrada / sortida:

		/** @brief Operació de lectura

      		\pre Estan preparats al canal estàndar d'entrada un string (nom de l'idioma) i una Taula que conté la frequencia de cada caracter de l'idioma
      		\post El p.i. conté l'string i la Taula llegits al canal estandard d'entrada
  		*/
		void llegir_idioma();

};

#endif