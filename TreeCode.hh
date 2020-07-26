/** @file TreeCode.hh
    @brief Especificació de la classe TreeCode
*/

#ifndef _TREECODE_HH_
#define _TREECODE_HH_

#include "TaulaFrequencies.hh"

#ifndef NO_DIAGRAM
#include "BinTree.hh" 
#include <iostream>
#include <map>
#include <set>
#endif

using namespace std;

/** @struct Caracter
    @brief Representa un caràcter i la seva frequència.

    Conté un string identificador i un int frequencia.

*/
struct Caracter{

		string identificador;
		int frequencia;
};

/** @class TreeCode
    @brief Representa un TreeCode.

    Conté un arbre binari i una taula de codis, la qual conté una sèrie de caràcters i el seu respectiu codi binari.

*/

class TreeCode{

	private:

		BinTree<Caracter> arbre;
		map <string, string> TaulaCodis;

	public:

		//Constructores

		/** @brief Creadora per defecte. 

     		S'executa automàticament al declarar un TreeCode.
     		\pre <em>Cert</em>
     	 	\post El resultat és un BinTree buit i una taula de codis, també buida.
 		*/ 
		TreeCode();

		//Consultores

		/** @brief Consulta el BinTree del paràmetre implícit 

     		\pre <em>Cert</em>
     	 	\post El resultat és el BinTree del p.i.
 		*/ 
		BinTree<Caracter> consultar_arbre();


		/** @brief Consulta la mida de la taula de codis del paràmetre implícit 

     		\pre <em>Cert</em>
     	 	\post El resultat és la mida de la taula de codis del p.i.
 		*/
		int mida_taula_codis();

		/** @brief Consulta el codi corresponent al caràcter introduit

     		\pre <em>Cert</em>
     	 	\post El resultat és el codi binari del caràcter introduit
 		*/
		void consultar_codi(string c);


		//Modificadores

		/** @brief Completa la taula de codis

     		\pre Disposem d'un BinTree
     	 	\post S'han afegit els codis corresponents a cada caràcter del BinTree
 		*/
		void omplir_codis();


		//potser privada:


		/** @brief Genera l'arbre que estableix el mètode de codificació i decodificació 

     		\pre Disposem d'una taula de frequencies
     	 	\post El resultat és un BinTree on cada node és un caràcter i la seva frequencia.
 		*/
		void generar_arbre(TaulaFrequencies taulaf);//agafar cada pair de la taula de frequencies, convertirlo a bintree i guardarho en un set segons frequencia

		/** @brief Modifica l'arbre que estableix el mètode de codificació i decodificació 

     		\pre Disposem d'una taula de frequencies actualitzada
     	 	\post El resultat és un BinTree actualitzat amb les noves frequencies de la taula.
 		*/
		void modificar_arbre(TaulaFrequencies taulaf); //elimina l'arbre que teniem i crea el nou amb la nova taula de frequencies


		//Entrada / Sortida


  		/** @brief Operació d'escriptura del BinTree

      		\pre <em>Cert</em>
      		\post S'ha escrit el BinTree del p.i. pel canal estandard de sortida (primer en preordre, després en inordre)
  		*/
		void escriure_arbre(); //conte les dues funcions d'escriure, es per ferho mes net


		/** @brief Operació d'escriptura del BinTree recorrent-lo en preordre

      		\pre <em>Cert</em>
      		\post S'ha escrit el BinTree (recorregut en preordre) del p.i. pel canal estandard de sortida
  		*/
		void escriure_arbre_preorden();


		/** @brief Operació d'escriptura del BinTree recorrent-lo en inordre

      		\pre <em>Cert</em>
      		\post S'ha escrit el BinTree (recorregut en inordre) del p.i. pel canal estandard de sortida
  		*/
		void escriure_arbre_inorden();



		/** @brief Operació d'escriptura de la taula de codis

      		\pre <em>Cert</em>
      		\post S'ha escrit la taula de codis del p.i. pel canal estandard de sortida
  		*/
		void escriure_taula_codis();


		/** @brief Operació d'escriptura d'un element de la taula de codis

      		\pre <em>Cert</em>
      		\post S'ha escrit un element de la taula de codis del p.i. pel canal estandard de sortida
  		*/
		void escriure_codi(string c); //li passem el caracter, fa un find i retorna l'iterador, llavors fem cout<<*i


};

#endif