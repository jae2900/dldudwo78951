#include <iostream>

using namespace std;
/*
void sol()
{
	int N, D = 0, D_sum= 0, V, V_sum = 0, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> D >> V;

		D_sum += D;
		V_sum += V;
	}
	D_sum -= D;
	cnt = V_sum - D_sum;
	if (cnt < 0)
		cout << 0;
	else
		cout << cnt << endl;
}*/
void sol()
{
	int N, D = 0, d = 0, V, a = 0, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		d = D;
		cin >> D >> V;

		cnt += V - d;


	}
	cout << cnt << endl;
}
// 다운로드 시간-재생시간이 음수가 나올경우
// 뒤에 생기는 것만 감안할수 있음

int main()
{
	sol();
	return 0;
}