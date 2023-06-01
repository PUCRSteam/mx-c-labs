#include "stdio.h"
#include "string.h"
#include "usuario.h"

void createUsuario(char nome[], char sobrenome[], long cpf)
{
  struct usuario u1;
  
  strcpy(u1.nome, nome);
  strcpy(u1.sobrenome, sobrenome);

  u1.cpf = cpf;
  usuarios[totalUsuarios] = u1;
  totalUsuarios++;

  fileWrite(USUARIOS_FILEPATH, u1);
}

void listUsuario()
{
  for (int i = 0; i < totalUsuarios; i++)
  {
    printf("Nome: %s %s\n", usuarios[i].nome, usuarios[i].sobrenome);
    printf("CPF: %ld\n", usuarios[i].cpf);
  }
}

int updateUsuario()
{
}

int deleteUsuario()
{
}