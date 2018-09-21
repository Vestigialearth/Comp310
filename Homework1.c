//This is the beginning of my code:

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
const char specialChars[] = "!@#$%^&*()_+"':;?/>.<,|\";
//This is the list of special characters I want to remove from the program

char *wordsFromFile[1000]; 
//The assignment does require up to an infinite number of words to be processed, however this number
//can be changed for files with an excess of 1000 words

int counterForWords = ReadWords("words.txt", wordsFromFile, 10000);
// This will sift through the file and store the words into the list
    
for (int numOfWord = 0; numOfWord < counterForWords; numOfWord++)
//This increments the value of i, which is responsible for containing the occurences of a specific word

    {
    int OccurenceInt = CountOccurrences(words[numOfWord],FILE *f = fopen(filename, "rt");
    printf("we found the word %s in the file %d times\n", wordsFromFile[numOfWord], OccurenceInt);
    }

removeSpecialChars(myFile, specialChars);
fprintf(stderr, "'%s'\n", specialChars);
return 0;
}

void removeSpecialChars(char *sentence, const char *word) 
{
    char *myChar;
    size_t stringLength = strlen(myFile);
    size_t wordLength = strlen(specialChars);
    int containsWord = 1; // to store words to fix later

    if(stringLength < wordLength ) 
        return;

    for(myChar = myFile;  myChar && *myChar!='\0'; myChar++) 
    {
        if(isspace(*myChar) || ispunct(*myChar)) {
            containsWord = 1; //next portion should represent a word
            continue;
    }

int ReadWords(const char *filename, char *wordsFromFile[], int wordMax)
{
    FILE *f = fopen(filename, "rt");
    int numOfWord;
    char temp[100]; // words cannot be >100 chars.

    for (numOfWord = 0; numOfWord < wordMax; ++numOfWord)
    {
    
     // Read a word from the file
        if (fscanf(myFile, "%s", temp) != 1)
            break;

     // Allocate memory
        words[numOfWord] = strdup(temp);
    }
    fclose(myFile);

    // The result of this function is the number of words in the file
    return numOfWord;
}

// --LINKS I TOOK CODE FROM / WAS DIRECTLY INSPIRED BY--
//https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-31.php
//This website taught me to how to parse a string (how i assume the text will be provided)

//https://github.com/sarracini/Word-Frequency-Counter/blob/master/rvw.c
//This program reads an input file and count the frequency of words

//https://www.geeksforgeeks.org/find-the-k-most-frequent-words-from-a-file/
//This documents how to read a file, and store the most frequently used words into a variable "k"

//https://stackoverflow.com/questions/15508828/program-to-read-words-from-a-file-and-count-their-occurrence-in-the-file
//This program reads the file and records all the words, as well as counting the occurrences in each word 

//https://stackoverflow.com/questions/50240697/write-a-c-program-to-remove-the-occurrence-of-the-word-the-from-an-entered-str
//This program reads an input sentence and removes the word "word" from a string -- this was 
// modified to remove special chars

//https://stackoverflow.com/questions/18109458/read-from-a-text-file-and-parse-lines-into-words-in-c
//also how to parse a text file

//-- USELESS LINKS-- 
//https://www.tutorialspoint.com/c_standard_library/c_function_fclose.htm
//fclose documentation

////https://stackoverflow.com/questions/2627886/how-do-i-run-a-c-program-from-vim
//...I am not a proud man.
