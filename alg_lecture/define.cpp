#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define loop(x, n) for(int x = 0; x < n; x++)
/**
 * define이란?
 * 상수나 매크로를 정의하는 부분을 말한다.
 * 
 * 여기서는 PI를 상수로 지정하고 반복문을 매크로로 정의했다.
*/

int main() {
	cout << PI << '\n';
	int sum = 0;

	loop(i, 10){
		sum += i;
	}
	// for (int i = 0; i < 10; i++) {
	// 	sum += i;
	// }

	cout << sum << '\n';
	return 0;
}
