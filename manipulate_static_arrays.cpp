
#include <iostream>
using namespace std;
/*
int main()
{
   int const nombreMeilleursScores(5);           //La taille du tableau
   
   int meilleursScores[nombreMeilleursScores];   //Déclaration du tableau

   meilleursScores[0] = 118218;  //Remplissage de la première case
   meilleursScores[1] = 100432;  //Remplissage de la deuxième case
   meilleursScores[2] = 87347;   //Remplissage de la troisième case
   meilleursScores[3] = 64523;   //Remplissage de la quatrième case
   meilleursScores[4] = 31415;   //Remplissage de la cinquième case
   
   for(int i(0); i<nombreMeilleursScores; ++i)
   {
        cout << meilleursScores[i] << endl;
   }

   return 0;
}
*/

/*
 *  Fonction qui calcule la moyenne des éléments d'un tableau
 *  - tableau : Le tableau dont on veut la moyenne
 *  - tailleTableau : La taille du tableau
 */
 double moyenne(double tableau[], int tailleTableau)
 {
    double moyenne(0);
    for(int i(0); i<tailleTableau; ++i)
    {
       moyenne += tableau[i];   //On additionne toutes les valeurs
    }
    moyenne /= tailleTableau;
 
    return moyenne;
}

int main()
{
    int const nombreNotes(6);
    double notes[nombreNotes];

    notes[0] = 12.5;
    notes[1] = 19.5;  //Bieeeen !
    notes[2] = 6.;    //Pas bien !
    notes[3] = 12;
    notes[4] = 14.5;
    notes[5] = 15;

    double moyenneNotes;
    moyenneNotes = moyenne(notes[], nombreNotes);

    cout << "Votre moyenne est : " << moyenneNotes << endl;

    return 0;
}