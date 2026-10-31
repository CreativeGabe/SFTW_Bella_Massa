#include <stdio.h>
#include <time.h>

int main(){
    // "Boa tarde! Somos o Grupo da Bella Massa, da turma 33 da manhã do campus memorial. Esse sistema visa simular a interface de um funcionário e apresenta funções interativas para o dia a dia. As funçoes de cada comando serão adicionadas ao final da lógica do mesmo."
    int I, id_func, c, carr_m;
    double hr_ext, sld, sld_d;
    time_t T;
    struct tm *info_tempo;
    char data[30], repete, entgdr;
    time(&T);
    info_tempo = localtime(&T);
    strftime(data,sizeof(data),"%H:%M",info_tempo);
    // Menu interativo para usuário. Cada entrada gera um novo display ao usuário, além de que as funcionalidades tem funções específicas.
    do{
       printf("\n##########################");
       printf("\n           Menu");
       printf("\n##########################\n");
       printf("1 - Horas Extras\n");
       printf("2 - Quadro de folgas\n");
       printf("3 - Comandas\n");
       printf("4 - Quadro de entregadores\n");
       printf("0 - Fechar o sistema\n");
       printf("##########################\n");
       printf("\nEscolha uma opção: ");
       scanf("%d", &I);
       switch(I){
        case (1): { 
            // Esse menu possui apenas 3 id's validos para que a verificação ocorra. 1001767; 6767676; 4242424; Cada valor apresentado em Hora Extra é calculado para definir o quanto o funcionário tem de receber.
            printf("Insira o seu ID. \n ");
            scanf("%d", &id_func);
            if(id_func == 1001767){
                do{
                sld = 40;
                sld_d = 27;
                hr_ext = (sld * 15) + (sld_d * 20);
                printf("#######################################################\n");
                printf("\nVocê possui um total de 67 horas extras, sendo elas: \n");
                printf("40 horas acumuladas em dia de semana.\n");
                printf("27 em domingos e feriados.\n");
                printf("O total devido é de %.2lf \n", hr_ext);
                printf("\n#######################################################\n");
                printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
                scanf(" %c", &repete);
            }while(repete == 'S' || repete == 's');
            }else if(id_func == 6767676){
                do{
                sld = 67;
                sld_d = 67;
                hr_ext = (sld*15) + (sld_d * 20);
                printf("#######################################################\n");
                printf("\nVocê possui um total de 134 horas extras, sendo elas: \n");
                printf("67 horas acumuladas em dia de semana.\n");
                printf("67 em domingos e feriados.\n");
                printf("O total devido é de %.2lf \n", hr_ext);
                printf("\n#######################################################\n");
                printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
                scanf(" %c", &repete);
                }while(repete == 'S' || repete == 's');
            }
            else if(id_func == 4242424){
                do{
                sld = 73;
                sld_d = 67;
                hr_ext = (sld*15) + (sld_d * 20);
                printf("#######################################################\n");
                printf("\nVocê possui um total de 140 horas extras, sendo elas: \n");
                printf("73 horas acumuladas em dia de semana.\n");
                printf("67 em domingos e feriados.\n");
                printf("O total devido é de %.2lf \n", hr_ext);
                printf("\n#######################################################\n");
                printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
                scanf(" %c", &repete);
                }while(repete == 'S' || repete == 's');
            }
            else{
                printf("\nID invalidado! Reentre no menu e selecione novamente a opção de folha.\n");
            }
            break;
        }
        case(2): {
            printf("\n Digite seu ID de funcionário ");
            scanf("%d", &id_func);
            if (id_func == 1001767){
                do{
                printf("\n#################Folgas#################");
                printf("\nSegunda-Feira - Trabalhe");
                printf("\nTerça-Feira - Trabalhe");
                printf("\nQuarta-Feira - Trabalhe");
                printf("\nQuinta-Feira - Trabalhe");
                printf("\nSexta-Feira - Trabalhe");
                printf("\nSábado - Folga");
                printf("\nDomingo - Folga");
                printf("\n########################################");
                printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
                scanf(" %c", &repete);
            }while(repete == 'S' || repete == 's');
            }
            else if(id_func == 6767676){
                do{
                printf("\n#################Folgas#################");
                printf("\nSegunda-Feira - Trabalhe");
                printf("\nTerça-Feira - Folga");
                printf("\nQuarta-Feira - Folga");
                printf("\nQuinta-Feira - Trabalhe");
                printf("\nSexta-Feira - Trabalhe");
                printf("\nSábado - Trabalhe");
                printf("\nDomingo - Trabalhe");
                printf("\n########################################");
                printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
                scanf(" %c", &repete);
            }while(repete == 'S' || repete == 's');
            }
            else if(id_func == 4242424){
                do{
                printf("\n#################Folgas#################");
                printf("\nSegunda-Feira - Folga");
                printf("\nTerça-Feira - Trabalhe");
                printf("\nQuarta-Feira - Trabalhe");
                printf("\nQuinta-Feira - Trabalhe");
                printf("\nSexta-Feira - Folga");
                printf("\nSábado - Trabalhe");
                printf("\nDomingo - Trabalhe");
                printf("\n########################################");
                printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
                scanf(" %c", &repete);
            }while(repete == 'S' || repete == 's');
            }
            else{
                printf("\nO ID inserido está incorreto. Não é possível prosseguir.");
            }
            break;
            }
            // Aqui, improvisamos para que houvesse uma função especial no primeiro printf; Ao inserir, o horário mostrado sempre será diferente, o que é bem diferente do que optamos nos outros dois comandos de output.
        case(3): {
            printf("\n###############Comandas Ativas###############\n");
            printf("172130 - Ativa desde às %s\n",data);
            printf("182021 - Ativa desde às 19:15\n");
            printf("209210 - Ativa desde às 18:30\n");
            printf("\n#############################################\n");
            scanf("%d", &c);
            if(c == 182021){
                do{
            printf("\n#################################################################################################\n");
            printf("\n1 - Pizza Grande de Calabresa com queijo;\n5 - Esfihas doces de chocolate; \n1 - Coca-cola 2l\n");
            printf("\nEndereço = Rua James Holland, 575 — Barra Funda, São Paulo – SP, CEP 01138-901 \n");
            printf("\n#################################################################################################\n");
            printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
            scanf(" %c", &repete);
            }while(repete == 'S' || repete == 's');
            }
            else if(c == 172130){
                do{
            printf("\n##################################################################################\n");
            printf("\n1 - Pizza Média Meia Portuguesa e Meia Mussarela; \n1 - Guaraná Antártica 1.5l\n");
            printf("\nEndereço = Rua Dona Elisa, 150 — Barra Funda, São Paulo – SP, CEP 01155-901 \n");
            printf("\n##################################################################################\n");
            printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
            scanf(" %c", &repete);
            }while(repete=='S'||repete=='s');
            }
            else if(c == 209210){
                do{
            printf("\n##########################################################################\n");
            printf("\n2 Pizzas Grandes Sabor Toscana; \n2 Garrafas de Fanta sabor Laranja 2l\n");
            printf("\nAlameda Olga, 315 — Barra Funda, São Paulo – SP, CEP 01155-900 \n");
            printf("\n##########################################################################\n");
            printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
            scanf(" %c", &repete);
                }while(repete=='S'||repete=='s');
            }
            else{
                printf("\nNão temos nenhuma comanda com esse código. Tente novamente!");
            }
            break;
        }
        case(4): {
            do{
            printf("\n#######################Quadro de entregadores#######################\n");
            printf("\nA) Rógerio - Factor 125 - Disponível das 12:00 até as 18:00\n");
            printf("\nB) Claudiana - Suzuki GSR 150I - Disponível das 16:00 até as 22:00\n");
            printf("\nC) João - XTZ 125 - Disponível das 22:00 até as 04:00");
            printf("\n####################################################################\n");
            printf("\nSelecione a letra do entregador para verificar a disponibilidade do mesmo");
            scanf(" %c", &entgdr);
            switch(entgdr){
                case('A'):{
                    printf("\nO Rógerio atualmente está realizando a entrega da comanda 172130\n");
                    printf("\nEstima-se 20 minutos para que ele entregue e retorne.\n");
                break;
                }
                case('B'): {
                    printf("\nA Claudiana está aguardando um pedido para entregar.");
                break;
                }
                case('C'): {
                    printf("\nJoão ainda não começou o turno dele.");
                    break;
                }
                default: {
                    printf("\nLetra inválida! Selecione A, B ou C.");
                    break;
                }
            }
            printf("\nVocê gostaria de retornar ao menu principal ou continuar nessa função? \n(S ou s para continuar nessa página, N ou n para ir para o menu principal)");
            scanf(" %c", &repete);
                }while(repete=='S'||repete=='s');
        }
    } 

}while(I != 0);
return 0; }