#include <stdio.h>
#define IN 1
#define OUT 0

void file(void);
int charcount(char ch);
int linecount(char ch);
int spacecount(char ch);

int main()
{
    file();
}

void file(void)
{
    char ch;
    int charc, linec, spacec;
    FILE *fl;
    fl = fopen("Lorem1.txt", "r");

    while ((ch = fgetc(fl)) != EOF)
    {
        charcount(ch);
        if (charcount(ch) == 1)
        {
            ++charc;
        }
        linecount(ch);
        if (linecount(ch) == 1)
        {
            ++linec;
        }
        spacecount(ch);
        if (spacecount(ch) == 1)
        {
            ++spacec;
        }
    }
    printf("Char cout : %d\n", charc);
    printf("Space cout : %d\n", spacec);
    printf("Line cout : %d\n", linec);

}
int charcount(char ch)
{
    int charc;
    if (ch != ' ' && ch != '\n' && ch != '.' && ch != '\t' && ch != ',')
    {
        return 1;
    }
}
int spacecount(char ch)
{
    int space;
    if (ch == ' ')
    {
        return 1;
    }
}
int linecount(char ch)
{
    int line;
    if (ch == '\n')
    {
        return 1;
    }

}
