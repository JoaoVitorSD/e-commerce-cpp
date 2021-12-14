#include "celular.hpp"
#include <iostream>
#include <cstring>
#include <iomanip> 

// TODO: Inicialize aqui sua variavel estatica. Caso tenha optado por essa
// solucao.
int Celular::codig = 1;
Celular::Celular(std::string modelo,
                 std::string fabricante,
                 int armazenamento,
                 int memoria,
                 double peso,
                 std::string cor,
                 int qtd,
                 float valor)
{
  {
    this->modelo = modelo;
    this->fabricante = fabricante;
    this->armazenamento = armazenamento;
    this->memoria = memoria;
    this->peso = peso;
    this->cor = cor;
    this->qtd = qtd;
    this->valor = valor;
    this->cod = codig;
    codig++;
  }
  // TODO: Implemente este metodo
}
void Celular::printcel()
{
  if (this->qtd != 0)
  {

    int n = (this->cor).length();
    std::string st = (this->cor);
    char cora[12];
    strcpy(cora, st.c_str());
    int gramas = this->peso * 1000;
    cora[0] = toupper(cora[0]);
    std::cout << this->fabricante << " ";
    std::cout << this->modelo << ", ";
    std::cout << this->armazenamento << "GB, ";
    std::cout << this->memoria << "GB RAM, ";
    std::cout << gramas << " gramas, ";
    std::cout << cora << ", ";
    if (this->qtd != 1)
    {
      std::cout << this->qtd << " restantes, ";
    }
    else
    {
      std::cout << this->qtd << " restante, ";
    }
    std::cout<<std::setprecision(2);
    std::cout << std::fixed;
    std::cout << "R$ " << this->valor << std::endl;
  }
}
bool Celular::operator<(const Celular &other)
{
  // TODO: Implemente este metodo.
  // Preste atencao no exemplo que a descricao utilizada na ordenacao considera
  // a fabricante antes do modelo do celular

  return false;
}