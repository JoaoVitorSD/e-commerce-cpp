#include <iostream>
#include "celular.hpp"
#include "venda.hpp"
using namespace std;
int main(){
    srand(time(NULL));
    Venda trade;
    Celular cel1("Galaxy M22", "Samsung", 128, 4, 0.186, "preto", 10, 1349);
    Celular cel2("Moto G50", "Motorola", 128, 4, 0.206, "azul", 10, 1799);
    Celular cel3("iPhone 12 Pro", "Apple", 512, 6, 0.206, "branco", 10, 6974);

    trade.adicionaCelular(cel1);
    trade.adicionaCelular(cel2);
    trade.adicionaCelular(cel3);
    trade.ordena();
    trade.efetuaVenda(cel2.cod,5);
    trade.efetuaVenda(cel1.cod,6);
    trade.efetuaVenda(cel3.cod,4);
    trade.imprimeEstoque();
    return 0;
}
