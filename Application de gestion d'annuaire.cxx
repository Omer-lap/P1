#include <iostream>
#include <vector>
using namespace std;
//structure pour representer un etablissement
struct etablissement
{
    string nom;
    string matricule;
    string type;
    string email;
    int telephone;
    string localisation;
};
//class pour stocker les fonctions 
class Annuaire
{
  private:
    vector<etablissement> listeEtablissement;//vecteur contenant tout les etablissement

  public:
  //fonction permettant d'ajouter un etablissement'
    void ajouteretablissement(const etablissement &etab)
    {
        listeEtablissement.push_back(etab);
        cout << "etablissement ajouter avec succes" << endl;
        cout<<"       "<<endl;
    }
    //fonction permettant de suprimer un etablissement
    void suprimeretablissement(const string nom)
    {
        for (auto it = listeEtablissement.begin(); it != listeEtablissement.end(); it++)
        {
            if (it->nom == nom)
            {
                listeEtablissement.erase(it);
                cout<<"etablissement suprimer avec succès"<<endl;
            }
        }
        cout<<"etablissement non trouvé"<<endl;
    }
    //fonction pour modifier un etablissement
    void modifieretablissement(const etablissement &nouveletab,const string &nom)
    {
       for (auto& etab : listeEtablissement) {
            if (etab.nom == nom) {
                etab=nouveletab;
            }
       }
    }
    // fonction pour rechercher un etablissement
    void rechercheretablissement(const string &nom)
    {
        if(listeEtablissement.empty()){
            cout<<"etablissement non trouvé"<<endl;
            cout<<"   "<<endl;
        }
        for (const auto& etab : listeEtablissement) {
            if (etab.nom == nom) {
                cout << "nom:" << etab.nom << endl;
                cout << "matricule:" << etab.matricule << endl;
                cout << "type:" << etab.type << endl;
                cout << "email:" << etab.email << endl;
                cout << "telephone:" << etab.telephone << endl;
                cout << "localisation:" << etab.localisation << endl;
            }else{
                cout<<"etablissement non trouve"<<endl;
            }
        }
    }
} ;
int main()
{
    Annuaire annuaire;
    int choix;
    cout << "MENU DE GESTION D'ANNUAIRE DES ETABLISSEMENT" <<endl;
    cout<<"   "<<endl;
    do
    {
        cout << "Que souhaiter vous effectuer" << endl;
        cout << "1.ajouter un etablissement" << endl;
        cout << "2.suprimer un etablissement" << endl;
        cout << "3.modifier un etablissement" << endl;
        cout << "4.rechercher un etablissement" << endl;
        cout << "5.quitter" << endl;
        cout << "entrer votre choix"<<"  ";
        cin >> choix;
        switch (choix)
        {
        case 1:
        {
            cout << "quel etablissement souhaiter vous ajouter" << endl;
            etablissement etab;
            cin.ignore();
            cout<<"nom:";
            getline(cin,etab.nom);
            cout<<"matricule:";
            getline(cin,etab.matricule);
            cout<<"type:";
            getline(cin,etab.type);
            cout<<"email:";
            getline(cin,etab.email);
            cout<<"localisation:";
            getline(cin,etab.localisation);
            cout<<"telephone:";
            cin>>etab.telephone;
            annuaire.ajouteretablissement(etab);
            break;
        }
        case 2:
        {
            cout<<"quel etablissement souhaiter vous suprimer"<<endl;
            string nom;
            cin.ignore();
            getline(cin,nom);
            annuaire.suprimeretablissement(nom);
            cout<<"   "<<endl;
            break;
        }
        case 3:
        { 
          cout<<"entrer les information du nouvel etablissement"<<endl;
          etablissement nouveletab;
          string nom;
          cin.ignore();
          cout<<"nom:";
          getline(cin,nouveletab.nom);
          cout<<"matricule:";
          getline(cin,nouveletab.matricule);
          cout<<"type:";
          getline(cin,nouveletab.type);
          cout<<"email:";
          getline(cin,nouveletab.email);
          cout<<"localisation:";
          getline(cin,nouveletab.localisation);
          cout<<"telephone:";
          cin>>nouveletab.telephone;
          annuaire.modifieretablissement(nouveletab,nom);
          cout<<"etablissement modifier avec succès"<<endl;
          cout<<"   "<<endl;
          break;
        }
        case 4:
        {
            string nom;
            cout<<"quel etablissement vouler vous rechercher"<<endl;
            cin.ignore();
            getline(cin,nom);
            annuaire.rechercheretablissement(nom);
            cout<<"  "<<endl;
            break;
        }
        case 5:
        {
            cout<<"aurevoir"<<endl;
            break;
        }
            default :{
                cout<< "choix invalide"<<endl;
                cout<<"   "<<endl;
                }
        }
                }while(choix!=5);
                return 0;
                }     