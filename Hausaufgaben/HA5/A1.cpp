// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 21200260; 221200827

#include <iostream>
#include <cmath>
int zaehleQuadrate(int a, int b){
    int i = 0;
    int count = 0;
    while (pow(++i, 2) <= b){
        if (pow(i, 2) < a && a != 0){
            continue;
        } else if (a == 0){
            std::cout << "0 = 0 * 0" << std::endl; // Fall, wenn a = 0;
            count++;
        }
        std::cout << pow(i, 2) << " = " << i << " * " << i << std::endl;
        count++;
    }

    return count;
}

int main(){

    int a,b;

    std::cout << "Untere Grenze a: ";
    std::cin >> a;
    std::cout << "Untere Grenze b: ";
    std::cin >> b;

    int res = zaehleQuadrate(a,b);

    std::cout << "\nDie Anzahl der Quadrate ist " << res << std::endl;
    return 0;
}