// ASCII_Graphic.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include "Plotter.h"
#include <iostream>
#include <array>

void clear()
{
    std::cout << "\x1B[2J\x1B[H";
}

void normalizeArray(int& array, int start, int end)
{

}


int main()
{
    

    std::array<double, 100> matrix_y;

    for (int i = 0; i < matrix_y.size(); i++)
    {
        matrix_y[i] = 1-i*0.1;
        
    }

    std::array<double, 100> matrix_y2;
    for (int i = 0; i < matrix_y2.size(); i++)
    {
        matrix_y2[i] = sin(0.1*i);
        
    }

    std::array<double, 100> matrix_y3;
    for (int i = 0; i < matrix_y3.size(); i++)
    {
        matrix_y3[i] = pow(i,2);

    }

    Plotter plotter;
    plotter.plotGraphic(matrix_y);
    plotter.plotGraphic(matrix_y2);
    plotter.plotGraphic(matrix_y3);
    
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
