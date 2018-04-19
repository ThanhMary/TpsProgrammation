#include "stdafx.h"
#include <iostream>
#include "cloto.h"
using namespace std;
/******* impl�mentation des m�thodes de cGrille  *******/
//impl�mentation du constructeur par d�faut
cGrille::cGrille()
{
	cout << "je suis dans le constructeur par defaut...\n";
	//initialiser les donn�es membres
	for (int i = 0; i < 49; i++)
	{
		LaGrille[i] = false;
	}
	Nbcase = 0;
}

//impl�mentation du second constructeur
cGrille::cGrille(int TabEntier[], int NbNumero)
{
	cout << "je suis dans le second constructeur...\n";
	// parcourrir TabEntier
	for (int i = 0; i < NbNumero; i++)
	{
		LaGrille[TabEntier[i] - 1] = true;
	}
	Nbcase = 7;
}

// impl�mentation de : int RetourneNbCase();
int cGrille::RetourneNbCase()
{
	return (Nbcase); //on retourne la valeur de Nbcase
}

//impl�mentation de :void Afficher();
void cGrille :: Afficher()
{
	// on teste si la grille es vide
	if (Nbcase == 0)
	{
		cout << " la grille est vide...\n";
	}
	else
	{
		// on parcourt LaGrille et si la case est coch�e on l'affiche
		for (int i = 0; i < 49; i++)
		{
			if (LaGrille[i]==true)
			{
				cout << i + 1 << " ";
			}
		}
		cout << endl;
	}
}