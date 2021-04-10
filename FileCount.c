#include <stdio.h>
#define IN 1
#define OUT 0

void file(void);
int charcount(char ch);
int linecount(char ch);
int spacecount(char ch);
int wordcount(char ch, int state);

int main()
{
    file();
}

void file(void)
{
    char ch;
    int charc, linec, spacec, word, state = OUT;
    FILE *fl;
    fl = fopen("Lorem.txt", "r");

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
        wordcount(ch, state);
        if (wordcount(ch, state) == 0)
        {
            state = OUT;
        }
        else if (wordcount(ch, state) == 1)
        {
            state = IN;
            ++word;
        }
        
    }
    printf("Char cout : %d\n", charc);
    printf("Space cout : %d\n", spacec);
    printf("Line cout : %d\n", linec);
    printf("Word Count : %d\n", word);

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
wordcount(char ch, int state){
    if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '.'){
        return 0;
    }
    else if (state == OUT)
    {
        return 1;
    }
}