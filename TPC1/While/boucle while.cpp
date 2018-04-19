#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int testvar;
    
    cout<< "tapez un nobmre entier:";
    
    cin>> testvar;
    
    while (testvar!=0)
    {
          cout<< "tapez une nobmre entier (0 pour sortir de la boucle):";
          cin>> testvar;

          cout<< "Fin du programme"<< endl;
}
          
    system("PAUSE");
    return EXIT_SUCCESS;
}
