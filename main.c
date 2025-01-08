#include <stdio.h>
#include <stdlib.h>

int main () {
    system("clear");
    int menu_opcao_escolhida = 0;
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
    scanf("%d", &menu_opcao_escolhida);
}