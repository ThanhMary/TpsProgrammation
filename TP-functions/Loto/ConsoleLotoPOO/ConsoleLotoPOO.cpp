// ConsoleLotoPOO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cloto.h"
using namespace std;
int main()
{
    // crée un objet de type cGrille vide 
	cGrille UneGrille;  // appel au constructeur par défaut de cGrille
	// afficher le nombre de case cochée
	cout << " le nombre de case de la grille : " << UneGrille.RetourneNbCase()<<endl;
						
	// afficher l'objet UneGrille
	UneGrille.Afficher();     // appel de la méthode Afficher() de l'objet
	
	// liste de numero à cocher
	int MesNumero[10] = { 1,5,25,32,35,41,49 };

	// utilisation du second constructeur
	cGrille UneAutreGrille(MesNumero, 7);
	
	cout << " le nombre de case de la grille UneAutreGrille : " 
		<< UneAutreGrille.RetourneNbCase()<<endl;

	// on affiche l'objet UneAutreGrille
	UneAutreGrille.Afficher();


	system("pause");
	return 0;
}

