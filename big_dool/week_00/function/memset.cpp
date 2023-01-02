/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:13:59 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 11:20:02 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];

int main() {
	/**
	 * memset()
	 * 바이트 단위로 초기화하며 0, -1, char형의 문자로 초기화를 할때 사용한다.
	 * memset(배열의 이름, k, 배열의 크기) 이렇게 사용
	 * 예시들의 변수를 전역 변수로 선언한 이유는 stack overflow가 나서 그렇다.
	 * 
	 * void * memset ( void * ptr, int value, size_t num );
	*/

	memset(a, 0, sizeof(a));
	memset(a2, 0, sizeof(a2));
	for (int i = 0; i < max_n; i++) cout << a[i] << "\n";

	return 0;
}
