/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:13:09 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 16:20:17 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int pow2(int num, int exponent) {
	int result = 1;

	for (int i = 0; i < exponent; i++)
		result *= num;
	
	return result;
}

int main() {
	/**
	 * 거듭제곱
	 * 거듭 제곱을 구하는 로직을 짜야하는 경우가 생김
	 * 그럴 경우에는 pow 함수를 사용하면 됨.
	*/
	int num = pow(2, 4);
	int num2 = pow2(2, 4);
	cout << num << "\n";
	cout << num2 << "\n";

	return 0;
}