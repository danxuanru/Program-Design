#include <stdio.h>
#include "ctype.h" //toupper

int main() {

	char ch;
	int sum=0;

	do {
		ch = getchar();
		ch = toupper(ch);

		if(ch=='A'||ch=='E'||ch=='I'||ch=='L'||ch=='N'||ch=='O'||ch=='R'||ch=='S'||ch=='T'||ch=='U')
		{
			sum += 1;
		}
		else if (ch=='D'||ch=='G')
		{
			sum += 2;
		}
		else if (ch=='B'||ch=='C'||ch=='M'||ch=='P')
		{
			sum += 3;
		}
		else if (ch=='F'||ch=='H'||ch=='V'||ch=='W'||ch=='Y')
		{
			sum += 4;
		}
		else if (ch=='K')
		{
			sum += 5;
		}
		else if (ch=='J'||ch=='X')
		{
			sum += 8;
		}
		else if (ch=='Q'||ch=='Z')
		{
			sum += 10;
		}

		// switch (ch)
		// {
		// case 'A':
		// case 'E':
		// 	sum += 1;
		// 	break;
		
		// default:
		// 	break;
		// }
		
	} while (ch != '\n' && ch != EOF);  // !!!EOF
	

    printf("%d", sum);

	return 0;
}