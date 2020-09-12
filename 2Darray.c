#include<stdio.h>
int inputa(int a[10][10] , int row, int column)
{
	printf("input elements of mairix a\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	scanf("%d", &a[i][j]);
	}
	}
	return 0;
}// inputa closed

int inputb(int b[10][10] , int row, int column)
{
	printf("input elements of mairix b\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	scanf("%d", &b[i][j]);
	}
	}
	return 0;
}// inputb closed

int displaya(int a[10][10], int row, int column)
{
	printf("displaying elements of mairix a\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	printf("%d \t\t", a[i][j]);
	}
	printf("\n");
    }
  return 0;
} //displaya closed

int displayb(int b[10][10] , int row, int column)
{
	printf("displaying elements of mairix b\n");
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<column;j++)
	{
	printf("%d \t\t", b[i][j]);
	}
	printf("\n");
	}
   return 0;
}//displayb closed

int sumOfTwoArray(int a[10][10] , int b[10][10] , int res[10][10], int row, int column)
{

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		res[i][j]=a[i][j] + b[i][j];
	}
}

for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
		printf("%d \t\t", res[i][j]);
	}
	printf("\n");
}
 return 0;
}

int main()
{
	int a[10][10];
	int b[10][10];

	int res[10][10]; //to store result
    
    int row;    //for matrix a
	int column;

    int row1;
    int column1; //for matrix b

    int choice ;
 
    int k = 0; //menue loop variable
    do
    {
    printf("Press 1 to enter matrix a\n");
    printf("Press 2 to enter matrix b\n");
    printf("Press 3 to display matrix a\n");
    printf("Press 4 to display matrix b\n");
    printf("Press 5 to ADD matrix a and matrix b\n");
    printf("Press 6 to exit program\n");
    scanf("%d", &choice);
    printf("\n");

    switch(choice)
    {
     case 1:
    printf("input row of the matrix a it should be less than 10\n");
    scanf("%d", &row);
    printf("input column of matrix a it should be less than 10\n");
    scanf("%d", &column);
    inputa(a , row, column);
     printf("\n");
     break;
     
     case 2:
    printf("input row of the matrix b it should be less than 10\n");
    scanf("%d", &row1);
    printf("input column of matrix b it should be less than 10\n");
    scanf("%d", &column1);
    inputb(b , row1, column1);
     printf("\n");
     break;
	
    case 3:
    printf("Displaying Matrix a\n");
    displaya(a, row, column);
     printf("\n");
     break;
	
	 case 4:
    printf("Displaying Matrix b\n");
    displayb(b , row1, column1);
     printf("\n");
     break;
     
     case 5:
     if( row == row1 && column == column1)
	{
		printf("performing Addition of matrix A and matrix B \n");
		sumOfTwoArray( a, b, res, row, column);
	}
	else 
	{
		printf("Addition of Matrix A and Matrix B is not possible \n");
	}
	break;

	case 6:
	printf("Program Terminated!!...\n");
	k=200;
	break;

	default:
	printf("Wrong choice\n");
	break;
}
} while(k<100);

return 0;

}// main closed