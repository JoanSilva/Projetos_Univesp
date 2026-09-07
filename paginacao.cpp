#include <iostream>
#include <vector>

using namespace std;

// Struct que simula uma entrada na Tabela de Páginas
typedef struct {
    int frame_id;    // Mapeamento para o Frame na RAM física
    bool valido;     // bit de validade: true = na RAM, false = no disco (Swap)
} Pagina;

int main() {
    // Simulando uma tabela com 4 páginas virtuais
    vector<Pagina> tabela_de_paginas(4);

    // Mapeando algumas páginas para a RAM (Frames) e outras deixando no disco (Swap)
    tabela_de_paginas[0] = {2, true};   // Página 0 está no Frame 2 da RAM
    tabela_de_paginas[1] = {-1, false}; // Página 1 está no DISCO (Vai gerar Page Fault!)
    tabela_de_paginas[2] = {0, true};   // Página 2 está no Frame 0 da RAM
    tabela_de_paginas[3] = {1, true};   // Página 3 está no Frame 1 da RAM

    // Simulando o processador tentando acessar a Página 1
    int pagina_solicitada = 2;
    
    cout << "--- Simulador de MMU / Paginação (Univesp S8) ---" << endl;
    cout << "Acessando a Página Virtual: " << pagina_solicitada << endl;

    if (tabela_de_paginas[pagina_solicitada].valido) {
        cout << "Sucesso! Dado encontrado na RAM no Frame: " 
             << tabela_de_paginas[pagina_solicitada].frame_id << endl;
    } else {
        cout << "🚨 ALERTA: PAGE FAULT! A pagina " << pagina_solicitada 
             << " nao esta na RAM. Buscando no Swap do HD..." << endl;
    }

    return 0;
}
