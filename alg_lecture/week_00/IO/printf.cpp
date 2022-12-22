/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:24:16 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 11:39:59 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * 형식을 지정해서 출력해야하는 경우에 사용하면 좋음
	 * 
	 * int printf ( const char * format, ... );
	 * 위 같은 형식으로 포멧을 지정하고 매개변수로 변수를 넣으면 출력됨.
	*/
	int a = 1;
	int b = 2;
	double c = 1.23456789;
	int d = 3;

	char f = 'c';
	string str = "Iron Man";

	printf("동철: %d, dongchul: %d\n", a, b);

	printf("%.6lf\n", c); // 1.234568
	printf("%02d\n", d); // 03

	/**
	 * string을 printf()로 출력할 때는 c_str() 함수를 사용해서 출력해야 합니다.
	 * printf()로 문자열을 출력하려면 string을 문자열에 대한 포인터(char *) 타입으로 바꿔줘야 하기 때문입니다.
	 * 그래서 보통 문자열은 cout를 사용하는 것이 좋습니다.
	*/
	printf("%c\n", f);
	printf("%s\n", str.c_str());

	return 0;
}
