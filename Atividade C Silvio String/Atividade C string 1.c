#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
char str1[40],str2[10],str3[40]="teste";

strcpy(str1,"inicio");
strcpy(str2,"FIM");
strcat(str1,str2);
strcat(str3,str1);
printf("%s\n",str1);
printf("%s\n",str3);
system("pause");
}
