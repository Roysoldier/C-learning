#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <unordered_set>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <random>
#include <cstdlib>
struct Morceau {
    std::string name;
    std::string artist;
    std::string album;
};

bool verif_commandes(std::string commandes) {
    std::unordered_set<std::string> commande_valide {"ajouter","afficher","quitter","enregistrer","charger"};
    auto first_space = std::find(std::begin(commandes),std::end(commandes),' ');
    commandes.erase(first_space,std::end(commandes));
    return commande_valide.find(commandes) != std::end(commande_valide);
    
}

void verif_cin(std::string & commandes) {
    bool status {false};

    while((!(std::getline(std::cin, commandes))) || (!status)) {
        if(std::cin.fail()) {
            std::cout << u8"> L'entrée est invalide recommence !" <<std::endl << "> ";
            
        }
        else {
            status = verif_commandes(commandes);
            if(!status) {
                std::cout << u8"> La valeur qui à été donné est invalide !" << std::endl << "> ";
            }
            else {
                break;
            }
        }
        std::cin.clear();
    }
    
    
}

void add(std::string & commandes,std::vector<Morceau> & disco) {
    Morceau morceau {};
    commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' '));
    while(*(std::begin(commandes)) == ' ') {
        commandes.erase(std::begin(commandes),std::begin(commandes)+1);
    }
    std::string first_info {};
    std::string second_info {};
    std::string third_info {};
    if(std::size(commandes) == 0) {
        first_info = {"Morceau inconu"};
        second_info =  {"Album inconnu"};
        third_info = {"Artiste inconnu"};
    }
    
    else {
        if((std::find(std::begin(commandes),std::end(commandes),'|') != (std::end(commandes)))) {
            first_info = {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),'|')};
            
            while(*(std::cbegin(first_info)) == ' ' or *(std::cbegin(first_info)) == '|') {
                first_info.erase(std::begin(first_info),std::begin(first_info)+1);
            } 
        }
        else {
            first_info = commandes;
            while(*(std::cbegin(first_info)) == ' ' ) {
                first_info.erase(std::begin(first_info),std::begin(first_info)+1);
            } 
        }
       
        commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),'|'));
        if(*(std::begin(commandes)) == '|') {
        commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
             while(*(std::begin(commandes)) == ' ') {
            commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
        }
     
        
         if((std::find(std::begin(commandes),std::end(commandes),'|') != (std::end(commandes)))) {
            second_info = {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),'|')};
            
            while(*(std::cbegin(second_info)) == ' ' or *(std::cbegin(second_info)) == '|') {
                second_info.erase(std::begin(second_info),std::begin(second_info)+1);
            } 
        }
        else {
            second_info = commandes;
            while(*(std::cbegin(second_info)) == ' ' ) {
                second_info.erase(std::begin(second_info),std::begin(second_info)+1);
            } 
        }
        if(std::size(second_info) == 0) {
            second_info = "Album inconue";
        }
        commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),'|'));
        if(*(std::begin(commandes)) == '|') {
            commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
            while(*(std::begin(commandes)) == ' ') {
                commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
            }

            third_info = commandes;
            while(*(std::cbegin(third_info)) == ' ' ) {
                    third_info.erase(std::begin(third_info),std::begin(third_info)+1);
            } 

            if(std::size(third_info) == 0) {
                third_info = "Album inconue";
            }
            commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),'|'));



            //std::cout << ">>> La commande : \'" << commandes << "\' >>>" << std::endl;
        }
        else {
            third_info = {"Artiste inconnu"};
        }
        
        }
        else {
            second_info =  {"Album inconnu"};
            third_info = {"Artiste inconnu"};
        }
        
       
        
    }
    auto random_integer = rand() % 40;
    Sleep(random_integer*10);
    std::cout << "<------------->\n> L'artiste : " << third_info << "\n> L'album : " << second_info << "\n> Le morceau : " << first_info << "\n<------------->" << std::endl;
    Morceau disc {first_info,third_info,second_info};
    disco.push_back(disc);
}

