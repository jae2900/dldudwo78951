#include <iostream>

using namespace std;

void sol()
{
	int N, L, cnt = 0;
	cin >> N >> L;
	int D1 = 0,D2;
	for (int i = 0; i < N; i++)
	{
		int R, G, sum;
		cin >> D2 >> R >> G;
		sum = R + G;
		cnt += D2 - D1;
		if (cnt%sum < R)
			cnt += R - cnt % sum;
		D1 = D2;
	}
	cnt += L - D1;
	cout << cnt;
}

int main()
{
	sol();

	return 0;

}