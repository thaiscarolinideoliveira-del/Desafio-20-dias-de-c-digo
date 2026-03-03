#include <stdio.h>
#include <stdlib.h>

struct Endereco
{
    char rua[100];
    int num;
    char bairro[20];
};

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    char nome[50];
    struct Endereco endereco;
    struct Data nasc;
    float salario;
};

int main()
{
    struct Pessoa p[10];
    struct Pessoa menores[10];  //
    int i, qtde=0;
    int contMenores = 0;      //
    float media=0;

    for (i=0; i<2;i++)
    {
        printf("Entre com as informacoes da Pessoa");
        printf("\nEntre com o nome: ");
        fflush(stdin);
        scanf(" %[^\n]",p[i].nome);

        printf("\nEntre com o Endereco");
        printf("\nEntre com o nome da rua: ");
        fflush(stdin);
        scanf(" %[^\n]",p[i].endereco.rua);

        printf("\nEntre com o numero: ");
        scanf("%d",&p[i].endereco.num);

        printf("\nEntre com o bairro: ");
        fflush(stdin);
        scanf(" %[^\n]",p[i].endereco.bairro);

        printf("\nEntre com o dia do nascimento: ");
        scanf("%d",&p[i].nasc.dia);

        printf("\nEntre com o mes do nascimento: ");
        scanf("%d",&p[i].nasc.mes);

        printf("\nEntre com o ano do nascimento: ");
        scanf("%d",&p[i].nasc.ano);

        printf("\nEntre com o salario: ");
        scanf("%f",&p[i].salario);
    }

    for (i=0; i<3;i++)
    {
        media=media+p[i].salario;

        if (p[i].salario>=3000.00)
        {
            printf("\nSalario maior que 3000,00: ");
            puts(p[i].nome);
        }

        if (p[i].salario <=2000.00)
        {
            qtde++;

            //
            menores[contMenores] = p[i];
            contMenores++;
        }
    }

    media=media/3.0;

    printf("\nmedia dos salarios: %f",media);

        printf("\nquantidade de pessoas com salario menor que 2000.00: %d",qtde);

    //
    printf("\n\n--- Pessoas com salario menor que 2000,00 ---\n");

    for(i=0; i<contMenores; i++)
    {
        printf("\nNome: %s", menores[i].nome);
        printf("\nRua: %s", menores[i].endereco.rua);
        printf("\nNumero: %d", menores[i].endereco.num);
        printf("\nBairro: %s", menores[i].endereco.bairro);
        printf("\nNascimento: %d/%d/%d",
               menores[i].nasc.dia,
               menores[i].nasc.mes,
               menores[i].nasc.ano);
        printf("\nSalario: %.2f\n", menores[i].salario);
    }

    return 0;
}