void affichage(std::string & commandes,std::vector<Morceau> & disco) {
    commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' '));
    while(*(std::begin(commandes)) == ' ') {
        commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
    }
    std::string instruct {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' ')};
    if (instruct == "morceau") {
        std::sort(std::begin(disco),std::end(disco),[](Morceau a , Morceau b) -> bool {
            std::vector<std::string> tester {a.name,b.name};
            std::sort(std::begin(tester),std::end(tester));
            return a.name == tester[0];
        });
        for(Morceau i : disco) {
            std::cout << ">> " << i.name << " | " << i.album << " | " << i.artist << std::endl;
            auto random_integer = rand() % 20;
            Sleep(random_integer*10);
        }
    }
    else if (instruct == "album") {
        
        std::sort(std::begin(disco),std::end(disco),[](Morceau a , Morceau b) -> bool {
            std::vector<std::string> tester {a.album,b.album};
            std::sort(std::begin(tester),std::end(tester));
            return a.name == tester[0];
        });
        
        auto copie = disco;
         std::sort(std::begin(copie),std::end(copie),[](Morceau a , Morceau b) -> bool {
                std::vector<std::string> tester {a.name,b.name};
                std::sort(std::begin(tester),std::end(tester));
                return a.name == tester[0];
            });
        std::unordered_set<std::string> use {};
        for(Morceau i : disco) {
            if ((use.find(i.artist + i.album) == std::end(use))) {

            
            std::cout << "-> " << i.album << " | " << i.artist << std::endl;
            for (Morceau & v : disco ){

              
                if(v.album == i.album and v.artist == i.artist ) {
                    std::cout << "---> " << v.name << std::endl;
                    use.insert(v.artist + v.album );
                }
                
                auto random_integer = rand() % 20;
                Sleep(random_integer*10);
            }
            }
            
            std::cout << std::endl;
            auto random_integer = rand() % 30;
            Sleep(random_integer*10);
        }
    }

     else if (instruct == "artiste") {
        
        std::sort(std::begin(disco),std::end(disco),[](Morceau a , Morceau b) -> bool {
            std::vector<std::string> tester {a.album,b.album};
            std::sort(std::begin(tester),std::end(tester));
            return a.name == tester[0];
        });
        
        auto copie = disco;
         std::sort(std::begin(copie),std::end(copie),[](Morceau a , Morceau b) -> bool {
                std::vector<std::string> tester {a.name,b.name};
                std::sort(std::begin(tester),std::end(tester));
                return a.name == tester[0];
            });
        std::unordered_set<std::string> use {};
        std::unordered_set<std::string> artist {};
        for(Morceau c :disco) {
            if((artist.find(c.artist)) == std::end(artist)) {
                std::cout << std::endl << "-> " << c.artist << std::endl;
                for(Morceau i : disco) {
                    if ((use.find(i.artist +i.album) == std::end(use)) and i.artist == c.artist) {

                    
                    std::cout << "|--> " << i.album <<std::endl;
                    for (Morceau & v : copie ){

                    
                        if(v.album == i.album and v.artist == i.artist ) {
                            std::cout << "  |--> " << v.name << std::endl;
                            use.insert(v.artist + v.album );
                        }
                        
                     auto random_integer = rand() % 10;
                    Sleep(random_integer*10);   
                    }
                }
            
          auto random_integer = rand() % 30;
            Sleep(random_integer*10);           
        }   artist.insert(c.artist);
            } 
            auto random_integer = rand() % 40;
            Sleep(random_integer*10); 
        }
        
    }

    else {
        std::cout << "> L'entrée est invalide veuillez saisir soit : morceau , album , artist" << std::endl;
    }
}

void enregistrement(std::string & commandes,std::vector<Morceau> & disco) {
    commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' '));
    while(*(std::begin(commandes)) == ' ') {
        commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
    }
    std::string name_fichier {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' ')};
    if(!(std::empty(name_fichier))) {
        std::string name {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' ')};
        
        std::ofstream name_fichier {name + ".csv"};
        int nbr {std::size(disco)};
        int here {0};
        for(Morceau i : disco) {
            here++;
            name_fichier << i.artist<<";"<<i.album<<";"<<i.name << std::endl;
            std::cout << "> " << i.name << "( " << i.album << ") de " << i.artist << " à bien été enregistrer [" << (here*100)/nbr << "%]" <<std::endl;
            auto random_integer = rand() % 40;
            Sleep(random_integer*10);
        }
        std::cout <<"> Fichier enregistrer avec succès dans le fichier : " << name <<".csv" << std::endl;
    }
    else {
    std::cout << "> Merci de rentrer un nom de fichier !" << std::endl;
    }
}

void chargement(std::string & commandes,std::vector<Morceau> & disco) {
    commandes.erase(std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' '));
    while(*(std::begin(commandes)) == ' ') {
        commandes.erase(std::begin(commandes),(std::begin(commandes))+1);
    }
    std::string name_fichier {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' ')};
    if(!(std::empty(name_fichier))) {
        if(std::ifstream {name_fichier}) {
            std::ifstream fichier {name_fichier};
            std::string ligne {""};
            
            
            int here {0};
            while(std::getline(fichier,ligne)) {
                auto first_delimiter {std::find(std::begin(ligne),std::end(ligne),';')};
                auto second_delimiter {std::find((first_delimiter)+1,std::end(ligne),';')};
                Morceau load {};
                load.artist = {std::begin(ligne),first_delimiter};
                load.album = {(first_delimiter)+1,second_delimiter};
                load.name = {(second_delimiter)+1,std::end(ligne)};
                disco.push_back(load);
                std::cout << "> Fichier : " << load.name << "( " << load.album << ") de " << load.artist << " charger avec succès !" << std::endl;
                auto random_integer = rand() % 40;
                Sleep(random_integer*10);
            }
            std::cout << "> Tout les fichier ont été importer !!!" << std::endl;
        }
        else {
            std::cout << "> Fichier Inexistant !" << std::endl;
        }
        
    }
}

int main() {
    bool running {true};
    std::vector<Morceau> disco {};
    std::cout << "<------------------------------------->\n >> Bienvenue dans ta discographie <<\n\n";
    while(running) {
        std::string commandes {""};
        std::cout << "> ";

        verif_cin(commandes);
        std::string prefix {std::begin(commandes),std::find(std::begin(commandes),std::end(commandes),' ')};
        if(prefix == "quitter") {
            running = false;
        }
        else if(prefix == "ajouter") {
            
            add(commandes,disco);
        }

        else if(prefix == "afficher") {
            affichage(commandes,disco);
        }
        else if(prefix == "enregistrer") {
            enregistrement(commandes,disco);
        }
         else if(prefix == "charger") {
            chargement(commandes,disco);
        }
    }
    std::cout << "> Bye...";

    return 0;
}