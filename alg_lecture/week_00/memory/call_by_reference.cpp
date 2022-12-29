/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_by_reference.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:51:05 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 12:37:44 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

void go(int a[]) {
	a[2] = 100;
}
void go2(int a[3]) {
	a[2] = 1000;
}
void go3(int *a) {
	a[2] = 1000;
}

int add(int &a, int b) {
	a += 10;
	cout << a << "\n";
	return a + b;
}

int main() {
	/**
	 * call_by_reference
	 * 원본변수의 주소를 매개변수로 함수에 전달하는 방법
	 * 함수 내부에서 해당 매개변수를 변경하게 되면 실제 원본변수에도 반영이 됨.
	*/
	int a = 1;
	int b = 2;
	int sum = add(a, b);
	cout << a << "\n";

	/**
	 * 배열의 요소를 수정할 때는 다음을 넘길 수 있음.
	 * 1. 크기를 정하지 않은 int a[]
	 * 2. 배열의 크기인 int a[3]
	 * 3. 배열의 포인터인 int *a
	*/
	int a[3] = {1, 2, 3};
	go(a); cout << a[2] << '\n';
	go2(a); cout << a[2] << '\n';
	go3(a); cout << a[2] << '\n';

	return 0;
}