#include "stdio.h"
#include "string.h"
#include "usuario.h"
#include "file-io.h"

void createUsuario(char nome[], char sobrenome[], long cpf)
{
  struct usuario u1;

  strcpy(u1.nome, nome);
  strcpy(u1.sobrenome, sobrenome);
  u1.cpf = cpf;
  u1.id = totalUsuarios;

  usuarios[totalUsuarios] = u1;
  totalUsuarios++;

  fileWrite(USUARIOS_FILEPATH, u1);
}

void listUsuario()
{
  for (int i = 0; i < totalUsuarios; i++)
  {
    printf("Codigo: %d\n", usuarios[i].id);
    printf("\tNome: %s %s\n", usuarios[i].nome, usuarios[i].sobrenome);
    printf("\tCPF: %ld\n", usuarios[i].cpf);
  }
}

void updateUsuario(int id, char nome[], char sobrenome[], long cpf)
{
  struct usuario u1;

  strcpy(u1.nome, nome);
  strcpy(u1.sobrenome, sobrenome);
  u1.cpf = cpf;
  u1.id = id;

  usuarios[id] = u1;
}

void deleteUsuario()
{
}