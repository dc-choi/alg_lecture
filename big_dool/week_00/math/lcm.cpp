/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:05:36 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 14:14:03 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int lcm(int a, int b) {
	// 두 수를 곱한거에서 최대 공약수를 나누면 최소공배수
	return (a * b) / gcd(a, b);
}

int main() {
	/**
	 * 최소공배수
	 * 공배수(common multiple)란 두 수 이상의 여러 수의 공통된 배수
	 * 즉, 최소공배수는 두 수 이상의 여러 수의 공배수 중 최소인 수이다.
	*/
	int num = lcm(12, 10);
	cout << num << "\n";

	return 0;
}