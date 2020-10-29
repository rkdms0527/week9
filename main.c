#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ROWS 3
#define COLS 3 
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS]);
void printMatrix(int A[][COLS]);

int main(void)
{	
	int A[ROWS][COLS] = {
 		{2, 3, 0},
 		{8, 9, 1},
 		{7, 0, 5} };
	int B[ROWS][COLS] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1} };

	int C[ROWS][COLS]; 

	addMatrix(A, B, C);
	printMatrix(C); 
}

//위 함수들이 선언이 되지 않았다고 뜨네요 -> 함수 입력이 틀렸습니다.   
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
	int i, j;
	
	for (i=0;i<ROWS;i++)
		for(j=0;j<COLS;j++)
			C[i][j] = A[i][j]+B[i][j];
}
//숫자들이 붙어 보이는 이유는 프린트할때 공백을 주지 않아서 입니다  
void printMatrix(int A[][COLS])
{
	int i, j;
	for (i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
}



