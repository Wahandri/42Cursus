#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd = open("archivo.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return (1);
    }

    printf("Archivo abierto correctamente.\n");

    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }

    printf("Fin del archivo.\n");
    close(fd);
    return (0);
}
