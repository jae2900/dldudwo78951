#include<stdio.h>
#include<algorithm>
using namespace std;
int t, n, a[10000];

int main() {
	printf("�׽�Ʈ �����Է� : ");
	scanf("%d", &t);
	while (t--) 
	{
		printf("���� �����Է� : ");
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			printf("%d��° �� : ", i);
			scanf("%d", &a[i]);
		}
			
		sort(a, a + n);
		int res = 0;
		for (int i = 2; i < n; i++)
			res = max(res, a[i] - a[i - 2]);
		printf("��� ��� : ");
		printf("%d\n", res);
	}
	return 0;
}