#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include "calculadoras.c" 

void menu() { // Imprime o menu principal
    
    system("@cls||clear");

    printf("-------------------------------------------------------\n");
    printf("    Seja bem-vindo(a) ao programa de c�lculos em C.\n");
    printf("-------------------------------------------------------\n");
    printf("Digite (1) para Calculadora Simplificada.\n");
    printf("Digite (2) para Calculadora de Presta��es e Descontos.\n");
    printf("Digite (3) para Calculadora de M�dias.\n");
    printf("Digite (4) para Calculadora de N�meros primos.\n");
    printf("\nDigite (5) para Sair.\n");
    printf("-------------------------------------------------------\n");

}

int main() {

    setlocale(LC_CTYPE, "Portuguese"); 
    /* Afeta somente os caracteres (diferente do LC_ALL que muda todo o padr�o para determinada lingua).
    Para preservar o uso de ponto (padr�o Norte-Americano) ao inv�s de v�rgula (padr�o Brasileiro) para numeros decimais */
    // OBS.: Caso compilado no linux, � necess�rio converter o encoding desse arquivo de ISO-8859-1 para UTF-8

    int opcao;
    bool opcaoInvalida = false;

    bool repetir = true;

    while(repetir) { // Repete o programa at� que o usu�rio digite 5

        menu();

        if( opcaoInvalida ) { //Mensagem de erro para opcoes invalidas

            printf("           Opcao invalida! Digite novamente.\n");
            printf("-------------------------------------------------------\n");

        }

        opcaoInvalida = false;

        printf(">> ");
        scanf("%d", &opcao);

        system("@cls||clear");


        switch(opcao) {

            case 1: 

                calculadora_simplificada();
                break;

            case 2: 
                
                calculadora_de_prestacoes_e_descontos();
                break;

            case 3: 

                calculadora_de_medias();
                break;

            case 4: 

                calculadora_de_numeros_primos();
                break;
            
            case 5: // Imprime mensagem de agradecimento e finaliza o programa

                system("@cls||clear");

                printf("-----------------------------------------------------------------\n");
                printf("Obrigado por utilizar o programa de c�lculos em C. At� a pr�xima!\n");
                printf("-----------------------------------------------------------------\n");
                printf("  \n");

                
                printf("Pressione Enter Para Finalizar o Programa. . .");
                getchar();
                getchar(); 
                /* Solucao para pausar o programa escolhida por ser versatil entre windows e linux  
                (sao executados dois getchar(); nesse caso porque o primeiro consome o '\n'
                pendente no buffer quando o usu�rio pressiona enter) */

                system("@cls||clear");

                repetir = false;
                break;

            default:

                opcaoInvalida = true;
                break;

        }

    }

    return 0;
}