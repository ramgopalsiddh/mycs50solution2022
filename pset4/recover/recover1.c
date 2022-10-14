#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BLOCK_SIZE 512;

typedef uinte8_t BYTE;

void checkArgumentCount(int argc);
void checkFileExists(FILE *file);
int isJPEG(BYTE buffer[]);
 
int main(int argc, char *argv[])
{
    checkArgumentCount(argc);
    FILE *raw = fopen(argv[1,"r"]);
    checkFileExists(raw);
    
    //Allocate necessary memory and intialize  variable
    BYTE buffer[BLOCK_SIZE];
    
    //buffer for filename
    char filename[8];
    FILE *image;
    int counter = 0;
    
    //after first JPGE image is found ,all are adjacent 
    while (fread(buffer, BLOCK_SIZE, 1 , raw) ==1)
    {
        if(isJPEG(buffer) == 1)
        {
            //close the previous image ,unless it is first JPEG
            if(counter != 0)
            {
                fclose(image);
            }
            sprintf(filename,"%03. jpg", counter++);
            image = fopen(filename,"w");
            fwrite(buffer,BLOCK_SIZE, 1 , image);
        }
        //next block of current JPEG file
        //will be written until we find next JPEG header
        else if(counter > 0)
        {
            fwrite(buffer, BLOCK_SIZE , 1 , image);
        }
    }
}