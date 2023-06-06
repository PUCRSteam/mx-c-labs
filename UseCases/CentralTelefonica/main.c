#include "stdio.h"
#include "string.h"

#include "usuario.h"
#include "file-io.h"

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
      printf("Lista de usuarios:\n");
      listUsuario();
      break;
    case 3:
      printf("Lista de usuarios:\n");
      listUsuario();

      printf("Informe o codigo do usuario que deseja atualizar:\n");
      int id = 0;
      scanf("%d", &id);

      printf("Nome: ");
      scanf("%s", nome);
      printf("Sobrenome: ");
      scanf("%s", sobrenome);
      printf("CPF: ");
      scanf("%ld", &cpf);

      updateUsuario(id, nome, sobrenome, cpf);
      printf("Usuario atualizado!!\n");
      break;
    case 4:
      break;
    case 5:
      return 0;
    default:
      break;
    }
  }

  return 0;
}