#include <iostream>
#include <bitset>

int main() {
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    std::bitset<32> binario(numero);

    std::string binario_str = binario.to_string();
    size_t inicio = binario_str.find('1');

    if(inicio != std::string::npos) {

        std::cout << "O numero em binario e: " << binario_str.substr(inicio) << std::endl;
    } else {
        
        std::cout << "O numero em binario e: 0" << std::endl;
    }

    return 0;
}
