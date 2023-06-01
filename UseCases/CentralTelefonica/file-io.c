
#include "stdio.h"

#include "usuario.h"
#include "file-io.h"

int fileExists(char filepath[]) {
  
    FILE *file;
    file = fopen(filepath, "r");

    if (file)
    {
        fclose(file);
        return 1;
    }
    
    return 0;
}

void fileWrite(char filepath[], struct usuario u) 
{
    FILE *fp;

    if(!fileExists(filepath)) {
        fp = fopen(filepath, "w+");
        fprintf(fp, "nome,sobrenome,cpf\n");
        fclose(fp);
    }

    fp = fopen(filepath, "a");
    fprintf(fp,"%s,%s,%ld\n", u.nome, u.sobrenome, u.cpf);
    fclose(fp);
}