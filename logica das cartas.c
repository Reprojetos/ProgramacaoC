#include <iostream>
#include <vector>
#include <map>

// Definição da classe Pais
class Pais {
public:
  std::string nome;
  double pib;
  double populacao;
  double area;
  double idh;

  Pais(std::string nome, double pib, double populacao, double area, double idh) :
    nome(nome), pib(pib), populacao(populacao), area(area), idh(idh) {}
};

// Função para comparar dois países
Pais compararPaises(Pais pais1, Pais pais2, std::string categoria) {
  if (categoria == "PIB") {
    return pais1.pib > pais2.pib ? pais1 : pais2;
  } else if (categoria == "População") {
    return pais1.populacao > pais2.populacao ? pais1 : pais2;
  } else if (categoria == "Área") {
    return pais1.area > pais2.area ? pais1 : pais2;
  } else if (categoria == "IDH") {
    return pais1.idh > pais2.idh ? pais1 : pais2;
  } else {
    std::cout << "Categoria inválida." << std::endl;
    return pais1; // Retorna um país aleatório ou lida com o erro
  }
}

int main() {
  // Criar alguns países
  Pais brasil("Brasil", 2.2e12, 210e6, 8.5e6, 0.76);
  Pais estadosUnidos("Estados Unidos", 2.5e12, 330e6, 9.8e6, 0.94);

  // Escolher uma categoria de comparação
  std::string categoria = "PIB";

  // Comparar os países
  Pais vencedor = compararPaises(brasil, estadosUnidos, categoria);

  // Mostrar o resultado
  std::cout << "O vencedor é: " << vencedor.nome << std::endl;

  return 0;
}