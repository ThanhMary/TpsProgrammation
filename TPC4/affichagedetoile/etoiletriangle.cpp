#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,j,nbL;
    
    cout<<"taper le nombre de ligne SVP: ";
    cin>> nbL;
 
    
    for ( i=1; i<=nbL; i++)
    {
        
        for ( j=0 ; j<=nbL-i; j++)
        {
            cout<<" ";
        }
        for ( j=0; j < 2*i-1; j++)
        {
            cout<<"*";
            
        }
         cout<<endl;
    }  
      
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
