#include <stdio.h>


 /*do while ����
int main(void) {

	int total = 0;
	int num = 0;

	do
	{
		printf("���� �Է� (0 to quit): ");
		scanf_s("%d", &num); //���� num�Է� ����

		total += num; //total�� �Է¹��� ���� �����ش�

	} while (num != 0); //num�� 0�� �ƴϸ� ��� �ݺ�, 0�̸� �ݺ�����

	printf("total: %d", total); //total�� ���

	return 0;
}
*/

/* if else ����
int main(void) {

	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է°� 0���� ����\n");

	else printf("�Է°� 0���� ���� ����(ũ�ų� ����)");

	
	
	return 0;
}
*/

// 3�� ������ ����


/*int main(void) {
		int num, abs; //abs�� ������ �ǹ��Ѵ�.

		printf("���� �Է�: ");
		scanf_s("%d", &num);
		
		 // abs = num > 0 ? num : num * (-1); //num�� ����̸� ������ num, num�� 0���� ũ�� ������(�����̸�) -1�� ���� ������ ���Ѵ�.

		if (num > 0)
			abs = num;
		else abs = num * (-1);

		printf("����: %d", abs);

		return 0;
} */

int smallest(int a, int b, int c) {
	int min = (a > b) ? b : a;
	return (min > c) ? c : min;
}

int biggest(int a, int b, int c) {
	int max = (a > b) ? a : b; 
	return max > c ? max : c;
}

int main(void)
{
	int x, y, z;
	printf("3�� ���� �Է�: ");
	scanf_s("%d %d %d", &x, &y, &z);
	
	printf("%d %d %d �� ���� ���� ���ڴ� %d, ���� ū ���ڴ� %d�Դϴ�.", x, y, z, smallest(x,y,z), biggest(x,y,z));
	
	return 0;
}
	
