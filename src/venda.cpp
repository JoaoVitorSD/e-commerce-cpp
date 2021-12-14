#include "venda.hpp"

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string.h>
bool compara_FabMod(const Celular &first, const Celular &second)
{
  std::string celOne = first.fabricante + first.modelo;
  std::string celTwo = second.fabricante + second.modelo;
  return (strcmp(celOne.c_str(), celTwo.c_str()) < 0);
}
void Venda::adicionaCelular(const Celular &celular)
{
  m_celulares.insert(m_celulares.end(), celular);
}

void Venda::ordena()
{
  m_celulares.sort(compara_FabMod);
}

void Venda::recarregaEstoque(int cod, int qtd)
{
  std::list<Celular>::iterator it;
  it = m_celulares.begin();
  for (auto x : m_celulares)
  {
    if (x.cod == cod)
    {
      it->qtd += qtd;
      break;
    }
    ++it;
  }
}

void Venda::efetuaVenda(int cod, int qtd)
{
  std::list<Celular>::iterator it;
  it = m_celulares.begin();
  for (auto x : m_celulares)
  {
    if (x.cod == cod)
    {
      if (!(x.qtd < qtd))
      {
        it->qtd -= qtd;
      }
      break;
    }
    ++it;
  }
}

void Venda::aplicaDesconto(const std::string &fabricante, float desconto)
{
  float porcentagem;
  std::list<Celular>::iterator it;
  it = m_celulares.begin();
  std::cout<<porcentagem<<std::endl;
  for (auto x : m_celulares)
  {
    if (x.fabricante == fabricante)
    {
      it->valor -= it->valor*(desconto/100);
    }
    ++it;
  }
}

void Venda::removeModelo(int cod)
{
  std::list<Celular>::iterator it;
  it = m_celulares.begin();
  for (auto x : m_celulares)
  {
    if (x.cod == cod)
    {
      m_celulares.erase(it);
      break;
    }
    ++it;
  }
}

void Venda::imprimeEstoque() const
{
  for (auto x : m_celulares)
  {
    x.printcel();
  }
  // TODO: Implemente este metodo.
  /**
   * Aqui voce tera que imprimir a lista de celulares em estoque com as
   * restricoes descritas no enunciado do problema. Notem no exemplo que a
   * primeira letra da cor do celular fica maiuscula. Outra coisa, se houver
   * apenas um item em estoque de determinado modelo de celular, voce tera que
   * imprimir '1 restante' e nao '1 restantes'. Por ultimo, apenas modelos de
   * celulares com pelo menos um item em estoque deverao ser exibidos.
   */
}