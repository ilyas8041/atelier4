#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<string> personne;
    personne.push_back("bachir,jamal,19ans ");
    personne.push_back("cherki,said, 18ans");
    personne.push_back("alaoui,mohamed,20ans" );


    std::list<string>::iterator it;
    for (it = personne.begin(); it != personne.end(); ++it){
        std::cout << "\n" <<*it;
    }
    personne.sort();
    cout<<"\n";
    for (it = personne.begin(); it != personne.end(); ++it){
        std::cout  <<*it<< "\n";
    }
    return 0;
}