/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 20:26:40 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 16:06:46 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v) {
	for (int i : v) cout << i << " ";
	cout << "\n";
}

int main() {
	/**
	 * permutation(순열)
	 * 순서가 정해진 임의의 집합을 다른 순서로 섞는 연산
	 * n개의 집합 중 n개를 고르는 순열의 개수는 n!이라는 특징을 가짐
	 * 
	 * 3개의 자연수를 이용해 만들 수 있는 3자리 자연수는 몇개일까?
	 * 123, 132, 213, 231, 312, 321 이렇게 6가지이다.
	 * 그렇다면 3개의 자연수를 이용해 만들 수 있는 1자리 자연수는? 3개이다.
	 * 전자는 3개중 3개를 뽑는거라 3! 이되고 후자는 3개중 1개를 뽑는거라 3이됨
	 * 
	 * 순열 공식
	 * n! / (n - r)!
	 * 
	 * EX)
	 * 3! / (3 - 3)!
	 * 3! / (3 - 1)!
	 * 
	 * 순열은 순서에 관계가 있는 경우의 수를 찾기 위해 사용된다.
	*/
	vector<int> v;
	// 오름차순으로 순열을 뽑음
	for (int i = 1; i <= 3; i++) v.push_back(i);
	do {
		print(v);
	} while (next_permutation(v.begin(), v.end()));
	
	cout << "-------------" << '\n';
	v.clear();
	// 내림차순으로 순열을 뽑음
	for (int i = 3; i >= 1; i--) v.push_back(i);
	do {
		print(v);
	} while (prev_permutation(v.begin(), v.end()));

	/**
	 * next_permutation()나 prev_permutation() 사용시 주의할 점
	 * 
	 * next_permutation을 사용하면 배열을 오름차순으로 정렬해서 사용하고
	 * prev_permutation을 사용하면 배열을 내림차순으로 정렬해서 사용해야 함.
	 * 이는 이 두개의 함수가 해당 배열의 그 다음번째 순열을 만들어내는 함수이기 때문.
	 * 정렬되지 않으면 순열을 뽑을 수 없다.
	*/

	return 0;
}