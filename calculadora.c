#include <stdio.h>

int calculadora(void);
void operacoes(int opcao, int n1, int n2);
int adicao(int a1, int a2);
int subtracao(int s1, int s2);
int multiplicacao(int m1, int m2);
float divisao(int d1, int d2);

int main(void)
{
    int n1, n2;
    int again = 1;
    int opcao;

    while (again == 1)
    {
        opcao = calculadora();

        if (opcao == 0)
        {
            printf("GOODBYE!\n");
            break; // encerra o programa se o usuário escolher sair
        }

        printf("Insira o valor de n1 e n2: ");
        scanf("%i %i", &n1, &n2);

        operacoes(opcao, n1, n2);

        printf("Deseja continuar? 1 = YES || 2 = NO\n");
        scanf("%i", &again);
    }

    return 0;
}

int calculadora(void)
{
    int opcaoCalc;

    do
    {
        printf("\n============== CALCULADORA ==============\n");
        printf("0 - Sair\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("Escolha a operação matemática desejada: ");
        scanf("%i", &opcaoCalc);

        if (opcaoCalc > 4 || opcaoCalc < 0)
        {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcaoCalc > 4 || opcaoCalc < 0);

    return opcaoCalc;
}

void operacoes(int opcao, int n1, int n2)
{
    switch (opcao)
    {
        case 1:
            printf("O valor da soma é: %i\n", adicao(n1, n2));
            break;
        case 2:
            printf("O valor da subtração é: %i\n", subtracao(n1, n2));
            break;
        case 3:
            printf("O valor da multiplicação é: %i\n", multiplicacao(n1, n2));
            break;
        case 4:
            printf("O valor da divisão é: %.2f\n", divisao(n1, n2));
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }
}

int adicao(int a1, int a2)
{
    return a1 + a2;
}

int subtracao(int s1, int s2)
{
    return s1 - s2;
}

int multiplicacao(int m1, int m2)
{
    return m1 * m2;
}

float divisao(int d1, int d2)
{
    if (d2 == 0)
    {
        printf("Erro: Divisão por zero!\n");
        return 0.0;
    }
    return d1 / (float)d2;
}
