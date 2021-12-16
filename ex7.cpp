#include <iostream>
using namespace std;
class Elments ;
class Chien ;
class Repas ;
class Race {
protected :
    char specificite;
    int  israseHybride();
    Race(){}
};

class Animal {
protected :
    string nom;
    int age;
    string genre;
    Animal(){}
};
class Chat : public Animal {
private :
    string type;
public :
    Repas * rep ;
    int sauter();
    Chat(){}
};
class Entraineur {
private :
    string nom ;
    string description ;
    Chien *chn;
    Entraineur(){}
};
class Chien : public Animal , public Race {
private :
    string taille ;
    Entraineur * entr ;
public :
    int ischass3();
    Chien(){}
};
class Repas {
private :
    string nom ;
    int heure ;
    string description ;
    Elments *elm;
public :
    Chat * ch ;
    Repas(){}
};
class Elments {
private :
    string nom ;
    string type ;
    Elments(){}
};

class Compitition {
private :
    string date ;
    string nom ;
public :
    int ordre ;
    Compitition(){}

};
int main (){}