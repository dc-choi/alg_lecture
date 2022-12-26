/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiset.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:47:30 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/26 14:51:17 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * multiset
	 * set과 달리 중복되는 요소도 입력이 가능한 자료구조
	 * key, value 형태로 집어넣을 필요도 없고 넣으면 자동적으로 정렬됨.
	*/
	multiset<int> s;
	for (int i = 5; i >= 1; i--) {
		s.insert(i);
		s.insert(i);
	}
	for(int it : s) cout << it << " "; //  1 2 2 3 3 4 4 5 5
	cout << '\n';

	return 0;
}