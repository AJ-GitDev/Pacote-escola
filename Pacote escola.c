#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    int n1, n2, operacao, soma, sub, multi, divi;
    float nota1, nota2, nota3, somam, media;
    
    printf("Bem vindo ao pacote escola \n\n");
    
    printf("Digite 1 para ir para calculadora \n");
    printf("Digite 2 para ir para o calculador de média \n");
    
    scanf("%i", &opcao);
    
    switch(opcao){
        case 1:
        printf("Bem vindo a calculadora \n\n");
        
        printf("Digite 2 números informe a operação e veja o resultado\n");
        printf("1 = + \n");
        printf("2 = - \n");
        printf("3 = x \n");
        printf("4 = / \n");
        
        printf("Digite o primeiro número: ");
        scanf("%i", &n1);
        
        printf("Digite o segundo número: ");
        scanf("%i", &n2);
        
        printf("Informe a operação: ");
        scanf("%i", &operacao);
        
        soma = n1 + n2;
        sub = n1 - n2;
        multi = n1 * n2;
        divi = n1 / n2;
        
        if(operacao == 1){
            printf("O resultado é: %i", soma);
        }
        else if(operacao == 2){
            printf("O resultado é: %i", sub);
        }
        else if(operacao == 3){
            printf("O resultado é: %i", multi);
        }
        else if(operacao == 4){
            printf("O resultado é: %i", divi);
        }
        else{
            printf("Operação inválida");    
        }
        
        break;
        case 2:
        printf("Bem vindo ao calculador de média \n");
        
        printf("Digite 3 notas e com base na média 7 informaremos a situação do aluno \n\n");
        printf("Média abaixo de 7 reprovado \n");
        printf("Média igual ou acima de 7 Aprovado \n");
        
        printf("Digite a primeiro nota \n");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota \n");
        scanf("%f", &nota2);
        
        printf("Digite a terceira nota \n");
        scanf("%f", &nota3);
        
        somam = nota1 + nota2 + nota3;
        media = somam / 3;
        
        if(media < 7){
            printf("Nota: %f - Reprovado", media);
        }
        else if(media >= 7){
            printf("Nota: %f - Aprovado", media);
        }
        
        break;
        default:
        printf("Opção inválida");
        break;
    }
    return 0;
}