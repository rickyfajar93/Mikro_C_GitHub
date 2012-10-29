#include <stdio.h>
#include <string.h>

// Get text[offset] if text were an infinitely long repeating loop
char getLoopChar(const char *text, int offset)
{
    return text[offset % strlen(text)];
}

int main(int argc, char *argv[])
{
    const char *text = "This is a scrolling message...";
    int window_start = 0;

    while(1)
    {
        int i;
        for (i=0;i<16;i++)  // loop over characters in the window
            putchar(getLoopChar(text, window_start+i));
        putchar('\n');
        window_start++;
    }

    return 0;
}