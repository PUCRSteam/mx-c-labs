#ifndef USUARIOS_H
#define USUARIOS_H

#define USUARIOS_FILEPATH "usuarios.csv"

struct usuario
{
  int id;
  char nome[20];
  char sobrenome[20];
  long cpf;
};

void createUsuario(char nome[], char sobrenome[], long cpf);
void updateUsuario(int id, char nome[], char sobrenome[], long cpf);
void listUsuario();
void deleteUsuario();

struct usuario usuarios[100];
int totalUsuarios;

#endif // USUARIOS_H
