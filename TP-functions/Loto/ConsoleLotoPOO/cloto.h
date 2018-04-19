#pragma once

// définiton de la classe cGrille
class cGrille
{
	public:
		// définition des méthodes membres
		        /* définition des constructeurs
				(initialisateur des données membres) */
		cGrille();   // constructeur par défaut
		cGrille(int TabEntier[], int NbNumero); //autre constructeur
				/* définition des méthodes (services) */
				
		void Afficher(); // methode pour afficher
		int RetourneNbCase(); //methode pour connaitre la valeur de Nbcase

	private:
		// définition des données membres
		bool LaGrille[49];  // tableau de 49 booleen
		int Nbcase;         // données qui indique le nb de case cochées
};
