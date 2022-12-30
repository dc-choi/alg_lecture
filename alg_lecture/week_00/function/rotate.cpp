/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:42:09 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 16:57:00 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * rotate()
	 * 시계방향 또는 반시계방향으로 회전하는 로직을 짤 때 사용함.
	 * 
	 * void rotate(first, middle, last)
	 * first: 배열의 첫번째 주소
	 * middle: 이동시키려는 요소의 주소
	 * last: 배열의 마지막 주소
	 * 즉, first와 last 사이의 공간에서 middle을 first자리로 이동시킨다.
	*/
	vector<int> v;
	// 1 2 3 4 5 6 7 8 9
	for (int i = 1; i < 10; i++) v.push_back(i);
	
	// 1 2 3 4 5 6 7 8 9 (middle의 주소가 first와 같아서 이동x)
	// rotate(v.begin(), v.begin(), v.end());
	// 2 3 4 5 6 7 8 9 1
	// rotate(v.begin(), v.begin() + 1, v.end());
	// 4 5 6 7 8 9 1 2 3
	rotate(v.begin(), v.begin() + 3, v.end());
	// 9 1 2 3 4 5 6 7 8 (끝 요소를 맨앞으로 옮김)
	// rotate(v.begin(), v.begin() + v.size() - 1, v.end());

	for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
	cout << "\n";

	return 0;
}