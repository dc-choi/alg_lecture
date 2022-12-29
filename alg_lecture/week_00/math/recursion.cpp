/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:41:01 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 21:42:22 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int fact_loop(int num) {
	if (num == 1 || num == 0) return 1;
	int result = 1;
	for (int i = 1; i <= num; i++) result *= i;
	return result;
}
// factorial은 사실 반복문의 성능이 더 좋음.
int fact(int num) {
	// cout << "fact : " << num << "\n";
	// 1!, 0!은 1이다.
	if (num == 1 || num == 0) return 1;
	return num * fact(num - 1);
}

int fibo(int num) {
	// cout << "fibo : " << num << "\n";
	// 0, 1은 그 값을 그대로 반환한다.
	if (num <= 1) return num; 
	return fibo(num - 1) + fibo(num - 2);
}

int main() {
	/**
	 * recursion
	 * 정의 단계에서 자기 자신을 재참조하는 함수
	 * 전달되는 매개변수가 달라질 뿐 똑같은 일을 하는 함수
	 * 큰 문제를 작은 부분 문제로 나눠서 풀 때 사용
	 * 
	 * 반드시 종료조건을 써야함
	 * 사이클이 있다면 쓰면 안됨
	 * 반복문으로 될거같으면 반복문으로 해야함 (함수 호출에 대한 코스트)
	*/
	int num = 12;
	cout << fact(num) << "\n";
	cout << fibo(num) << "\n";

	return 0;
}