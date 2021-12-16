#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> List;
    list <int>::iterator itr;
    int element;

    for (int i = 0; i < 4; i++)
    {
        cout << "entrez les elements de la liste : \n ";
        cin >> element;
        List.push_back(element);
    }

    List.sort();

    cout << "la liste triees : \n";
    for(itr=List.begin();itr!=List.end();itr++){
        cout << *itr << endl;
    }

    return 0;
}
