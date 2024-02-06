
#include "Header.h"







int main() {
	int verif = 0, verif1 = 0, verif2 = 0;
	cr array;
	char z;
	printf(" count of rows %d\n", rows);
	printf(" count of cols%d\n", cols);


	while (verif == 0) 
	{
		printf("a - create arr, b - enter the values in array, c - print array\n  ");
		scanf_s(" %c", &z);

		switch (z)
		{
			case ('a'):
				array = create_Arr();
				if (array.array == NULL) {
					printf("Error with creating\n");
				}
				z = NULL;
				verif1 = 1;
				break;

			case ('b'):
				if (verif1 == 1) {
				values(array);
				verif2 = 1;

				}
				else {
					system("cls");
				}
				z = 0;
				break;

			case ('c'):
				if ((verif1 == 1) && (verif2 == 1)) {
					printArray(array);

				}
				else {
					system("cls");
				}
				z = 0;
				break;
			case ('d'):


		default:
			system("cls");
			printf("Wrong enter");
			z = 0;
			break;
		}
	}


	return 0;
}
