#include<iostream>
#include<iterator>
#include<set>

using namespace std;
bool rechercher(set<int,greater<int>> s , int E){
    auto it = s.find(E);
    if ( it == s.end() ) {
        return false;
    }
    else {
        return true;
    }
}
int main(){
    int V;
    bool recherche;
    cout<<"Enter la valeur a rechercher:"<<endl;
    cin>>V;
    set<int , greater<int>> s ;
    for(int i = 1 ; i<=100 ; i++){
        s.insert(i)	;
    };
    recherche=rechercher(s , V);
    if(recherche==true){
        cout<<"la valeur existe."<<endl;
    }else{
        cout<<"la valeur n'existe pas.";
    }
}