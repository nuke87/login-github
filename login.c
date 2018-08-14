#include <stdio.h>

int main(int argc, char const *argv[])
{   
	char name1[4];
	char name[] = "vadim";
	char pw1[7];
	char pw[] = "abrams87";
	
	printf("-------LOGIN SYSTEM-------\n");
	printf("...........................\n");
	printf("Bitte Benutzername eingeben:\n");

	scanf("%s",&name1);

	if (strcmp(name1,name) == 0)
	{
		printf("Bitte Passwort eingeben:\n");

		scanf("%s",&pw1);

	    if (strcmp(pw1, pw) == 0)
	        {
		      printf("Willkommne im System!\n");
	        }else{
		          printf("Passwort falsch\n");
	             }


	}else{
		printf("Login Name falsch\n");
		
	}
	return 0;
}