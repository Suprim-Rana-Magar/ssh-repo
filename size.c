int main() {
    int num;
    printf ("integer occupies = >%d bytes\n", sizeof(num));
    printf ("double constant occupies = >%d bytes\n", sizeof(16.18));
    printf ("long int data type qualifier occupies = >%d bytes\n", sizeof(15L));
    printf ("float data type occupies = >%d bytes\n", sizeof(15.3f));
    return 0;
}