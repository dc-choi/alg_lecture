﻿/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:53:33 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 15:26:46 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

char str() {
	return 'b';
}

int main() {
	char a = 'a';
	char b = str();
	/**
	 * char
	 * 문자에 대한 자료형
	 * 1바이트의 크기를 가지며, ''로 선언한다.
	*/
	
	cout << a << b << "\n";

	return 0;
}