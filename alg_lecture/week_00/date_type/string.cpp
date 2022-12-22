/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:57:42 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 15:23:43 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * string
	 * 문자열에 대한 자료형이다.
	 * 
	 * 한글로 선언한 경우 배열의 첫번째 부분을 출력했을 때 출력이 안되는 것을 확인
	 * 이는 문자열을 선언하고 a[0] 이런식으로 접근한다는건 1바이트씩 출력한다는 것을 의미함.
	 * 
	 * 영어는 한 글자당 1바이트지만 한글은 한 글자당 3바이트입니다.
	*/
	string a = "나는야 짜파게티 요리사";
	cout << a[0] << "\n";
	cout << a[0] << a[1] << a[2] << "\n";
	cout << a << "\n";

	string b = "abc";
	cout << b[0] << "\n";
	cout << b << "\n";

	// string에서 + 하는 연산은 기본적으로 아스키코드를 사용한다고 함.
	// 참고: https://hegosumluxmundij.tistory.com/54
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "1234";
	s[0]++;
	cout << s << "\n";

	char c = 'c';
	cout << (int)c << "\n"; // 99

	return 0;
}