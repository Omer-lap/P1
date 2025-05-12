# include <iostream>
using namespace std ;
class comptebancaire {
    private:
        string numeroCompte ;
        string titulaire ;
        int montantCompte ;
    public:
        comptebancaire(const string numeroCompte ,const string titulaire ,const int montant){
           setnumeroCompte(numeroCompte);
           settitulaire(titulaire);
           setmontantCompte(montant );            
        }
        void setnumeroCompte(string numero){
            numeroCompte =numero;
        }
        string getnumeroCompte(){
            return numeroCompte;
        }
        void settitulaire(string nom){
            titulaire=nom;
        }
        string gettitulaire(){
            return titulaire ;
        }
        void setmontantCompte(int m){
            montantCompte=m;
        }
        void setchangermontantCompte (int m,int n){
            switch(n){
                case 1:
                {
                    montantCompte=montantCompte+m;
                    break;
                   }
                 case 2:
                 {
                     montantCompte= montantCompte - m;
                     break ;
                 }
            }
        }
        int getmontantCompte() {
            return montantCompte;
        }
};
int main() {
    comptebancaire compte("41@a","omer",5000);
    cout<<compte.gettitulaire();
     compte.setchangermontantCompte(1000,1);
    cout<<compte.getmontantCompte();
}