#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "portuguese");

    do 
    {
     printf("Deseja adicionar uma nota: ");
     gets(login); 

     printf("Digite sua senha - O SISTEMA SÓ PERMITE NÚMEROS: ");
     gets(senha);
     
     if (strcmp(login, LoginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
         printf("Bem-vindo! \n");
     } else {
         printf("Acesso negado! \n\n");
     }

    } while (strcmp(login, LoginSalvo) != 0 || strcmp(senha, senhaSalva) != 0);
    return 0;