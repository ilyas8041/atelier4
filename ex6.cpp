#include <iostream>
using namespace std;
class Test {
public:
    static int tableau[];
public:
    static int division(int indice, int diviseur){
        if( indice <= 0 || indice >= 10 ) {
            throw "L'element n'existe pas ";
        }
        else if( diviseur == 0 ) {
            throw "il est impossible de diviser par 0";
        }
        return tableau[indice] / diviseur;
    }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};
int main(){
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;
    try {
        cout << Test::division(x, y) << endl;
    }
    catch (const char* e) {
        cerr << e << endl;
    }
    return 0;
}