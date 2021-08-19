/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
// calculate positions of vowels in a string  using pointers //
#include<stdio.h>
int main()
{
    char string[100];
    char *ptr;
    int c;
     
    printf("Enter a string:\n");
    gets(string);
     
    //assign address of string to pointer//
    ptr=string;
     
    while(string[c]!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
		printf("%c found at %d position\n",*ptr,c);
        //increase the pointer, to point next character//
        ptr++;      
        c++;
    }         
    return 0;
}
