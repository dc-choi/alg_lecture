/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:21:10 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 16:37:46 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int sqrt2(int num) {
	int result = 0;

	for (int i = 1; i * i <= num; i++) {
		result = i;
	}

	return result;
}

int main() {
	/**
	 * 제곱근
	 * 제곱의 반대 개념
	 * 
	 * EX) 9의 제곱근은 3, 3의 제곱은 9
	 * a = x^2를 만족하는 경우 x는 a의 제곱근이라고 함.
	*/
	// sqrt는 기본적으로 double을 사용하기 때문에 형변환이 필수
	int result = (int)sqrt(16);
	int num = sqrt2(16);
	cout << result << "\n";
	cout << num << "\n";

	return 0;
}