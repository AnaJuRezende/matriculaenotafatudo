#include <stdio.h>
#include <stdlib.h> // necessario para a funcao system()

int main(){
    int vmatricula[50], I = 0, J, matricula;
    float vnota1[50], vnota2[50];
    
    printf("----------------------------\n");
    printf(" -- cadastro de alunos -- \n");
    printf("----------------------------\n");
    
    printf("digite sua matricula ou 0 para sair: ");
    scanf("%d", &matricula);
    
    while ((matricula != 0) && (I < 50)) {
        vmatricula[I] = matricula;
        
        printf("nota1: "); 
        scanf("%f", &vnota1[I]);
        printf("nota2: "); 
        scanf("%f", &vnota2[I]);
        
        system("cls");
        printf("----------------------------\n");
        printf(" -- cadastro de alunos -- \n");
        printf("----------------------------\n");
        
        printf("digite sua matricula ou 0 para sair: "); 
        scanf("%d", &matricula);
        I++;
    }
    I--;
    
    system("cls");
    printf("----------------------------\n");
    printf(" -- cadastro de alunos -- \n");
    printf("----------------------------\n");
    
    for (J = 0; J <= I; J++) {
        printf("matricula: %d nota1: %.2f nota2: %.2f\n", vmatricula[J], vnota1[J], vnota2[J]);
    }
    
    printf("\n\n");
    return 0;
}

