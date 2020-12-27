#include<stdio.h>
#include<algorithm>
using namespace std;
int t, n, a[10000];

int main() {
	printf("테스트 개수입력 : ");
	scanf("%d", &t);
	while (t--) 
	{
		printf("숫자 개수입력 : ");
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			printf("%d번째 수 : ", i);
			scanf("%d", &a[i]);
		}
			
		sort(a, a + n);
		int res = 0;
		for (int i = 2; i < n; i++)
			res = max(res, a[i] - a[i - 2]);
		printf("결과 출력 : ");
		printf("%d\n", res);
	}
	return 0;
}