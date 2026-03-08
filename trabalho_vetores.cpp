//Aluno: Matheus Hustenir Araujo Aires
//Matrícula: 00000860558


#include <stdio.h>

#define QTD_ALUNOS 30

int main() {
    float nota1[QTD_ALUNOS], nota2[QTD_ALUNOS], media[QTD_ALUNOS];
    float soma_medias = 0, media_turma = 0;
    int i;

    for (i = 0; i < QTD_ALUNOS; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        printf("Digite a nota 1: ");
        scanf("%f", &nota1[i]);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5;
        
        soma_medias += media[i];
        printf("\n");
    }

    // 2. Cálculo da média da turma
    media_turma = soma_medias / QTD_ALUNOS;

    printf("----------------------------------------\n");
    printf("MEDIA DA TURMA: %.2f\n", media_turma);
    printf("----------------------------------------\n");

    // 3. Impressão dos alunos acima da média da turma
    printf("Alunos com media superior a media da turma:\n");
    for (i = 0; i < QTD_ALUNOS; i++) {
        if (media[i] > media_turma) {
            printf("Aluno %d: Nota1: %.1f | Nota2: %.1f | Media Final: %.2f\n", 
                    i + 1, nota1[i], nota2[i], media[i]);
        }
    }

    return 0;
}
