// But:   Écrire un programme pour calculer le montant qu’un individu devra débourser 
//        pour faire un voyage dans une automobile louée.
//
// Nom:   Nicolas Paquette
// Date:  2020-09-14

#include <iostream>
using namespace std;

int main()
{
    //variable des inforation du client
    int nombreJourVehicule;
    int kilometrageVehicule;
    
    //variable avec les tarif
    int coutParJour = 45;
    int kilometragreGratuitParJour = 250;
    float consomationEssence = 7.6;
    float coutLitreEssence = 1.25;
    float coutKiloSupplementaire = 0.05;

    //variable avec les couts
    int coutLocationTotal;
    float coutKiloDeTrop = 0;
    float coutEssence;
    float coutTotal;

    //demander au client les inforation sur l'utilisation du vehicule de location
    cout << "Combien de jour avez-vous utilise le vehicule ? :";
    cin >> nombreJourVehicule;
    cout << "Nombre de kilometre total parcouru ? :";
    cin >> kilometrageVehicule;

    //calculer les couts par de localtion par jour et l'afficher
    coutLocationTotal = nombreJourVehicule * coutParJour;

    cout << "Cout de location du vehicule par jour :" << coutLocationTotal <<"$"<< endl;

    //calculer les couts de l'essence
    coutEssence = (consomationEssence * kilometrageVehicule / 100) * coutLitreEssence;

    cout << "Cout de l'essence :" << coutEssence << "$" << endl;

    //calculer les couts supplementaire du kilometrage en trop s'il y en a 
    if (kilometrageVehicule >= (nombreJourVehicule * kilometragreGratuitParJour))
    {
        coutKiloDeTrop = (kilometrageVehicule - (nombreJourVehicule * kilometragreGratuitParJour)) * coutKiloSupplementaire;
        cout << "Cout supplementaire du kilometre de trop :" << coutKiloDeTrop << "$" << endl;
    }
   
    //afficher le cout total
    coutTotal = coutKiloDeTrop + coutLocationTotal + coutEssence;
    cout << "cout total :" << coutTotal << "$" << endl;
}

/** test
 * Valeur saisie :             
 * -----------------------
 * Jour:2                  Jour:5                          
 * kilo:750                kilo:900
 *
 * Resultats escoptes :
 * ------------------------
 * coutlocation:90         coutlocation:225        
 * essence:71.25           essence:85.5
 * kilosupp:12.5           kilosupp:0
 * coutotal:173.75         coutotal:310.5
 */
