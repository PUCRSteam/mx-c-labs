#include "stdio.h"
#include "string.h"

#include "usuario.h"
#include "file-io.h"

struct usuario usuarios[100];
int totalUsuarios = 0;

int main()
{
  char nome[20];
  char sobrenome[20];
  long cpf;
  int opcao = 0;

  while (1)
  {
    printf("Central Telefonica\n");
    printf("1 - Registrar Usuario\n");
    printf("2 - Listar Usuarios\n");
    printf("3 - Atualizar Usuario\n");
    printf("4 - Deletar Usuario\n");
    printf("5 - Sair\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Nome: ");
      scanf("%s", nome);

      printf("Sobrenome: ");
      scanf("%s", sobrenome);

      printf("CPF: ");
      scanf("%ld", &cpf);

      createUsuario(nome, sobrenome, cpf);

      printf("Usuario registrado!!\n");
      break;
    case 2:
      printf("Listagem de Usuarios:\n");
      listUsuario();
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    default:
      break;
    }
  }

  return 0;
}