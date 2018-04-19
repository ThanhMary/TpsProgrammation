#pragma once

// d�finiton de la classe cGrille
class cGrille
{
	public:
		// d�finition des m�thodes membres
		        /* d�finition des constructeurs
				(initialisateur des donn�es membres) */
		cGrille();   // constructeur par d�faut
		cGrille(int TabEntier[], int NbNumero); //autre constructeur
				/* d�finition des m�thodes (services) */
				
		void Afficher(); // methode pour afficher
		int RetourneNbCase(); //methode pour connaitre la valeur de Nbcase

	private:
		// d�finition des donn�es membres
		bool LaGrille[49];  // tableau de 49 booleen
		int Nbcase;         // donn�es qui indique le nb de case coch�es
};
