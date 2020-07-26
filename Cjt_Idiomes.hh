/** @file Cjt_Idiomes.hh
    @brief Especificació de la classe Cjt_Idiomes
*/

#ifndef _CJT_IDIOMES_HH_
#define _CJT_IDIOMES_HH_

#include "Idioma.hh"

#ifndef NO_DIAGRAM 
#include <iostream>
#include <map>
#include <string>
#endif

using namespace std;

/** @class Cjt_Idiomes
    @brief Representa un conjunt d'idiomes. 

    Pot contenir tants idiomes com volguem, i en podem anar afegint.
*/

class Cjt_Idiomes{

	private:

		map <string, Idioma> conjunt;

	public:

		//Constructores

		/** @brief Creadora per defecte. 

     		S'executa automàticament al declarar un conjunt d'idiomes.
     		\pre <em>Cert</em>
     	 	\post El resultat es un conjunt d'idiomes buit
 		*/ 
		Cjt_Idiomes();


		//Consultores:


		/** @brief Consulta la mida del conjunt

     		\pre <em>Cert</em>
     	 	\post Retorna la mida del conjunt d'idiomes
 		*/ 
		int mida_conjunt();


		/** @brief Consulta si l'idioma amb identificador nom_idioma està al conjunt

     		\pre <em>Cert</em>
     	 	\post Retorna true si l'idioma existeix, false si no existeix
 		*/ 
		bool existeix_idioma(string nom_idioma);

		/** @brief Consulta l'idioma que té com a nom l'string introduit 

     		\pre <em>Cert</em>
     	 	\post El resultat és un idioma amb identificador nom_idioma
 		*/ 
		Idioma consultar_idioma(string nom_idioma);


		/*

		void consultar_codis(Idioma); //es comprova si existeix l'idioma, i es crida a la funcio que realment consulta 
										//codis, que es de la classe taula
		//Pre:
		//Post: retorna els codis corresponents de l'idioma

		Taula consultar_taula(Idioma); //es comprova si existeix l'idioma, ies crida a la funcio que realment consulta 
										//la taula, que es de la classe idioma
		//Pre:
		//Post: retorna la taula corresponent a l'idioma

		BinTree consultar_treecode(Idioma); //es comprova si existeix l'idioma, i es crida a la funcio que realment el crida,
											//que es de la classe idioma o taula (en funcio d'on decideixi posar l'arbre)
		//Pre:
		//Post: retorna el treecode corresponent a l'idioma

		*/


		//Modificadores:

		/** @brief Crea un idioma amb identificador nom si aquest no existia. Altrament, modifica les frequencies del que hi havia sumant-li les noves

     		\pre El conjunt d'idiomes pot contenir, o no, l'idioma que volem afegir/modificar
     	 	\post El conjunt conté un idioma amb l'identificador i la nova taula de frequencies. També s'ha modificat el TreeCode corresponent
 		*/ 
		void op_afegir_modificar(); //farem el cin del nou idioma dins daquesta funcio, i fara el que cal fer

		/** @brief Codifica

     		\pre Al canal estandard d'entrada hi ha un idioma (que es l'idioma al qe pertany el text) i un text format per caracters
     	 	\post S'ha codificat a binari el text introduit
 		*/
		void op_codifica(); //en aqesta funcio comprovem si lidioma existeix i cridem la funcio codifica_text


		/** @brief Decodifica

     		\pre Al canal estandard d'entrada hi ha un idioma (que es al que s'ha de traduir el text) i un text en binari
     	 	\post S'ha codificat el text en l'idioma introduit
 		*/
		void op_decodifica(); //en aqesta funcio comprovem si lidioma existeix i cridem la funcio decodifica_text


		//Entrada / Sortida

		/** @brief Operació de lectura

      		\pre Estan preparats al canal estàndar d'entrada un enter n (nombre d'idiomes del conjunt) i n idiomes que formen el conjunt
      		\post El p.i. conté el conjunt d'idiomes llegits al canal estandard d'entrada
  		*/
		void llegir_conjunt();


		/** @brief Operació del programa principal que escriu la taula de frequencies d'un idioma

     		\pre <em>Cert</em>
     	 	\post El resultat és la taula de frequencies d'un idioma
 		*/
		void op_tabla_frec();

		/** @brief Operació del programa principal que escriu el BinTree d'un idioma

     		\pre <em>Cert</em>
     	 	\post El resultat és el BinTree d'un idioma
 		*/
		void op_treecode();

		/** @brief Operació del programa principal que escriu la taula de codis d'un idioma

     		\pre <em>Cert</em>
     	 	\post El resultat pot ser la taula de codis d'un idioma o bé un caràcter amb el seu respectiu codi, depenent de l'input
 		*/
		void op_codigos();

};

#endif
