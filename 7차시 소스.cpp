#include <stdio.h>

int main(void)
{
	char sel;
	printf("M 오전, A 오후 E 저녁 \n");
	printf("입력: ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;	//사실 불필요한 break문!

	default :
		printf("잘못 입력했습니다. \n");
	}
	return 0;

}

/*
	int num = 0;

	printf("정수 입력 :");
	scanf_s("%d", &num);

	if (num < 0)
	{
		printf("입력된 수는 음수입니다.\n");
	}
	if (num > 0)
	{
		printf("입력된 수는 양수입니다.\n");
	}
	if (num == 0)
	{
		printf("입력된 수는 0입니다.\n");
	}
	*/

	/*
		int opt;
		double num1 = 0.0 , num2 = 0.0;
		double result = 0.0;


		printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
		printf("선택하세요 ?");
		scanf_s("%d", &opt);

		if ((opt < 1) || (opt > 4))
		{
			printf(" 잘못 입력하였습니다.\n");
			result -1;
		}
		printf("두 개의 실수 입력");
		scanf_s("%lf %lf", &num1, &num2);

		if (opt == 1)
		{
			result = num1 + num2;
		}
		if (opt == 2)
		{
			result = num1 - num2;
		}if (opt == 3)
		{
			result = num1 * num2;
		}if (opt == 4)
		{
				result = num1 / num2;
		}
		printf("결과 :%lf \n", result);
		*/

/*
			int num;
			printf("정수 입력:");
			scanf_s("%d", &num);

			if (num < 0)
			{
				printf("입력된 정수는 0보다 작다\n");
			}
			else
			{
				printf("입력된 정수는 0보다 작지 않다\n");
			}
			*/

			/*
				int opt;
				double num1, num2;
				double result;
				printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
				printf("선택? ");
				scanf_s("%d", &opt);
				printf("두 개의 실수 입력:");
				scanf_s("%lf %lf", &num1, &num2);

				if (opt == 1)
					result = num1 + num2;
				else if (opt == 2)
					result = num1 - num2;
				else if (opt == 3)
					result = num1 * num2;
				else if   (opt == 4)
				{
					result = num1 / num2;
				}
				else
				{
					printf("잘못 입력하였습니다.\n");
					return -1;
				}
				printf("결과: %f \n", result);
				*/

				/*
					int num, abs;
					printf("정수 입력: ");
					scanf_s("%d", &num);

					abs = (num > 0) ? num : num * (-1);
					printf("절댓값: %d \n\n", abs);
					*/

					/*
						int sum = 0, num = 0;

						while (1)
						{
							sum += num;
							if (sum > 5000)
								break; // break문 실행! 따라서 반복문 탈출
							num++;
						}

						printf("sum: %d \n", sum);
						printf("num: %d \n", num);
						*/

						/*
							int num;
							printf("start! ");

							for (num = 1; num < 20; num++)
							{
								if (num % 2 == 0 || num % 3 == 0)
								{
									continue;
								}
								printf("%d", num );

							}
							printf("end! \n\n");
							*/

							/*
								int num;
								printf("1 이상 5 이하의 정수 입력:");
								scanf_s("%d",&num);
								switch (num)
								{
								case 1:
										printf("1은 ONE \n");
										break;
								case 2:
										printf("2는 TWO \n");
										break;
								case 3:
										printf("3은 THREE \n");
										break;
								case 4:
										printf("4는 FOUR \n");
										break;
								case 5:
										printf("5는 FIVE \n");
										break;
								default:
									printf("I don't know! \n");
								}
								*/