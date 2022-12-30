/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eratosthenes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:20:16 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 14:40:34 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

bool eratosthenes(int num) {
	if (num <= 1) return 0; // 자연수 1을 제거하는 로직
	if (num == 2) return 1; // 없어도 상관없으나 성능을 위해 추가
	if (num % 2 == 0) return 0; // 없어도 상관없으나 성능을 위해 추가
	
	// 2, 3, 5, 7 각각 체로 걸러냄 (위에서 2를 걸러내면 3부터 시작)
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	/**
	 * 에라토스테네스의 체
	 * 고대 그리스의 수학자 에라토스테네스가 만들어 낸 소수를 찾는 방법
	 * 마치 체로 치듯이 수를 걸러낸다고 하여 체라는 이름을 사용함.
	*/
	for (int i = 1; i <= 100; i++) {
		if (eratosthenes(i)) {
			cout << i << "는 소수! \n";
		}
	}

	return 0;
}