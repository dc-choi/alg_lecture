/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanf.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:05:51 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 10:53:22 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * scanf()는 매개변수로 받는 형식을 지정해서 입력을 받습니다.
	 * 보통 입력형식이 까다롭거나 이를 이용해야할 때 사용하는게 좋으며 보통은 cin을 쓰는게 좋습니다.
	 * 
	 * %d는 int, %lf는 double, %c는 char 타입을 받습니다.
	 * %s는 string, %ld는 long long 타입을 받습니다.
	*/
	// int a, b;
	// double b;
	// char c;
	// scanf("%d %lf %c", &a, &b, &c);

	// pritnf("%d\n", a);
	// pritnf("%lf\n", b);
	// pritnf("%c\n", c);

	/**
	 * double 타입으로 들어오는 것을 double 타입으로 받을 수 있지만
	 * scanf()를 이용해서 int 타입 2개를 만들어 받을 수 있습니다.
	 * 
	 * 실수 타입의 연산은 까다롭기 때문에 이런 트릭을 써서 정수타입 기반의 연산을 유도함
	*/
	int a, b;
	double c;

	scanf("%d %d", &a, &b);
	printf("\n%d.%d\n", a, b);

	scanf("%lf", &c);
	printf("%lf\n", c);

	return 0;
}
