
#define USUARIOS_FILEPATH "/tmp/usuarios.csv"

struct usuario
{
  char nome[20];
  char sobrenome[20];
  long cpf;
};

void createUsuario(char nome[], char sobrenome[], long cpf);
void listUsuario();
int updateUsuario();
int deleteUsuario();