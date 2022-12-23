/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:07:58 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/23 18:27:45 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * array
	 * 정적배열
	 * 선언할 때 보통 크기를 설정해서 연산을 진행
	 * 연속된 메모리 공간에 위치한 같은 타입의 요소들의 모음
	 * 숫자 인덱스를 기반으로 랜덤접근이 가능
	 * 중복을 허용함.
	 * 
	 * STD스타일과 C스타일이 있는데 이 강의에서는 C스타일을 중심으로 배움
	 * C: int a[10]
	 * STD: array<int, 10> a;
	 * 
	 * vector와는 달리 메서드가 없음
	*/
	int a[3] = { 10, 100, 1000 };
	int a2[] = { 11, 22, 33, 44 }; // 크기를 정하지 않고 선언하고 중괄호로 요소들을 할당함.
	int a3[10]; // 배열의 크기를 정해서 선언할 수 있음.

	for (int i : a) cout << i << " ";
	cout << "\n";

	for (int i : a2) cout << i << " ";
	cout << "\n";

	for (int i = 0; i < 10; i++) a3[i] = i;
	for (int i : a3) cout << i << " ";
	cout << "\n";

	const int mxy = 3;
	const int mxx = 4;

	/**
	 * 첫번째 차원 >> 2번째 차원 순으로 탐색하는게 성능이 좋음.
	 * C++에서 캐시를 첫번째 차원을 기준으로 함.
	 * 캐시관련 효율성 때문에 탐색을 하더라도 순서를 지켜가며 해주는게 좋음.
	*/
	int arr[mxy][mxx];
	for (int i = 0; i < mxy; i++) {
		for (int j = 0; j < mxx; j++) {
			arr[i][j] = (i + j);
		}
	}
	// good
	for (int i = 0; i < mxy; i++) {
		for (int j = 0; j < mxx; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
	// bad
	for (int i = 0; i < mxx; i++) {
		for (int j = 0; j < mxy; j++) {
			cout << arr[j][i] << ' ';
		}
		cout << '\n';
	}


	return 0;
}