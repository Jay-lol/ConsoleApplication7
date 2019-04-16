#include <cstdio>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice[6] = { 0 , };		// 주사위값을 넣을 배열을 만들고, 그 값을 0으로 초기화한다.
	int num = 30000;				// 돌리는 횟수를 지정해준다.

	srand((unsigned)time(NULL));	// 난수의 시드값을 설정해준다.

	for (int i = 0; i < num; i++)
		dice[rand() % 6]++;			// rand()함수를 통해 생성된 난수를 인덱스로 잡아서 그 값을 1 증가시켜 준다.
									// 이것을 통해 주사위 면이 나온 횟수를 셀 수 있다.

	printf("The Statistics\n");
	for (int i = 0; i < 6; i++)
		printf("SIDE %d OCCURED %d \n", i + 1, dice[i]);

	return 0;
}

