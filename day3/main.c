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

int main(void) {

	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է°� 0���� ����\n");

	else printf("�Է°� 0���� ���� ����(ũ�ų� ����)");

	
	
	return 0;
}