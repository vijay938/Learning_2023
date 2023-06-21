#include <stdio.h>
  
void decimaltohexadecimal (int num1 )
{
    int decimalNumber = num1;
    
    printf("Hexadecimal number is:%X\n", decimalNumber);
}


void decToBinary(int n)
{
	int binaryNum[32];

	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
    printf("Binary number is:");

	for (int j = i - 1; j >= 0; j--)
		printf("%d", binaryNum[j]);
        printf("\n");
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d\n",&n);
    
	decToBinary(n);
    decimaltohexadecimal(n);
	return 0;
}

