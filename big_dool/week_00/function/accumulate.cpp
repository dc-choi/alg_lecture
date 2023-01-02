/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accumulate.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:57:34 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 17:02:25 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * accumulate()
	 * 배열의 합을 쉽고 빠르게 구해주는 함수
	 * 아까 배운 등차수열의 합을 구할 때 용이하게 사용할 수 있을 거 같음.
	 * 
	 * int accumulate(first, last, num)
	 * first: 배열의 첫번째 주소
	 * last: 배열의 마지막 주소
	 * num: 총 합에서 추가해야 하는 숫자 (int형을 추가해줄 수 있다.)
	*/
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = accumulate(v.begin(), v.end(), 0); // 55
	int sum2 = accumulate(v.begin(), v.end(), 10); // 65
	cout << sum << " : " << sum2 << "\n";

	return 0;
}