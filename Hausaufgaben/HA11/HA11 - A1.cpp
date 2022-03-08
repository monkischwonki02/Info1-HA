#include <iostream>
#include <string>

struct paket{
    float length;
    float width;
    float height;
    float weight;
    std::string sender; // Ort des Absenders
    std::string reciever; // Ort des Empfängers
};

// Teilaufgabe 1
float summeAbmessung(paket p){
    float dim[] = {p.length, p.width, p.height};
    float temp;

    for (int i = 0; i < 3; i++){
        for (int j = i+1; j < 3; j++){
            if (dim[i] >= dim[j]){
                temp = dim[i];
                dim[i] = dim[j];
                dim[j] = temp;
            }
        }
    }

    return dim[0] + dim[2];
}

// Teilaufgabe 2
float ermittlePorto(paket p){
    float sumLen = summeAbmessung(p);

    if (p.weight <= 30 || sumLen <= 120){
        if (sumLen <= 50){
            if (p.sender == p.reciever) return 5*0.8;
            else return 5;
        } 
        else if (sumLen > 50 && sumLen <= 80){
            if (p.sender == p.reciever) return 7*0.8;
            else return 7;
        } 
        else if (sumLen > 80 && sumLen <= 120){
            if (p.sender == p.reciever) return 12*0.8;
            else return 0.8;
        }
    } 
    else {
        if (p.sender == p.reciever) return 35*0.8;
        else return 35;
    }
} 

int main(){

    float width, length, weight, height;
    std::string sender, receiver;

    std::cout << "Laenge des Pakets eigeben: "; std::cin >> length;
    std::cout << "Breite des Pakets eingeben: "; std::cin >> width;
    std::cout << "Hoehe des Pakets eingeben: "; std::cin >> height;
    std::cout << "Gewicht des Pakets eingeben: "; std::cin >> weight;
    std::cout << "Absendeort eingeben: "; std::cin >> sender;
    std::cout << "Zielort eingeben: "; std::cin >> receiver;

    paket p = {length, width, height, weight, sender, receiver};
    float porto = ermittlePorto(p);

    std::cout << std::endl << "Die Portogebuehren betragen " << porto << " Euro" << std::endl;

    return 0;
}