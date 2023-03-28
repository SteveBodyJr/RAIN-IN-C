#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
  system("cls");
  int a , b , c;
     printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("            \t\t\t\t\t\t                cccccccccccc ccccccc cc ccccccccccc\n");
	printf("            \t\t\t\t\t\t            ccccccc cccccccccccccccccccccccccccccc ccccc\n");
	printf("            \t\t\t\t\t\t           ccccccccccccccccc ccccc ccccccc ccccccccc ccc cc\n");
	printf("            \t\t\t\t\t\t          ccccccccccccccccccccc cccc cc cccccccccccccccccccccc\n");
	printf("            \t\t\t\t\t\t         cccccc cc cccccc  cccccccccc  ccc ccccccccccccccccccccc\n");
	printf("            \t\t\t\t\t\t           cccccc cccc ccccccccc cccccccccccccccccccccccccccccc\n");
	printf("            \t\t\t\t\t\t            cccccccccc cccccc cccc cc ccccccccccccccccccccccc\n");
	printf("            \t\t\t\t\t\t              ccccccc cccccccccccc cccccccccccccccccccccccc\n");

 for (a = 0; a < 22; a++)
 {
 	printf("            \t\t\t\t\t\t                 |  |  |  |  |  |  | | |  | | | |  ||  |\n");
//	printf("            \t\t\t                | |   |  | |  | |  |    |\n");

  system("color 3f");
  Sleep(1);
   if (a==4)
   {
   	
   	 system("color 9f");
   	
   }

    if (a==5)
   {
   	
   	 system("color 0f");
   	
   }
   
    if (a==6)
   {
   	
   	 system("color 9f");
   	
   }

   if (a==7)
   {
   	
   	 system("color 3f");
   	
   }

}

	return main();
}