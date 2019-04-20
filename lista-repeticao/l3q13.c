    #include <stdio.h>
     
    int main()
    {
        int numero, countPar = 0, countImpar = 0;
        double mediaPar = 0, mediaImpar = 0, pares = 0, impares = 0;
     
        /*
        * Filtra os pares e ímpares, incrementando o
        * contador para realizar a divisão da média
        */ 
        while (scanf("%d", &numero) && numero != 0){
            if (numero % 2 == 0 && numero % 2 != -1){
                pares += numero;
                countPar++;
            }else{
                impares += numero;
                countImpar++;
            }
        }
        if(countPar == 0){
            mediaPar = 0;
        }else{
            mediaPar = pares / countPar;
        }
     
        if(countImpar == 0){
            mediaImpar = 0;
        }else{
            mediaImpar = impares / countImpar;
        }
            printf("MEDIA PAR: %lf\n", mediaPar);
            printf("MEDIA IMPAR: %lf\n", mediaImpar);
     
     
        return 0;
    }