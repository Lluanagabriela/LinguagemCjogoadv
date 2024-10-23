// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Imprime o cabeçalho do jogo
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
    
    int numerosecreto = 7;
    
    //ARMAZENAR CHUTE
    
    int chute;
    printf ("Qual é o seu chute : \n");
    
    scanf ("%d", & chute);
    printf ("Seu chute foi %d\n", chute);
    
    //CONDIÇOES E LOOPS
    
    if(chute == numerosecreto){
        printf("Você aertou!!\n");
    }else{
        printf("Você errou!!\n");
        }
    }