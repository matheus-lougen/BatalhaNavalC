#include <stdio.h>
#include <stdlib.h>

int main () {
    int menu_principal_opcao_escolhida = 0;
    int config_tamanho_do_campo = 15;
    int menu_principal_estado_atual = 0; // 0: Jogo não inciado, 1: Jogo iniciado

    while (menu_principal_estado_atual == 0) {
        system("clear");
        printf("\n                                     # #  ( )\n");
        printf("                                  ___#_#___|__\n");
        printf("                              _  |____________|  _\n");
        printf("                       _=====| | |            | | |==== _\n");
        printf("                 =====| |.---------------------------. | |====\n");
        printf("   <--------------------'   .  .  .  .  .  .  .  .   '--------------/\n");
        printf("     \\                                                             /\n");
        printf("      \\___________________________________________________________/\n");
        printf("  wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
        printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
        printf("   wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
        printf("\nBem-vindo ao jogo de batalha naval\n");
        printf("Desenvolvido por Matheus Lougen e Jonathan\n");
        printf("\nMenu principal:\n");
        printf("1. Novo jogo: Inciar um novo jogo.\n");
        printf("2. Configurações: Escolha o tamanho do campo.\n");
        printf("3. Sair: Fechar a aplicação (CTRL + C).\n");
        printf("\nEscolha uma opção (1, 2, 3): ");
        scanf("%d", &menu_principal_opcao_escolhida);

        switch (menu_principal_opcao_escolhida) {
            case 1: // Novo jogo
                break;
            case 2: // Menu de configurações
                int config_novo_tamanho_do_campo;
                int menu_config_estado_atual = 0;
                system("clear");
                printf("Menu de configuração:\n");
                printf("O tamanho do campo atual é de %d posições.\n", config_tamanho_do_campo);
                while (menu_config_estado_atual == 0)
                {
                    printf("O tamanho mínimo do campo é de 15 posições\n");
                    printf("Digite o novo tamanho para o campo (Ex. 20): ");
                    scanf("%d", &config_novo_tamanho_do_campo);
                    if (config_novo_tamanho_do_campo >= 15)
                    {
                        menu_config_estado_atual = 1;
                        config_tamanho_do_campo = config_novo_tamanho_do_campo;
                    }  
                }
                break;

            case 3: // Fechar a aplicação
                break;
            
            default:
                break;
        }
    
    
    }
}