#include "calculadoras.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void calculadora_simplificada() { 

    int opcao;
    bool opcaoInvalida = false;
    double valor1, valor2, resultado; 
    
    bool repetir = true;

    while(repetir) { // Repete a calculadora caso o usuário deseje

        printf("----------------------------------\n");
        printf("     Calculadora Simplificada\n");
        printf("----------------------------------\n");

        printf("(1) Soma\n");
        printf("(2) Subtração\n");
        printf("(3) Multiplicação\n");
        printf("(4) Divisão\n");
        printf("(5) Potenciação\n");
        printf("(6) Radiciação\n");
        printf("\n(0) Voltar\n");

        if(opcaoInvalida) {

            printf("----------------------------------\n");
            printf("Opção inválida! Digite novamente.\n");
        
        }

        opcaoInvalida = false;

        printf("----------------------------------\n");
        printf("Qual operação deseja realizar? ");
        scanf("%d", &opcao);

        system("@cls||clear");
        
        bool checarCaractere = false;
        switch(opcao) {

            case 0: // Volta para o menu principal

                checarCaractere = false;
                repetir = false;
                break;

            case 1: // SOMA

                printf("----------\n");
                printf("   Soma\n");
                printf("----------\n");

                printf("Valor 1: ");
                scanf("%lf", &valor1);

                printf("Valor 2: ");
                scanf("%lf", &valor2);

                resultado = valor1 + valor2;
                
                if( ((valor1 - floor(valor1)) != 0) || ((valor2 - floor(valor2)) != 0) || ((resultado - floor(resultado)) != 0) ) {

                    printf("--------------------\n");
                    printf("%.2lf + %.2lf = %.2lf\n", valor1, valor2, resultado);
                    printf("--------------------\n");

                }
                else {

                    printf("----------\n");
                    printf("%.0lf + %.0lf = %.0lf\n", valor1, valor2, resultado);
                    printf("----------\n");

                }

                break;

            case 2: // SUBTRACAO

                printf("-----------\n");
                printf(" Subtração\n");
                printf("-----------\n");

                printf("Valor 1: ");
                scanf("%lf", &valor1);

                printf("Valor 2: ");
                scanf("%lf", &valor2);

                resultado = valor1 - valor2;

                if( ((valor1 - floor(valor1)) != 0) || ((valor2 - floor(valor2)) != 0) || ((resultado - floor(resultado)) != 0) ) {

                    printf("--------------------\n");
                    printf("%.2lf - %.2lf = %.2lf\n", valor1, valor2, resultado);
                    printf("--------------------\n");

                }
                else {

                    printf("-----------\n");
                    printf("%.0lf - %.0lf = %.0lf\n", valor1, valor2, resultado);
                    printf("-----------\n");

                }

                break;

            case 3: // MULTIPLICACAO

                printf("---------------\n");
                printf(" Multiplicação\n");
                printf("---------------\n");

                printf("Valor 1: ");
                scanf("%lf", &valor1);

                printf("Valor 2: ");
                scanf("%lf", &valor2);

                resultado = valor1 * valor2;

                if( ((valor1 - floor(valor1)) != 0) || ((valor2 - floor(valor2)) != 0) || ((resultado - floor(resultado)) != 0) ) {

                    printf("--------------------\n");
                    printf("%.1lf * %.1lf = %.1lf\n", valor1, valor2, resultado);
                    printf("--------------------\n");

                }
                else {

                    printf("---------------\n");
                    printf("%.0lf * %.0lf = %.0lf\n", valor1, valor2, resultado);
                    printf("---------------\n");

                }
                break;

            case 4: // DIVISAO

                printf("----------------\n");
                printf("     Divisão\n");
                printf("----------------\n");

                printf("Dividendo: ");
                scanf("%lf", &valor1);

                printf("Divisor: ");
                scanf("%lf", &valor2);

                if(valor2 == 0) {

                    printf("----------------------------\n");
                    printf("Nao existe divisão por zero!\n");
                    printf("----------------------------\n");
                
                }
                else {

                    resultado = (double)valor1 / (double)valor2;

                    if( ((valor1 - floor(valor1)) == 0) && ((valor2 - floor(valor2)) == 0) && ((resultado - floor(resultado)) == 0) ) {

                        printf("----------------\n");
                        printf("%.0lf / %.0lf = %.0lf\n", valor1, valor2, resultado);
                        printf("----------------\n");

                    }
                    else {

                        printf("----------------\n");
                        printf("%.1lf / %.1lf = %.1lf\n", valor1, valor2, resultado);
                        printf("----------------\n");

                    }
               
                }

                break;

            case 5: // POTENCIACAO

                printf("-------------------\n");
                printf("    Potenciação\n");
                printf("-------------------\n");

                printf("Base: ");
                scanf("%lf", &valor1);

                printf("Expoente: ");
                scanf("%lf", &valor2);
                
                resultado =  pow(valor1, valor2);

                if( ( (valor1 - floor(valor1)) != 0) || ((valor2 - floor(valor2)) != 0) || ((resultado - floor(resultado)) != 0) ) {

                    printf("-------------------\n");
                    printf("%.1lf elevado à %.1lf = %.3lf\n", valor1, valor2, resultado);
                    printf("-------------------\n");
                    
                }
                else {
                        
                    printf("-------------------\n");
                    printf("%.0lf elevado à %.0lf = %.0lf\n", valor1, valor2, resultado);
                    printf("-------------------\n");
                    
                }

                break;

            case 6: // RADICIACAO

                printf("------------------\n");
                printf("    Radiciação\n");
                printf("------------------\n");

                printf("Índice: ");
                scanf("%lf", &valor1);

                printf("Radicando: ");
                scanf("%lf", &valor2);

                if( (valor2 < 0) && ((int)valor1 % 2 == 0) ) { // Checa se o índice é par e se o radicando é negativo

                    printf("----------------------------------------------------\n");
                    printf("Não existe raiz com índice par e radicando negativo!\n");
                    printf("----------------------------------------------------\n");

                }
                else if( valor2 < 0 ) { // Caso o radicando seja negativo 
                    
                    resultado = pow(abs(valor2), ( 1 / valor1 )) * -1;

                    if( (resultado - floor(resultado)) != 0 ) { // Imprime mensagem personalizada de acordo com o resultado (inteiro ou com parte decimal)
                        
                        printf("-----------------------------------------\n");
                        printf("Raiz %.1lf de %.1lf é aproximadamente: %.3lf\n", valor1, valor2, resultado);
                        printf("-----------------------------------------\n");
                    
                    }
                    else {

                        printf("------------------\n");
                        printf("Raiz %.0lf de %.0lf é %.0lf\n", valor1, valor2, resultado);
                        printf("------------------\n");
                    
                    }

                }
                else { // Caso ambos sejam positivos

                    resultado = pow( valor2, ( 1 / valor1 ) );

                    if( (resultado - floor(resultado)) != 0 ) { // Imprime mensagem personalizada de acordo com o resultado (inteiro ou com parte decimal)

                        printf("-----------------------------------------\n");
                        printf("Raiz %.1lf de %.1lf é aproximadamente: %.3lf\n", valor1, valor2, resultado);
                        printf("-----------------------------------------\n");
                    
                    }
                    else {

                        printf("------------------\n");
                        printf("Raiz %.0lf de %.0lf é %.0lf\n", valor1, valor2, resultado);
                        printf("------------------\n");
                    
                    }

                }

                break;

            default:
                
                checarCaractere = false;
                opcaoInvalida = true;
                break;

        }

        if( opcao >= 1 && opcao <= 6 ) {

            checarCaractere = true;

        }

        while( checarCaractere ) {

            char caractere[2];

            printf("\nDeseja realizar outra operação? (s/n) ");
            scanf("%s", caractere);

            if( caractere[1] == '\0' && ((caractere[0] == 's') || (caractere[0] == 'S') || (caractere[0] == 'n') || (caractere[0] == 'N')) ) {

                if( (caractere[0] == 's') || (caractere[0] == 'S') ) {
                
                    system("@cls||clear");

                    repetir = true;
                    checarCaractere = false;
            
                }
                else if( (caractere[0] == 'n') || (caractere[0] == 'N') ) {
                
                    repetir = false;
                    checarCaractere = false;
            
                }

            }
            else {
                
                system("@cls||clear");

                printf("---------------------------------\n");
                printf("Opção inválida! Digite Novamente:\n");
                printf("---------------------------------");
            
            }
            
        }

    }

}

