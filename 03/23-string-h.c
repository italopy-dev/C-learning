#include <stdio.h>
#include <string.h>

//strlen() - verifica a quantidade de caracteres de uma string
//strcpy() - copia uma string
//strcat() - junta strings
//strcmp() - avalia se as strings são iguais
//strchr() - encontra a primeira ocorrencia de um dado caractere
//strrchr() - encontra a ultima ocorrencia de um dado caractere
//strstr - verifica se uma string pode ser encontrada dentro de outra

int main() {
    //strlen
    char str[50] = "eu gosto de pizza";
    char str2[50];
    printf("a string tem %d caracteres\n", strlen(str));

    //strcpy(agora str2 é igual á str)
    strcopy(str2, str);

    //strcat(agora ADICIONANDO tá no final da string str2)
    strcat(str2, "-ADICIONANDO");

    //strcmp(retorna negativo se forem diferentes e 0 se forem iguais)
    int resposta_comparacao = strcmp(str2, str);


    return 0;
}