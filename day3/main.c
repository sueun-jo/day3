#include <stdio.h>


 /*do while 예제
int main(void) {

	int total = 0;
	int num = 0;

	do
	{
		printf("정수 입력 (0 to quit): ");
		scanf_s("%d", &num); //더할 num입력 받음

		total += num; //total에 입력받은 숫자 더해준다

	} while (num != 0); //num이 0이 아니면 계속 반복, 0이면 반복종료

	printf("total: %d", total); //total값 출력

	return 0;
}
*/

int main(void) {

	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력값 0보다 작음\n");

	else printf("입력값 0보다 작지 않음(크거나 같음)");

	
	
	return 0;
}