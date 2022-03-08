#include <iostream>
#include <string>

void redact(std::string& text, std::string& chars){
    for (auto i = chars.begin(); i != chars.end(); ++i){
        while (text.find(*i) != -1){
            text.replace(text.find(*i), 1, "*");
        }
    }

}

int main(){

    std::string text, chars;

    std::cout << "Text eingeben: "; std::getline(std::cin, text);
    std::cout << "Zeichenkette eingeben: ";
    // die Zeichenkette ohne whitespace eingeben
    std::cin >> chars;
    redact(text, chars);
    std::cout << text << std::endl;
    
    return 0;
}