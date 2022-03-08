#include <iostream>
#include <string>

std::string reorder(const std::string& name){
    int lastInd = name.rfind(" ");
    return name.substr(lastInd+1) + ", " + name.substr(0, lastInd);

}

int main(){

    std::string name;
    std::cout << "Name eingeben: "; std::getline(std::cin, name);

    std::cout << reorder(name) << std::endl;
    return 0;
}
