/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cout.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:51:07 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 11:10:12 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	string a = "choi dong chul";
	string b = "42seoul 5th class donchoi";
	double c = 1.23456789;

	cout << a << "\n";
	cout << b << "\n";
	cout << a << " === " << b << "\n";

	/**
	 * cout를 사용해 실수타입을 출력하려고 한다면?
	 * cout.precision()을 통해 반올림해서 걸어둔다.
	*/
	cout << c << "\n";
	cout.precision(7);

	return 0;
}
