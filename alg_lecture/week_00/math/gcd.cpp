/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:49:40 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 14:13:38 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	/**
	 * 12 : 10
	 * 10 : 12
	 * 2 : 10
	 * 0 : 2
	*/
	cout << a << " : " << b << "\n";
	if (a == 0) return b;
	// a가 0이 될때까지 b mod a 연산을 하면 최대공약수가 나옴.
	return gcd(b % a, a);
}

int main() {
	/**
	 * 최대공약수
	 * 공약수(common divisor)란 두 수 이상의 여러 수의 공통된 약수
	 * 즉, 최대 공약수는 두 수 이상의 여러 수의 공약수 중 최대인 수이다.
	*/
	int num = gcd(12, 10);
	cout << num << "\n"; // 2

	return 0;
}