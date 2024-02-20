#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	
	
	srand(time(NULL));
	int i;
	int arr1[30];
	int arr2[30];
	int arr3[30];
	int j = 1;
	int score = 0;


	//FÝRST PLAYER//

	printf("Marry: ");

	for (i = 0; i < 12; i++)
	{
		int ball1 = rand() % 11;
		int ball2 = rand() % (11 - ball1);
		arr1[j] = ball1;
		arr2[j] = ball2;
		j++;
	}
	i = 0;
	j = 1;

	for (i = 0; i < 11; i++)
	{
		if (i < 9)
		{
			if (arr1[j] == 10)
			{
				printf("X\t");
				score = score + arr1[j] + arr2[j];
				if (arr1[j + 1] == 10)
				{
					score = score + arr1[j + 1] + arr1[j + 2];
				}
				else
				{
					score = score + arr1[j + 1] + arr2[j + 1];
				}

			}
			else if (arr1[j] < 10 && arr1[j] + arr2[j] == 10)
			{
				printf("%d/\t", arr1[j]);
				score = score + arr1[j] + arr2[j] + arr1[j + 1];

			}

			else if (arr1[j] + arr2[j] < 10)
			{
				printf("%d%d\t", arr1[j], arr2[j]);
				score = score + arr1[j] + arr2[j];

			}
		}
		else
		{
			if (arr1[j] == 10)
			{
				printf("X");
				if (arr1[j + 1] == 10)
				{
					if (i == 10)
					{
						break;
					}
					else
					{
						score = score + arr1[j] + arr1[j + 1] + arr1[j + 2];
						arr3[j] = score;
						printf("X");
						continue;
					}
				}
				else if (arr1[j + 1] < 10 && arr1[j + 1] + arr2[j + 1] == 10)
				{
					printf("%d/", arr1[j + 1]);
					score = score + arr1[j] + arr1[j + 1] + arr2[j + 1];
					arr3[j] = score;
					break;
				}
				else if (arr1[j + 1] + arr2[j + 1] < 10)
				{
					printf("%d%d", arr1[j + 1], arr2[j + 1]);
					score = score + arr1[j] + arr1[j + 1];
					arr3[j] = score;
					break;
				}
				i++;
			}
			else if (arr1[j] < 10 && arr1[j] + arr2[j] == 10)
			{
				printf("%d/", arr1[j]);
				if (arr1[j + 1] == 10)
				{
					printf("X");
				}
				else
				{
					printf("%d", arr1[j + 1]);
				}
				score = score + arr1[j] + arr2[j] + arr1[j + 1];
				arr3[j] = score;

				break;
			}

			else if (arr1[j] + arr2[j] < 10)
			{
				printf("%d%d", arr1[j], arr2[j]);
				score = score + arr1[j] + arr2[j];
				arr3[j] = score;
				break;
			}
		}
		arr3[j] = score;
		j++;
	}
	printf("\n\n\t");

	int k = 1;
	for (k = 1; k < 11; k++)
	{
		printf("%d\t", arr3[k]);
	}
	printf("\n\n");



	//SECOND PLAYER///


	int l;
	int total1[30];
	int total2[30];
	int total3[30];
	int m = 1;
	int point = 0;

	printf("Harry: ");

	for (l = 0; l < 12; l++)
	{
		int ball1 = rand() % 11;
		int ball2 = rand() % (11 - ball1);
		total1[m] = ball1;
		total2[m] = ball2;
		m++;
	}
	l = 0;
	m = 1;
	for (l = 0; l < 11; l++)
	{
		if (l < 9)
		{
			if (total1[m] == 10)
			{
				printf("X\t");
				point = point + total1[m] + total2[m];
				if (total1[m + 1] == 10)
				{
					point = point + total1[m + 1] + total1[m + 2];
				}
				else
				{
					point = point + total1[m + 1] + total2[m + 1];
				}

			}
			else if (total1[m] < 10 && total1[m] + total2[m] == 10)
			{
				printf("%d/\t", total1[m]);
				point = point + total1[m] + total2[j] + total1[m + 1];

			}

			else if (total1[m] + total2[m] < 10)
			{
				printf("%d%d\t", total1[m], total2[m]);
				point = point + total1[m] + total2[m];

			}
		}
		else
		{
			if (total1[m] == 10)
			{
				printf("X");
				if (total1[m + 1] == 10)
				{
					if (l == 10)
					{
						break;
					}
					else
					{
						point = point + total1[m] + total1[m + 1] + total1[m + 2];
						total3[m] = point;
						printf("X");
						continue;
					}
				}
				else if (total1[m + 1] < 10 && total1[m + 1] + total2[m + 1] == 10)
				{
					printf("%d/", total1[m + 1]);
					point = point + total1[m] + total1[m + 1] + total2[m + 1];
					total3[m] = point;
					break;
				}
				else if (total1[m + 1] + total2[m + 1] < 10)
				{
					printf("%d%d", total1[m + 1], total2[m + 1]);
					point = point + total1[m] + total1[m + 1];
					total3[m] = point;
					break;
				}
				l++;
			}
			else if (total1[m] < 10 && total1[m] + total2[m] == 10)
			{
				printf("%d/", total1[m]);
				if (total1[m + 1] == 10)
				{
					printf("X");
				}
				else
				{
					printf("%d", total1[m + 1]);
				}
				point = point + total1[m] + total2[m] + total1[m + 1];
				total3[m] = point;

				break;
			}

			else if (total1[m] + total2[m] < 10)
			{
				printf("%d%d", total1[m], total2[m]);
				point = point + total1[m] + total2[m];
				total3[m] = point;
				break;
			}
		}
		total3[m] = point;
		m++;
	}
	printf("\n\n\t");

	k = 1;
	for (k = 1; k < 11; k++)
	{
		printf("%d\t", total3[k]);
	}
	printf("\n\n\n\n");


	return 0;
}