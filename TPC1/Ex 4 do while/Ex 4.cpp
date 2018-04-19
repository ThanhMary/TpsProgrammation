#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int valeurfinale, somme;
    somme=0;
    
    cout<<"taper un nombre entrer:";
    cin>>valeurfinale;
    
    do 
    {
    somme=somme+valeurfinale;
    valeurfinale=valeurfinale-1;
    cout<<somme<<endl;
    
    }
     while (valeurfinale!=0);
    
   
       cout<<"Resultat="<<somme<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
