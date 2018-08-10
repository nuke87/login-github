#include <stdio.h>

int main(int argc, char const *argv[])
{   
	char a;
	long b;
	printf("-------LOGIN SYSTEM-------\n");
	printf("...........................\n");
	printf("Bitte Benutzername eingeben (ein Buchstabe):\n");
	
	scanf("%c", &a);
	if (a == 'v')
	{
		printf("Benutzername korrekt\n");
	}else
	printf("Benutzername falsch\n");

    printf("Bitte Password eingeben:\n");

    scanf("%ld",&b);

    if (b == 845671)
    {
    	printf("Passwort korrekt\n");
    }else
    printf("Passwort falsch\n");

	return 0;
}