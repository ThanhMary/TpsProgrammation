#include <cstdlib>
#include <iostream>
#include <iostream>
 /* ------------------------------
 Nom: NGUYEN  Prenom: Thanh
 Date de création: 21/11/2016   date de modif:
 ---------------------------------------
 TPC3- LES BOUCLES
 ---------------------------------------
 Ce programme sert à: chercher le nombre le plus grand, le nombre le plus petit, et la moyenne des nombres que l'utilisatuer saisissent de clavier<1000//
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) 
{
	int nbnote;//compteur
	float min, max, note, somme;
	char choix;
	
	min=1000; //la premiere note sera donc la plus petite
	max=0;// la premiere note sera donc la plus grande
	nbnote=0;//pas encore de note
	somme=0;// pas encore de note donc la somme des notes est à 0
	do 
	{
		cout<<" taper note "<<nbnote+1<<":";
		cin>> note;
	
 		if (note>=0 && note<=1000)
		{
		
		   somme=note+somme;
		   nbnote=nbnote+1;
		
		   if (note<min)
		   {
              min=note;
           }
		   if (note>max)
           {
                max=note;
           }
           do
		   {
		     cout<<"voulez -vous saisir d'autre note (o/n)?:";
             cin>> choix;
           }while (choix != 'o' && choix != 'n'); 
        }
        else
        {
            cout<<"mauvaise saisie"<<endl;
            choix='o';
        }

				
	} while (choix == 'o');
	
	cout<<"la moyenne est de: "<<somme/nbnote<<endl;
	cout<<"la note la plus haute est: "<<max<< endl;
	cout<<"la note la plus basse est: "<< min<<endl;
	
	
 system("PAUSE");
    return EXIT_SUCCESS;
}
