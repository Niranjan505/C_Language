#include <stdio.h>
#include <conio.h>
main()
{
   int a,b;
    clrscr();


    printf("press 1 for english\n");
    printf("press 2 for Hindi \n");
    printf("press 3 for Gujarati \n");
    printf("\n\n");
    printf("Enter your choice :");
    scanf("%d",&a);
      printf("\n\n");
     switch (a)
     {
       case 1:
	    printf(" Press 1 for Internet Recharge\n");
	    printf(" Press 2 for Top-up Recharge\n");
	    printf(" Press 3 for Special Recharge\n");
	    printf("\n\n");
	    printf("Enter your choice: ");
	    scanf("%d",&b);

	 switch(b)
	 {
	   case 1:
		 printf(" You have successfully done a Internet Recharge. ");
	    break;
	   case 2 :
		  printf("You have successfully done a  Top-up Recharge. ");
	    break;
	 case 3:
		printf("  You have successfully done a special Recharge. ");
	    break;
	  default :
		  printf(" not valide....!!!!  ");
	 }
	 break;

	case 2:
	    printf("Internet Recharge ke liye 1 dabaiye\n");
	    printf("Top-up Recharge ke liye 2 dabaiyr\n");
	    printf("Special Recharge ke liye 3 dabaiye\n");
	    printf("\n\n");
	    printf("Enter your choice: ");
	    scanf("%d",b);

	 switch(b)
	 {
	   case 1:
		 printf(" Apane safaltapurvak Internet Recharge kar liya he. ");
	    break;
	   case 2 :
		  printf("Apane safalatapurvak Top-up Recharge kar liya he. ");
	    break;
	 case 3:
		printf(". Apane safalatapurvak special Recharge kar liya he  ");
	    break;
	  default :
		  printf(" Apane dabaiya numbar  amanya he .....!!! ");
	 }
	 break;


	case 3:
	    printf("Internet Recharge mate 1 dabavo\n");
	    printf("Top-up Recharge mate 2 dabavo \n");
	    printf("Special Recharge mate 3 dabavo \n");
	    printf("\n\n");
	    printf("Enter your choice: ");
	    scanf("%d",b);

	 switch(b)
	 {
	   case 1:
		 printf(" Tame safaltapurvak Internet Recharge kariyu chhe . ");
	    break;
	   case 2:
		  printf("Tame safalatapurvak Top-up Recharge kariyu chhe . ");
	    break;
	   case 3:
		printf("  Tame safalatapurvak special Recharge kariyu chhe .");
	    break;
	   default :
		  printf(" Tame dabavelo numbar Hajar ma nathi ........!!");
	 }

      break;
      default:

      printf("sorry not valide .....!!!!!!!");

     }


    getch();
}
