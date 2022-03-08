#include <iostream>
#include <cmath>

int zaehleQuadrate(int a, int b){
    int i = 0;
    int count = 0;
    while (pow(++i, 2) <= b){
        if (pow(i, 2) < a){
            continue;
        }
        
        std::cout << pow(i, 2) << " = " << i << " * " << i << std::endl;
        count++;
    }

    return count;
}

int main(){

    int a,b,res;

    std::cout << "Untere Grenze a: ";
    std::cin >> a;
    std::cout << "Obere Grenze b: ";
    std::cin >> b;

    if (a >= 1 && b >= a) {
        res = zaehleQuadrate(a,b);
        std::cout << "\nDie Anzahl der Quadrate ist " << res << std::endl;
    }
    else {
        std::cout << "Fehler" << std::endl;
    }
    return 0;
}