void calculadora_de_prestacoes_e_descontos() {

    int opcao, quantidadeDeParcelas;
    double valor, valorComDesconto, parcelas;

    bool repetir = true;

    while(repetir) { // Repete a calculadora caso o usuário deseje
        
        printf("-------------------------------------\n");
        printf("Calculadora de Prestações e Descontos\n");
        printf("-------------------------------------\n");

        printf("Valor do Produto: R$");
        scanf("%lf", &valor);
        
        printf("----------------------\n");
        printf("(1)À vista\n");
        printf("(2)À Prazo\n");
        printf("----------------------\n");
        printf("Método de Pagamento: ");
        
        bool ChecarOpcao = true;

        while( ChecarOpcao ) { // Checa se o usuário digitou uma opcao invalida e pede para digitar novamente

            scanf("%d", &opcao);
            
            if(opcao == 1) { // Pagamento a vista

                valorComDesconto = valor - (valor * 0.1);
                
                printf("-----------------------\n");
                printf("O valor ficará: R$%.2lf\n", valorComDesconto);
                printf("-----------------------\n");
                
                ChecarOpcao = false;

            }
            else if(opcao == 2) { // Pagamento Parcelado
                
                bool checarParcelas = true;
                while(checarParcelas) { // Repete caso o usuário insira quantidade de parcelas invalida

                    printf("Quantas parcelas? ");
                    scanf("%d", &quantidadeDeParcelas);

                    if(quantidadeDeParcelas < 1) { // Checa se a quantidade inserida é válida e caso contrario reimprime com mensagem de erro

                        system("@cls||clear");

                        printf("-------------------------------------\n");
                        printf("Calculadora de Prestações e Descontos\n");
                        printf("-------------------------------------\n");
                        printf("Valor do Produto: R$%.2lf\n", valor);
                        printf("----------------------\n");
                        printf("(1)À vista\n");
                        printf("(2)Parcelado\n");
                        printf("----------------------\n");
                        printf("Método de Pagamento: %d\n", opcao);
                        printf("----------------------\n");
                        printf("Parcelamento Inválido!\n");
                        printf("----------------------\n");

                        checarParcelas = true;

                    }
                    else { // Quebra a checagem (quantidade de parcelas valida)

                        checarParcelas = false;
                    
                    }

                }

                parcelas = valor / quantidadeDeParcelas; 
                
                system("@cls||clear");

                printf("-------------------------------------\n");
                printf("Calculadora de Prestações e Descontos\n");
                printf("-------------------------------------\n");
                printf("Valor do Produto: R$%.2lf\n", valor);
                printf("----------------------\n");
                printf("(1)À vista\n");
                printf("(2)Parcelado\n");
                printf("----------------------\n");
                printf("Método de Pagamento: %d\n", opcao);
                printf("Quantas parcelas? %d\n", quantidadeDeParcelas);
                printf("----------------------------------\n");
                printf("Voce pagará %d parcelas de R$%.2lf\n", quantidadeDeParcelas, parcelas);
                printf("----------------------------------\n");

                ChecarOpcao = false;

            }
            else { // Usuario digitou opcao invalida: Reimprime o programa e mostra mensagem de erro

                system("@cls||clear");

                printf("-------------------------------------\n");
                printf("Calculadora de Prestações e Descontos\n");
                printf("-------------------------------------\n");
                printf("Valor do Produto: R$%.2lf\n", valor);
                printf("----------------------\n");
                printf("(1)À vista\n");
                printf("(2)Parcelado\n");
                printf("----------------------\n");
                printf("Opção inválida!\n");
                printf("----------------------\n");
                printf("Digite Novamente: ");

                ChecarOpcao = true;

            }

        }
        
        char caractere[2];
        bool ChecarOpcaoParaRepetir = true;

        while( ChecarOpcaoParaRepetir ) { // checa a opcao do usuario e repete caso necessario
                
            printf("\nDeseja fazer outra consulta? (s/n) ");
            scanf("%s", caractere);

            if( caractere[1] == '\0' && ((caractere[0] == 's' || caractere[0] == 'S') || (caractere[0] == 'n' || caractere[0] == 'N')) ) {
                    
                if(caractere[0] == 's' || caractere[0] == 'S') {

                    system("@cls||clear");
                    repetir = true;
                    ChecarOpcaoParaRepetir = false;

                }
                else if(caractere[0] == 'n' || caractere[0] == 'N') {

                    repetir = false;
                    ChecarOpcaoParaRepetir = false;
                
                }

            }
            else {

                ChecarOpcaoParaRepetir = true;
                
            }

            if(ChecarOpcaoParaRepetir) { // Reimprime o resultado da consulta e imprime mensagem de erro

                system("@cls||clear");

                printf("-------------------------------------\n");
                printf("Calculadora de Prestações e Descontos\n");
                printf("-------------------------------------\n");
                printf("Valor do Produto: R$%.2lf\n", valor);
                printf("----------------------\n");
                printf("(1)À vista\n");
                printf("(2)Parcelado\n");
                printf("----------------------\n");
                printf("Método de Pagamento: %d\n", opcao);

                if(opcao == 1) {
                    
                    printf("-----------------------\n");
                    printf("O valor ficará: R$%.2lf\n", valorComDesconto);
                    printf("-----------------------\n");

                }
                else if (opcao == 2) {
                    
                    printf("Quantas parcelas? %d\n", quantidadeDeParcelas);
                    printf("----------------------------------\n");
                    printf("Voce pagará %d parcelas de R$%.2lf\n", quantidadeDeParcelas, parcelas);
                    printf("----------------------------------\n");

                }

                printf("\n>> Opção inválida! <<");
                    
            }

        }

    }

}

