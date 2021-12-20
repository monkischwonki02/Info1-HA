// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 221200260; 221200827
#include <iostream>
#include <string>

struct article {
    std::string artNr;
    double price;
};

struct stock{
    article art;
    int pcs = 0;
};

// Es wird eine exakte Eingabe gefordert. Sonst wird ein neues element erstellt
int addArticle(stock arrStock[]){
    std::string inArtNr;
    double price;
    bool isElem = 0;
    int i = 0;
    std::cout << "Artikelnummer: "; std::cin >> inArtNr;

    while (!isElem && i < 50){
        if (arrStock[i].art.artNr == inArtNr){
            std::cout << "Stueckzahl: " << ++arrStock[i].pcs << std::endl;
            isElem = 1;
        } else
            i++;
    }
    if (!isElem){
        i = 0;
        // Sucht nach einer nicht beschriebenen Stelle
        while (arrStock[i].pcs != 0 && i < 50){
            i++;
        }
        if (i != 50){
            std::cout << "Preis: "; std::cin >> price;
            arrStock[i].pcs = 1;
            std::cout << "Stueckzahl: " << arrStock[i].pcs << std::endl;
            arrStock[i].art = article{inArtNr, price};
        }
        
    }

    return ++i;

}

int main(){

    stock arrStock[50];
    int cap = 0;
    bool stop = 0;
    int input;
    while (!stop){
        std::cout << "Auswahlmenue: (1) Artikel hinzufuegen; (0) beenden: "; std::cin >> input;
        switch(input){
            case 0: 
                stop = 1;
                break;
            case 1:
                if (cap < 50){
                    cap = addArticle(arrStock);
                } else {
                    std::cout << "Fehler - Element kann nicht hinzugefuegt werden" << std::endl;
                }
        }
        
    }

    std::cout << "Programm wird beendet!" << std::endl;
    //std::cout << "Capacity: " << cap << std::endl;

    return 0;
}