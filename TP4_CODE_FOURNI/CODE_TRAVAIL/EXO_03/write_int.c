#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fd;
    int i_123 = 123;
    int i_1234567890 = 1234567890;
    
    // binaire de 123
    fd = fopen("binaire_123", "w");
    fwrite(&i_123, sizeof(int), 1, fd);
    fclose(fd);
    
    // texte de 123
    fd = fopen("texte_123", "w");
    fprintf (fd, "%d", i_123);
    fclose(fd);
    
    // binaire de 1234567890
    fd = fopen("binaire_1234567890", "w");
    fwrite(&i_1234567890, sizeof(int), 1, fd);
    fclose(fd);
    
    // texte de 1234567890
    fd = fopen("texte_1234567890", "w");
    fprintf (fd, "%d", i_1234567890);
    fclose(fd);
    
    return EXIT_SUCCESS;
}
