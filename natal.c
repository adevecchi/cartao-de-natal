/*
 * natal.c
 * Imprime cartão de natal na tela
 */

#include <stdio.h>

#ifdef _WIN32
    #include <stdlib.h>
    #define clrscr()    system("cls")
#else
    #define clrscr()    printf("\033[H\033[J")
#endif

void draw_tree(void);
void display_message(void);

int main()
{
    clrscr();
    draw_tree();
    display_message();
    return 0;
}

void draw_tree()
{
    printf("\n\n");

    for (int i = 0; i < 4; i++)
        for (int k = 1; k < 5; k++) {
            for (int j = 1; j <= 40 - (2 * i + k); j++)
                printf(" ");

            printf("/");
            for (int j = 1; j < 2 * i + k; j++)
                printf("%c", '@');
            for (int j = 1; j < 2 * i + k; j++)
                printf("%c", '@');
            printf("\\\n");
        }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 38; j++)
            printf(" ");

        printf("|##|\n");
    }
}

void display_message()
{
    printf("\n");

    for (int i = 0; i < 35; i++)
        printf(" ");
    printf("Feliz Natal!\n");

    for (int i = 0; i < 31; i++)
        printf(" ");
    printf("E um próspero 2023!\n\n");
}
