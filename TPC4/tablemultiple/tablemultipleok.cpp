#include <cstdlib>
#include <iostream>

 /* ------------------------------
 Nom: NGUYEN  Prenom: Thanh
 Date de création: 01/12/2016   date de modif:
 ---------------------------------------
 TPC3- LES BOUCLES POUR
 ---------------------------------------
 Ce programme sert à: afficher la table de multiplication 
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */



using namespace std;

int main(int argc, char *argv[])
{
  int nbtable,i,m;
  
  cout<< "Quelle table voulez vous afficher?:";
  cin>> nbtable;
  cout<<"jusqu'a quel multiplicateur?:";
  cin>> m;
  for (i=1; i<= m; i++)
  {
      cout<<nbtable<<"*"<<i<<"= " << nbtable*i << endl;
  }     
    
  system("PAUSE");
  return EXIT_SUCCESS;
}
