#include <iostream>
#include <cstdlib>
#include<ctime>
/*  -------------------------------------
 Nom: NGUYEN  Prenom: Thanh
 Date de création: 21/11/2016   date de modif:
 ---------------------------------------
TP3  NOMBRE ALEATOIRE
 ---------------------------------------
 Ce programme sert à: jeu pour trouver le numero aleatoir en disposant 8 coups*/
 using namespace std;
int main(int argc, char** argv) 
{
	srand(time(NULL));
	int nbAleatoire = rand() % 101;
	int resultat,i;
	bool  trouve = false;
   	i=8;
	
	do
	{
		cout<<"il vous reste "<<i<<" coups"<<endl;
		do 
		{
			cout<<"taper un nombre compris entre 0 et 100:";
			cin>> resultat;
		} while (resultat < 0 && resultat > 100);
	    	i=i-1;
	    	
	     if (resultat < nbAleatoire)
            {
	    	cout<<"trop petit";
            }
		else if(resultat > nbAleatoire)
	    	{
	    	cout<<"trop grand";
            }
		else
            {
            trouve= true;
 	        cout<<"BRAVO!!!";
             }
	
	}while (trouve == false || i!=0);
	
    	if (trouve= false)
           {
	       cout<<"PERDU!"<<endl;
	       cout<<"le nombre aleatoire est:"<<nbAleatoire<<endl;
            }
	cout<<"fin du programme"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
