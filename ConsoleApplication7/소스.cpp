#include <cstdio>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice[6] = { 0 , };		// �ֻ������� ���� �迭�� �����, �� ���� 0���� �ʱ�ȭ�Ѵ�.
	int num = 30000;				// ������ Ƚ���� �������ش�.

	srand((unsigned)time(NULL));	// ������ �õ尪�� �������ش�.

	for (int i = 0; i < num; i++)
		dice[rand() % 6]++;			// rand()�Լ��� ���� ������ ������ �ε����� ��Ƽ� �� ���� 1 �������� �ش�.
									// �̰��� ���� �ֻ��� ���� ���� Ƚ���� �� �� �ִ�.

	printf("The Statistics\n");
	for (int i = 0; i < 6; i++)
		printf("SIDE %d OCCURED %d \n", i + 1, dice[i]);

	return 0;
}