void calculadora_de_medias() { 

    int faltas;
    double AV1, AV2, AV3, AVD, soma, media;

    bool repetir = true;

    while(repetir) { // Repete a consulta caso o usuário deseje

        printf("------------------------------\n");
        printf("     Calculadora de Média\n");
        printf("------------------------------\n");
        
        
        printf("Quantidade de faltas: ");
        scanf("%d", &faltas);
                
        if(faltas > (16 * 0.25)) { // Checa se o aluno esta reprovado por falta

            printf("--------------------------\n");
            printf("Aluno Reprovado por falta!\n");
            printf("--------------------------\n");

        }
        else { // Prossegue pra checagem das notas

            printf("Nota AV1: ");

            bool ChecarNota = true;

            while( ChecarNota ) { // Checagem da AV1
                
                scanf("%lf", &AV1);

                if(AV1 >= 0 && AV1 <= 10) {
                    
                    ChecarNota = false;
                
                }
                else {

                    system("@cls||clear");

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf(">> NOTA INVÁLIDA! <<\n");
                    printf("Nota AV1: ");
                
                }

            }

            system("@cls||clear");

            printf("------------------------------\n");
            printf("     Calculadora de Média\n");
            printf("------------------------------\n");
            printf("Quantidade de faltas: %d\n", faltas);
            printf("Nota AV1: %.1lf\n", AV1);
            printf("Nota AV2: ");
            
            ChecarNota = true;

            while(ChecarNota) { // Checagem da AV2
                
                scanf("%lf", &AV2);

                if(AV2 >= 0 && AV2 <= 10) {
                    
                    ChecarNota = false;
                
                }
                else {

                    system("@cls||clear");

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("Nota AV1: %.1lf\n", AV1);
                    printf(">> NOTA INVÁLIDA! <<\n");
                    printf("Nota AV2: ");
                
                }

            }
            
            if( AV1 < 4 && AV2 < 4 ) { // Checa se a AV1 e a AV2 estão abaixo de 4

                system("@cls||clear");

                printf("------------------------------\n");
                printf("     Calculadora de Média\n");
                printf("------------------------------\n");
                printf("Quantidade de faltas: %d\n", faltas);
                printf("Nota AV1: %.1lf\n", AV1);
                printf("Nota AV2: %.1lf\n", AV2);
                printf("--------------------------------------\n");
                printf("Aluno Reprovado! Nota(s) inferior à 4.\n");
                printf("--------------------------------------\n");

            }
            else { // Procede pra checagem da AV3

                system("@cls||clear");

                printf("------------------------------\n");
                printf("     Calculadora de Média\n");
                printf("------------------------------\n");
                printf("Quantidade de faltas: %d\n", faltas);
                printf("Nota AV1: %.1lf\n", AV1);
                printf("Nota AV2: %.1lf\n", AV2);
                printf("Nota AV3: ");
                
                ChecarNota = true;

                while(ChecarNota) { // Checagem da AV3
                    
                    scanf("%lf", &AV3);

                    if(AV3 >= 0 && AV3 <= 10) {
                        
                        ChecarNota = false;

                    }
                    else {

                        system("@cls||clear");

                        printf("------------------------------\n");
                        printf("     Calculadora de Média\n");
                        printf("------------------------------\n");
                        printf("Quantidade de faltas: %d\n", faltas);
                        printf("Nota AV1: %.1lf\n", AV1);
                        printf("Nota AV2: %.1lf\n", AV2);
                        printf(">> NOTA INVÁLIDA! <<\n");
                        printf("Nota AV3: ");
                    
                    }

                }

                
                if( (AV1 < 4 || AV2 < 4) && AV3 < 4 ) { // Checa se existe nota menor que 4 e se é possí­vel substituí-la pela AV3

                    printf("--------------------------------------\n");
                    printf("Aluno Reprovado! Nota(s) inferior à 4.\n");
                    printf("--------------------------------------\n");
                
                }
                else { // Procede pra checagem da AVD

                    system("@cls||clear");

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("Nota AV1: %.1lf\n", AV1);
                    printf("Nota AV2: %.1lf\n", AV2);
                    printf("Nota AV3: %.1lf\n", AV3);
                    printf("Nota AVD: ");

                    ChecarNota = true;

                    while(ChecarNota) { // Checagem da AVD
                        
                        scanf("%lf", &AVD);

                        if(AVD >= 0 && AVD <= 10) {

                            ChecarNota = false;
                        
                        }
                        else {

                            system("@cls||clear");

                            printf("------------------------------\n");
                            printf("     Calculadora de Média\n");
                            printf("------------------------------\n");
                            printf("Quantidade de faltas: %d\n", faltas);
                            printf("Nota AV1: %.1lf\n", AV1);
                            printf("Nota AV2: %.1lf\n", AV2);
                            printf("Nota AV3: %.1lf\n", AV3);
                            printf(">> NOTA INVÁLIDA! <<\n");
                            printf("Nota AVD: ");
                        
                        }

                    }

                    system("@cls||clear");

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("Nota AV1: %.1lf\n", AV1);
                    printf("Nota AV2: %.1lf\n", AV2);
                    printf("Nota AV3: %.1lf\n", AV3);
                    printf("Nota AVD: %.1lf\n", AVD);

                    if( AVD < 4 ) { // Checa se a AVD está abaixo de 4

                        printf("--------------------------------------\n");
                        printf("Aluno Reprovado! Nota(s) inferior à 4.\n");
                        printf("--------------------------------------\n");
                
                    }
                    else { // Procede pro Cálculo da Média
                        
                        if(AV1 < AV2 && AV1 < AV3) { //determina se a AV3 pode substituir a AV1 ou AV2 e faz o calculo da media
                                
                            soma = AV2 + AV3 + AVD;
                            
                        }
                        else if(AV2 < AV3) {
                                
                            soma = AV1 + AV3 + AVD;
                            
                        }
                        else {
                                
                            soma = AV1 + AV2 + AVD;
                        }
                            
                        media = soma / 3;

                            
                        if(media >= 6) { //determina se a nota é menor que 6 e Imprime o status de aprovação do aluno
                            
                            printf("------------------------------\n");
                            printf("       Aluno Aprovado!\n");
                            printf("       Nota Final: %.1lf\n", media);
                            printf("------------------------------\n");
                            
                        }
                        else {
                                
                            printf("----------------------------------\n");
                            printf("        Aluno Reprovado!\n");
                            printf("Nota final abaixo da média -> %.1f\n", media);
                            printf("----------------------------------\n");
                            
                        }
                        
                    }
                    
                }

            }

        }

        bool checarOpcao = true;
        char opcao[2];
                
        while( checarOpcao ) { 
                    
            printf("\nDeseja fazer outra consulta? (s/n) ");
            scanf(" %s", opcao);

            if( opcao[1] == '\0' && ((opcao[0] == 's' || opcao[0] == 'S') || (opcao[0] == 'n' || opcao[0] == 'N')) ) {
                        
                if( opcao[0] == 's' || opcao[0] == 'S' ) {

                    system("@cls||clear");

                    repetir = true;
                    checarOpcao = false;

                }
                else if(opcao[0] == 'n' || opcao[0] == 'N') {

                    repetir = false;
                    checarOpcao = false;
                    
                }

            }
            else { 

                checarOpcao = true;
                    
            }

            if(checarOpcao) { // Reimprime o resultado da consulta e imprime mensagem de erro

                system("@cls||clear");

                if(faltas > (16 * 0.25)) {

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("--------------------------\n");
                    printf("Aluno Reprovado por falta!\n");
                    printf("--------------------------\n");

                }
                else if( AV1 < 4 && AV2 < 4 ) {
                    
                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("Nota AV1: %.1lf\n", AV1);
                    printf("Nota AV2: %.1lf\n", AV2);
                    printf("--------------------------------------\n");
                    printf("Aluno Reprovado! Nota(s) inferior à 4.\n");
                    printf("--------------------------------------\n");

                }
                else if( (AV1 < 4 || AV2 < 4) && AV3 < 4 ) {

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("Nota AV1: %.1lf\n", AV1);
                    printf("Nota AV2: %.1lf\n", AV2);
                    printf("Nota AV3: %.1lf\n", AV3);
                    printf("--------------------------------------\n");
                    printf("Aluno Reprovado! Nota(s) inferior à 4.\n");
                    printf("--------------------------------------\n");

                }
                else {

                    printf("------------------------------\n");
                    printf("     Calculadora de Média\n");
                    printf("------------------------------\n");
                    printf("Quantidade de faltas: %d\n", faltas);
                    printf("Nota AV1: %.1lf\n", AV1);
                    printf("Nota AV2: %.1lf\n", AV2);
                    printf("Nota AV3: %.1lf\n", AV3);
                    printf("Nota AVD: %.1lf\n", AVD);

                    if( (AVD < 4) ) {
                        
                        printf("--------------------------------------\n");
                        printf("Aluno Reprovado! Nota(s) inferior à 4.\n");
                        printf("--------------------------------------\n");

                    }
                    else if(media < 6) {
                            
                        printf("----------------------------------\n");
                        printf("        Aluno Reprovado!\n");
                        printf("Nota final abaixo da média -> %.1f\n", media);
                        printf("----------------------------------\n");

                    }
                    else {

                        printf("------------------------------\n");
                        printf("       Aluno Aprovado!\n");
                        printf("       Nota Final: %.1lf\n", media);
                        printf("------------------------------\n");
                            
                    }
                
                }

                printf("\n>> Opção inválida! <<");
                        
            }

        }
    
    }   

}

