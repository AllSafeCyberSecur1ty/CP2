//substring program in C

#include <stdio.h>

void find_substring(char str[], char substr[], int start, int l)

{

int i, j;

 

for(i= start, j = 0; str[i] !='\0' && l > 0; i++, j ++, l--)

{

substr[j] = str[i];

}

substr[j] = '\0';            //terminating the string

 

printf ("\n The substring is : ");

puts (substr);

}

 

int main()

{

char *str, substr[100];

int length, l, size = 100, start;

 

printf("\n Enter the main string: ");

str = (char*)malloc(size);

length = getline(&str, &size, stdin);

 

length --;



printf("\n Enter the position from which to start the substring (Index starts from 0): ");

scanf ("%d", &start) ;

printf("\n Enter the length of the substring: ") ;

scanf ("%d", &l);





if(start < 0 || start > length)

printf("The start index position entered is invalid.\n");

else

{

find_substring(str, substr, start,l);

}

 

return 0;

}