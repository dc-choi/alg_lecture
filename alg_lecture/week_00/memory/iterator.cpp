/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:31:01 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 10:42:49 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * 이터레이터
	 * 컨테이너에 저장되어 있는 요소의 주소를 가리키는 개체이며 포인터를 일반화한 것이다.
	 * 바로 주소값을 반환하지 못하고 &*를 통해 한단계 더 거쳐서 가리키는 해당 요소의 주소값을 반환할 수 있다.
	*/
	vector<int> v;
	for (int i = 1; i <= 5; i++) v.push_back(i); // vector에 1~5까지 넣는다.
	for (int i = 0; i < 5; i++) {
		cout << i << "번째 요소 : " << *(v.begin() + i) << "\n"; // 몇번째 요소인지 확인후 각각 요소 출력
		cout << &*(v.begin() + i) << '\n'; // 해당 요소의 메모리 주소를 확인
	}
	for (auto it = v.begin(); it != v.end(); it++) cout << *it << ' '; // 각각 요소 출력 (auto를 사용해서 간단하게 만듬)
	cout << '\n';
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) cout << *it << ' '; // 각각 요소 출력

	auto it = v.begin();
	advance(it, 3); // 해당 iterator를 cnt까지 증가
	cout << '\n';
	cout << *it << '\n';

	return 0;
}
