/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:43:48 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 11:47:13 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

// 여기서 x, y가 parameter이다.
int add(int x, int y) {
	return x + y;
}

int main() {
	/**
	 * parameter
	 * 함수에 전달되는 값이자 함수 괄호안에 선언된 값
	 * 쉼표로 각 매개변수를 다른 매개변수와 구분함.
	*/
	int a = add(123, 1);
	cout << a << "\n";

	return 0;
}