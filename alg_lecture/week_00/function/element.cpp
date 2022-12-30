/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:04:14 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 17:06:53 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * max_element()
	 * 배열 중 가장 큰 요소를 추출하는 함수
	 * 
	 * min_element()
	 * 배열 중 가장 작은 요소를 추출하는 함수
	*/
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());

	cout << "Max : " << max << ", Min : " << min << "\n";

	return 0;
}