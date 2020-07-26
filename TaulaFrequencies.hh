/** @file TaulaFrequencies.hh
    @brief Especificació de la classe TaulaFrequencies
*/

#ifndef _TAULAFREQUENCIES_HH_
#define _TAULAFREQUENCIES_HH_

#ifndef NO_DIAGRAM 
#include <iostream>
#include <map>
#endif

using namespace std;


/** @class TaulaFrequencies
    @brief Representa una taula de frequencies.

    Conté una sèrie de caràcters amb les seves respectives frequencies.

*/
class TaulaFrequencies{
	
	private:

		map <string, int> taula_frequencies;

	public:

		//Constructores:

		/** @brief Creadora per defecte. 

     		S'executa automàticament al declarar una Taula.
     		\pre <em>Cert</em>
     	 	\post El resultat és una taula de frequencies buida
 		*/ 
		TaulaFrequencies();


		//Consultores

		/** @brief Comprova si l'element amb nom c està a la taula de frequencies 

     		\pre <em>Cert</em>
     	 	\post Retorna true si l'element està a la taula, false si no
 		*/
		bool existeix_element(string c);

		/** @brief Consulta la frequencia d'un caracter 

     		\pre <em>Cert</em>
     	 	\post El resultat és la frequencia del caracter introduit a la funció
 		*/
		int consultar_freq(string c);

		/** @brief Consulta la mida de la taula de frequencies 

     		\pre <em>Cert</em>
     	 	\post El resultat és la mida de la taula de frequencies
 		*/
		int mida_taula_frequencies();



		//Modificadores

		/** @brief Afegeix un nou element a la taula de frequències

     		\pre Disposem d'un caràcter i una frequencia
     	 	\post S'ha afegit a la taula, si no hi era, el caràcter i frequencia introduits a la funció
 		*/
		void afegir_caracter(string nom_caracter, int frequencia);



		//Entrada / Sortida

		/** @brief Operació de lectura

      		\pre Estan preparats al canal estàndar d'entrada un int (mida de la taula) i un seguit de caracters amb la seva respectiva frequencia
      		\post El p.i. conté els caracters i frequencies llegits al canal estandard d'entrada
  		*/
		void llegir_taula_frequencies();

		/** @brief Operació d'escriptura

      		\pre <em>Cert</em>
      		\post S'ha escrit el contingut del p.i. pel canal estandard de sortida
  		*/
		void escriure_taula_frequencies();
};

#endif