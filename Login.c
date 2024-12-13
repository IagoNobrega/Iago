#include <stdio.h>
#include <string.h>

struct Usuario {
    char nome[50];
    char email[100];
};

int main() {
    FILE *arquivo;
    struct Usuario usuario;

    arquivo = fopen("usuarios.txt", "a"); // Abre o arquivo para escrita (append)

    printf("Digite o nome do usuário: ");
    fgets(usuario.nome, 50, stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = 0; // Remove a nova linha

    printf("Digite o email do usuário: ");
    fgets(usuario.email, 100, stdin);
    usuario.email[strcspn(usuario.email, "\n")] = 0;

    fprintf(arquivo, "%s;%s\n", usuario.nome, usuario.email);
    fclose(arquivo);

    printf("Usuário cadastrado com sucesso!\n");

    return 0;
}