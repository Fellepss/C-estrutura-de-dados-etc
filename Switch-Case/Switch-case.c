#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int pokemon;

    printf("Escolha seu Pokemon inicial!\nDigite 1 para Bulbassauro, 2 para Squirtle e 3 para Charmander!\n");
    scanf("%i", &pokemon);

    switch (pokemon)
    {
        case 1:
            printf("Voc� escolheu o Bulbassauro!!\nEle � um �timo inicial para os primeiros gin�sios de Kanto!");
        break;
        case 2:
            printf("Voc� escolheu o Squirtle!!\nEle � um �timo pok�mon no primeiro gin�sio e � muito fofo!!");
        break;
        case 3:
            printf("Voc� escolheu o Charmander!!\nVejo que prefere um caminho mais doloroso no come�o e mais recompensador no futuro. Gosto do seu jeito de pensar ;)");
        break;
        default:
        printf("Voc� inseriu o valor errado. Favor, insira novamente!");
    }
}