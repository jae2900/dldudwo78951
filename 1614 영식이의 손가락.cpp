#include <iostream>

using namespace std;

void solution()
{
	int fin;
	long long int answer, cnt;

	cin >> fin;
	cin >> cnt;
	if (fin == 1)
		answer = cnt * 8;
	else if (fin == 5)
		answer = cnt * 8 + 4;
	else
	{
		answer = cnt / 2 * 8;
		if (cnt % 2 == 0)
			answer += fin - 1;
		else
			answer += 9 - fin;
	}
	if (fin == 1 && cnt == 0)
		answer = 0;
	cout << answer << endl;


}


int main()
{
	solution();
	return 0;
}