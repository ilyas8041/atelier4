#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S,jour,mois,annee,heure,minute;
    string month;
    cout << "entre un date sous la forme (JJMMAAAAHHNN): \n";
    cin >> S;


    jour = S.substr(0,2);
    mois = S.substr(2,2);
    annee = S.substr(4,4);
    heure = S.substr(8,2);
    minute = S.substr(10,2);

    if (mois == "01"){
        month = "janvier";
    }
    if (mois == "02"){
        month = "fevrier";
    }
    if (mois == "03"){
        month = "mars";
    }
    if (mois == "04"){
        month = "avril";
    }
    if (mois == "05"){
        month = "mai";
    }
    if (mois == "06"){
        month = "juin";
    }
    if (mois == "07"){
        month = "juillet";
    }
    if (mois == "08"){
        month = "aout";
    }
    if (mois == "09"){
        month = "septembre";
    }
    if (mois == "10"){
        month = "octobre";
    }
    if (mois == "11"){
        month = "novembre";
    }
    if (mois == "12"){
        month = "decembre";
    }


    cout << jour << " "<<month<<" "<<annee<<" a "<<heure<<"h"<<minute ;

    return 0;
}