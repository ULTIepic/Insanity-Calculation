#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *file = fopen("cs_to_c.txt", "r");
    if (!file) return 1;

    int value;
    fscanf(file, "%d", &value);
    fclose(file);

    printf("C got value: %d\n", value);

    FILE *out = fopen("c_to_cpp.txt", "w");
    fprintf(out, "%d", value);
    fclose(out);

    system("cpp_app.exe");
    return 0;
}
