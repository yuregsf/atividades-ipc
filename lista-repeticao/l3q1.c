#include <stdio.h>

#define ingressoPopular 1.00
#define ingressoGeral 5.00
#define ingressoArquibancada 10.00
#define ingressoCadeiras 20.00

int main()
{
    int testes, numeroPessoas, i;
    double popular, geral, arquibancada, cadeiras, renda;
    scanf("%d", &testes);

    for (i = 0; i < testes; i++)
    {
        scanf("%d %lf %lf %lf %lf", &numeroPessoas, &popular, &geral, &arquibancada, &cadeiras);
        popular = (popular / 100) * numeroPessoas * ingressoPopular;
        geral = (geral / 100) * numeroPessoas * ingressoGeral;
        arquibancada = (arquibancada / 100) * numeroPessoas * ingressoArquibancada;
        cadeiras = (cadeiras / 100) * numeroPessoas * ingressoCadeiras;
        renda = popular + geral + arquibancada + cadeiras;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i + 1, renda);
    }

    return 0;
}