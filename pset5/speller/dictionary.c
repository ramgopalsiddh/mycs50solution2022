// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;
int countWord = 0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int hashNum = hash(word);
    //creat cursor variable
    node *cursor = table[hashNum];
    //loop until the end of linked list
    while(cursor != NULL){
        //check if the word are the same
        if(strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
    //other wise move cursor to the next node
    cursor = cursor->next;

    }

    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    //open the dictionary file
    FILE *Dictfile = fopen(dictionary,"r");

    //check return value is NULL
    if(Dictfile == NULL)
    {
        return false;
    }

    //read string from file one at a time
    //fscan (file,'%s', word)
    char str[LENGTH + 1];
    while(fscanf(Dictfile,"%s", str) != EOF)
    {
        //creat new node for each word
        //use malloc
        node * temp = malloc(sizeof(node));
        //check if return value is null
        if(temp == NULL)
        {
            return false;
        }
        //copy word into node useing strcpy
        strcpy(temp->word, str);

        //use the hash function
        int hashNum = hash(str);

        //chek if head is ponting to null
        if(table[hashNum] == NULL)
        {
            //point temp to null
            temp->next = NULL;
        }
        else
        {
             //otherwise point temp to the first node of linked list
             temp->next = table[hashNum];
        }

        //point the header to temp
        table[hashNum] = temp;

        countWord += 1;
    }
    //close the file
    fclose(Dictfile);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return countWord;
}

void freenode(node *n)
{
    if(n->next != NULL)
    {
        freenode(n->next);
    }
    free(n);
}
// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for(int i = 0; i < N; i++)
    {
        if(table[i] != NULL)
        {
            freenode(table[i]);
        }
    }
    return true;
}
