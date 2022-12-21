/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getline.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:17:59 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 10:53:20 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	// cin은 개행문자까지만 받는데 개행문자 이후로도 값을 받기 위해서는 getline()을 사용해야 한다.
	// string s;
	// getline(cin, s);
	// cout << s << "\n";

	// getline()을 여러번 써야하는 상황에서는 특정 문자열을 기반으로 버퍼플래시를 하고 받으면 된다.
	int loop;
	cout << "how many loop input string: ";
	cin >> loop;
	
	string s;
	string bufferFlush;
	getline(cin, bufferFlush); // 안해주면 밑의 반복문이 실행이 안됨.
	for (int i = 0; i < loop; i++) {
		cout << "in your string: ";
		getline(cin, s);
		cout << s << "\n";
	}

	return 0;
}