void calculadora_de_numeros_primos() {

    int numero, primo;

    bool repetir = true;
    
    while(repetir) { // Repete a calculadora caso o usuário deseje

        printf("-----------------------------\n");
        printf("Calculadora de Números Primos\n");
        printf("-----------------------------\n");

        
        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero < 2) {

            printf("----------------------------------------\n");
            printf("Nao existem números primos menores que 2\n");
            printf("----------------------------------------\n");
        
        }
        else if(numero < 4) {

            printf("-----------------------------\n");
            printf("    %d é um número primo!\n", numero);
            printf("-----------------------------\n");

        }
        else {

            for(int i = numero; i > 1; --i) { // Decrementa a partir do número inserido

                bool E_Primo = true;

                for(int j = (i - 1); j > 1; --j) { // Checa se o numero i é divisivel por algum numero entre ele mesmo e 1

                    if(i % j == 0) { 

                        E_Primo = false;;
                        break;

                    }
                    
                }
                    
                if(E_Primo) { // Armazena o numero primo encontrando acima, na variavel primo
                        
                    primo = i;
                    break;
                    
                }
                
            }

            if(primo == numero) { // Personaliza a resposta de acordo com o resultado
                
                printf("-----------------------------\n");
                printf("    %d é um número primo!\n", numero);
                printf("-----------------------------\n");

            } 
            else {

                printf("-------------------------------------------\n");
                printf("O número primo mais próximo de %d é: %d\n", numero, primo);
                printf("-------------------------------------------\n");
            
            }

        }
        
        char caractere[2];
        bool ChecarOpcaoParaRepetir = true;
        
        while( ChecarOpcaoParaRepetir ) { // Checa se o usuario deseja repetir 
            
            printf("\nDeseja consultar outro número? (s/n) ");
            scanf("%s", caractere);

            if( caractere[1] == '\0' && ((caractere[0] == 's' || caractere[0] == 'S') || (caractere[0] == 'n' || caractere[0] == 'N')) ) {
                
                if(caractere[0] == 's' || caractere[0] == 'S') {

                    system("@cls||clear");

                    repetir = true;
                    ChecarOpcaoParaRepetir = false;

                }
                else if(caractere[0] == 'n' || caractere[0] == 'N') {

                    repetir = false;
                    ChecarOpcaoParaRepetir = false;
                
                }

            }
            else {

                ChecarOpcaoParaRepetir = true;
            
            }

            if( ChecarOpcaoParaRepetir ) { // Reimprime o resultado da consulta e imprime mensagem de erro

                system("@cls||clear");

                printf("-----------------------------\n");
                printf("Calculadora de Números Primos\n");
                printf("-----------------------------\n");

        
                printf("Digite um número: %d\n", numero);

                if(numero < 2) {

                    printf("----------------------------------------\n");
                    printf("Nao existem números primos menores que 2\n");
                    printf("----------------------------------------\n");
        
                }
                else if(primo == numero) {

                    printf("-----------------------------\n");
                    printf("    %d é um número primo!\n", numero);
                    printf("-----------------------------\n");

                }
                else {

                    printf("-------------------------------------------\n");
                    printf("O número primo mais próximo de %d é: %d\n", numero, primo);
                    printf("-------------------------------------------\n");
            
                }

                printf("\n>> Opção inválida! <<");
                
            }

        }

    }

}