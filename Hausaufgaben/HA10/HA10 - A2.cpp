// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 221200260; 221200827
#include <iostream>
#include <string>

bool checkPalindrom(int a[], int len){
    for (int i = 0; i < len; i++){
        if (a[i] != a[len-(i+1)]){
            return 0;
        }
    }
    return 1;
}

int main(){

    std::string in;
    std::cout << "Bitte geben Sie eine Binaerzahl ein: "; std::cin >> in;
    
    int num[in.length] = {0};

    for (int i = 0; i < in.length; i++){
        num[i] = (int) in[i];
    }

    if (checkPalindrom(num, in.length)) std::cout << "Palindrom" << std::endl;
    else std::cout << "Kein Palindrom" << std::endl;

    return 0;
}