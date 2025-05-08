#include <stdio.h>

// função >>nível novato<<
void movimentos_novato();

void moverTorre();
void moverBispo();
void moverRainha();
void moverCavalo();

// função >>nível mestre<<
void movimentos_mestre();

void moverTorreRecursivo(int casas);
void moverBispoAvancado(int casas);
void moverRainhaRecursivo(int casas);
void moverCavaloComplexo();

int main(){
    int opcao;

    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    scanf("%d", &opcao);

    if(opcao == 1){
        movimentos_novato();
    } else {
        movimentos_mestre();
    }
    return 0;
}
//função principal
void movimentos_novato(){
    printf("\n===MODO NOVATO===\n");
    moverTorre();
    moverBispo();
    moverRainha();
    moverCavalo();
}
void movimentos_mestre(){
    printf("\n===MODO MESTRE===\n");
    moverTorreRecursivo(5);
    moverBispoAvancado(5);
    moverRainhaRecursivo(8);
    moverCavaloComplexo();
}
// implementação novato
void moverTorre(){
    printf("\ntorre: 5 casas para a direita (usando for):\n");
    for (int i=0; i< 5 ; i++){
        printf("direita\n");
    }
}
void moverBispo(){
    printf("\nbispo: 5 casas na diagonal (usando while)\n");
    int i=0 ;
    while(i<5){
        printf("cima, direita\n");
        i++;
    }
}
void moverRainha(){
    printf("\nrainha:8 casas para a esquerda (usando do-while):\n");
    int i=0;
    do{
        printf("esquerda\n");
        i++;
    }while(i<8);
}
void moverCavalo(){
    printf("\ncavalo: 2 baixo e 1 esquerda (usando for + while):\n");
    //vertical do L
    for (int i=0; i<2; i++){
        printf("baixo\n");
    }
    //horizontal L 
    int j=0;
    while(j<1){
        print("esquerda\n");
        j++;
    }
}
// implementação mestre 

void moverTorreRecursivo(int casas){
    // caso base 
    if (casas<= 0) return;
    printf("direita\n");
    //chama recursiva com uma casa a menos
    moverTorreRecursivo(casas-1); 
}
void moverBispoAvancado(int casas){
    printf("\nBispo Avançado: %d casas na diagonal (loops aninhados):\n", casas);
    //loop externo para controle do movimento
    for (int v = 0; v< casas: v++){
        //loop interno para passo diagonal
        for(int h=0;h<1;h++){
            
        }
    } 
    }
}