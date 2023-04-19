// ASCII_Graphic.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include "Plotter.h"
#include <iostream>
#include <array>

int main()
{
    Plotter plotter;

    std::array<double, 100> matrix_y;

    for (size_t i = 0; i < matrix_y.size(); i++)
    {
        matrix_y[i] = 0;
    }
    matrix_y[32] = -5;
    matrix_y[88] = 14;
   
    plotter.plotGraphic(matrix_y);

    std::cout << "Hello World!\n" << std::endl;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
