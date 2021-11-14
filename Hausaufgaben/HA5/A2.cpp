// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 21200260; 221200827
#include <iostream>

// Add two numbers a+b
double add(double a, double b){
    return a+b;
}
// subtract two numbers a-b
double sub(double a, double b){
    return a-b;
}
// multiply two numbers a*b
double mul(double a, double b){
    return a*b;
}
// divide two numbers a/b
double div(double a, double b){
    return (double) a/b;
}

int main(){

    double a,b,res;
    char op; // Operator
    std::cout << "Geben Sie einen Operator ein (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Geben Sie zwei Zahlen ein:"<< std::endl;
    std::cin >> a;
    std::cin >> b;
    switch (op){
        case '+':   
            std::cout << "Ergebnis: " << add(a,b) << std::endl;
            break;
        case '-':
            std::cout << "Ergebnis: " << sub(a,b) << std::endl;
            break;
        case '*':
            std::cout << "Ergebnis: " << mul(a,b) << std::endl;
            break;
        case '/':
            if (b == 0)
                std::cout << "division by zero is not possible" << std::endl;
            else {
                std::cout << "Ergebnis: " << div(a,b) << std::endl;
            }
            break;
        default:
            std::cout << "Du hast einen falschen Operator eingegeben" << std::endl;
            break;
                    
    }

    return 0;
}
