#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

#define READ 0
#define WRITE 1

typedef struct 
{
	char word[10000];
	int rate;
  
} arrayStorage ;

arrayStorage words[10000];

int wordComparison(const void *x1, const void *x2){
	arrayStorage *i = (arrayStorage *)x1;
	arrayStorage *j = (arrayStorage *)x2;
	return (j->rate - i->rate);
    }

char *wordFrequencyCounter(char *file){
  	int wordCounter = 0;
	int uniqueCounter;
 	char buffer[10000]
  	FILE *filename;
  
  filename = fopen(file, "r");
  
  if (filename == NULL)
    {
    printf("It appears that the file couldn't be opened");
    }
  else
    {
      while((fscanf(filename,"%s",buffer)))
    { 
    isUnique = -1;

//this compares strings
int z;
			
for (z = 0; z < wordCounter; z++){
	if (strcmp(words[z].word, buffer) == 0)
{
	uniqueCounter = z;
}
}
// If word is not already in array, place it there.
if (uniqueCounter == -1)
{
	strcpy(words[wordCounter].word, buffer);
	words[wordCounter].rate = 1;
	wordCounter++;
}
	// Increases rate var of word if it is found 
	else {
	words[uniqueCounter].rate++;
	     }	
}
}	
}
//uses Qsort to take words out that appear the most frequently
	qsort(words, wordCounter, sizeof(arrayStorage), wordComparison);

char *finalVar = (char*)malloc(sizeof(finalVar)*100);
snprintf(result, 10000, "%s %d %s %s %s %s %s", file, wordCounter, words[0].word, words[1].word, words[2].word, words[3].word , words[4].word);
fclose(filename);
//this should store the 5 most printed words as the result
	return finalVar;
}


int main(int argc, char *argv[])
{


int myFileDescriptor[argc-1][2];
char *buffer = (char*)malloc(sizeof(char));
char *myResult = (char*)malloc(sizeof(char));
pid_t myProcessID;
int a, b, c;

// Check if user has inputed correct amount of arguments
if (argc < 2)
{
	fprintf(stderr, "my Apologies, there seems to have been an error in your filename. please try again.", argv[1]);
	exit(0); //create a non-zero error code for filename error
}
else{
	for(a = 1; a <= argc -1; i++)
	{
	myProcessID = fork();
	pipe(myFileDescriptor[a]);
	}
	if(myProcessID <0){
		perror("Error");
	}
	    else if (myProccessID == 0){
		myResult = wordFrequencyCounter(argv[a]);
		close(myFileDescriptor[a][READ]);
		write(myFileDescriptor[a][WRITE], myResult, (strlen(myResult) +1) );
		close(myFileDescriptor[a][WRITE]);
		exit(0);		
		
	}
	
	
    }
		for(c = 1; c <= argc - 1; c++){
			wait(NULL);
		}
		// Parent process reads from child process and prints out results
		for(b = 1; b <= argc - 1 ; b++){
			close(myFileDescriptor[b][WRITE]);
			read(myFileDescriptor[b][READ], buffer, sizeof(char*)* (strlen(buffer) + 100000) );
			close(myFileDescriptor[b][READ]);
			printf("%s", buffer);
		}
}
return (0);

}
// --LINKS I TOOK CODE FROM / WAS DIRECTLY INSPIRED BY--
//https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-31.php
//This website taught me to how to parse a string (how i assume the text will be provided)

//https://www.geeksforgeeks.org/find-the-k-most-frequent-words-from-a-file/
//This documents how to read a file, and store the most frequently used words into a variable "k"

//https://stackoverflow.com/questions/15508828/program-to-read-words-from-a-file-and-count-their-occurrence-in-the-file
//This program reads the file and records all the words, as well as counting the occurrences in each word 

//https://github.com/sarracini/Word-Frequency-Counter/blob/master/rvw.c
//This program reads an input file and count the frequency of words

//https://stackoverflow.com/questions/50240697/write-a-c-program-to-remove-the-occurrence-of-the-word-the-from-an-entered-str
//This program reads an input sentence and removes the word "word" from a string -- this was 
// modified to remove special chars

//https://stackoverflow.com/questions/18109458/read-from-a-text-file-and-parse-lines-into-words-in-c
//also how to parse a text file

//-- USELESS LINKS-- 
//https://www.tutorialspoint.com/c_standard_library/c_function_fclose.htm
//fclose documentation

https://stackoverflow.com/questions/2423628/whats-the-difference-between-a-file-descriptor-and-file-pointer
//why file descriptor was important to use instead of a file pointer (reading from file)

//https://stackoverflow.com/questions/8807448/cant-add-systemexit-in-c
//helped with exit statement
