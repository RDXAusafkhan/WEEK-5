#include<stdio.h>
#include<ctype.h>
main(){
	char n;
	printf("Enter any Alphabet: ");
	scanf("%c",&n);
	n=tolower(n);
	if (n=='a'||n=='e'||n=='i'||n=='o'||n=='u'){
		printf("Entered character is Vowel");}
	else printf("Entered character is Consonant");
	return 0;	
}
