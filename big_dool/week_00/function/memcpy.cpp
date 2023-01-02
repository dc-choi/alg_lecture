/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:28:28 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 11:31:10 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * memcpy()
	 * 어떤 변수의 메모리에 있는 값들을 다른 변수의 "특정 메모리값"으로 복사할 때 사용
	 * 주로 배열을 깊은 복사할 때 사용한다.
	 * 
	 * void * memcpy ( void * destination, const void * source, size_t num );
	*/
	int a[5];
	int temp[5];
	
	for(int i = 0; i < 5; i++)a[i] = i;
	memcpy(temp, a, sizeof(a));
	
	for(int i : temp) cout << i << ' ';
	cout << '\n';
	// 원본 배열 a를 수정하여 출력하는 로직
	// a를 수정해서 ~~를 더하는 로직이 될 수 있겠죠?
	a[4] = 1000;
	for(int i : a) cout << i << ' ';
	cout << '\n';
	// 그 다음 다시 temp를 기반으로 원본배열을 담아 둠.
	memcpy(a, temp, sizeof(temp));
	for(int i : a) cout << i << ' ';
	cout << '\n';

	return 0;
}
