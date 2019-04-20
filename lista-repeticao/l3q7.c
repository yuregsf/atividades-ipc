#include <stdio.h>
#define cargaHoraria 128

int main(){
    unsigned int matricula, presenca;
    float prova[8], exercicio[5], trabalhoFinal, notaFinal, mediaProvas = 0, mediaExercicios = 0;
    int i, j;
    while(1){
        scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d", 
        &matricula, &prova[0], &prova[1], &prova[2], &prova[3], 
        &prova[4], &prova[5], &prova[6], &prova[7], &exercicio[0],
        &exercicio[1], &exercicio[2], &exercicio[3], &exercicio[4], &trabalhoFinal, &presenca);
        if(
            prova[0] == -1 && prova[1] == -1 && prova[2] == -1 && prova[3] == -1 && 
            prova[4] == -1 && prova[5] == -1 && prova[6] == -1 && prova[7] == -1 &&
            exercicio[0] == -1 && exercicio[1] == -1 && exercicio[2] == -1 && 
            exercicio[3] == -1 && exercicio[4] == -1 &&
            matricula == -1 && trabalhoFinal == -1 && presenca == -1
        ){
            break;
        }
        else{
            mediaProvas = mediaExercicios = 0;
            for(i = 0; i<8; i++){
                mediaProvas += prova[i]/8.0;
            }
            for(j = 0; j<5; j++){
                mediaExercicios += exercicio[j]/5.0;
            }
            notaFinal = mediaProvas*0.7+mediaExercicios*0.15+trabalhoFinal*0.15;
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: ", matricula, notaFinal);
            if(notaFinal >= 6 && presenca >= cargaHoraria*0.75){
                printf("APROVADO\n");
            }else if(notaFinal <= 6 && presenca >= cargaHoraria*0.75){
                printf("REPROVADO POR NOTA\n");
            }else if(notaFinal >= 6 && presenca <= cargaHoraria*0.75){
                printf("REPROVADO POR FREQUENCIA\n");
            }else{
                printf("REPROVADO POR NOTA E FREQUENCIA\n");
            }
        }
    }
    return 0;
}