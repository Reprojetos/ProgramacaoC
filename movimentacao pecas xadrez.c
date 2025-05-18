#include <iostream>
#include <string>

class Pais {
public:
    std::string nome;
    int pib;      // Produto Interno Bruto em bilhões
    int populacao; // População em milhões
    int area;     // Área territorial em km²

    Pais(std::string n, int p, int pop, int a) : nome(n), pib(p), populacao(pop), area(a) {}

    int comparar(Pais outro, std::string categoria) {
        if (categoria == "PIB") return pib > outro.pib ? 1 : (pib < outro.pib ? -1 : 0);
        if (categoria == "População") return populacao > outro.populacao ? 1 : (populacao < outro.populacao ? -1 : 0);
        if (categoria == "Área") return area > outro.area ? 1 : (area < outro.area ? -1 : 0);
        return 0; // Empate ou categoria inválida
    }
};

int main() {
    Pais brasil("Brasil", 2200, 214, 8516000);
    Pais eua("EUA", 25000, 331, 9834000);

    std::string categoria = "PIB"; // Escolha da categoria

    int resultado = brasil.comparar(eua, categoria);

    std::cout << "Comparação na categoria " << categoria << ":\n";
    if (resultado == 1)
        std::cout << brasil.nome << " vence!\n";
    else if (resultado == -1)
        std::cout << eua.nome << " vence!\n";
    else
        std::cout << "Empate!\n";

    return 0;
}
