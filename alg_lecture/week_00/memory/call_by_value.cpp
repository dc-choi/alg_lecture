/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_by_value.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:42:47 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 11:49:07 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int add(int a, int b) {
	a += 10;
	cout << a << '\n';
	return a + b;
}

int main() {
	/**
	 * call_by_value
	 * 매개변수의 복사본을 해당 함수 내부로 넘기는 방식
	 * 복사본을 넘기는 것이기 때문에 함수 내부에서 이 복사본이 변경되더라고 원본값을 변경되지 않음.
	*/
	int a = 1;
	int b = 2;
	int sum = add(a, b);
	cout << a << "\n";

	return 0;
}