/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:41:35 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/23 21:52:07 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * Set
	 * 고유한 요소만을 저장하는 컨테이너
	 * 중복을 허용하지않고 Map처럼 { key, value }로 집어넣지 않아도 됨.
	 * 다음 코드처럼 pair나 int형을 집어넣어서 만들 수 있습니다.
	 * 중복된 값은 제거되며 Map과 같이 자동 정렬됩니다.
	 * 메서드는 Map과 똑같습니다.
	*/
	set<pair<string, int>> s;
	s.insert({"test", 1});
	s.insert({"test", 1});
	s.insert({"test", 1});
	s.insert({"test", 1});
	cout << s.size() << "\n";
	s.clear();
	s.insert({"test", 1});
	for (auto item : s) cout << item.first << " : " << item.second << "\n";
	s.erase(s.begin()); // 메모리값을 없애야 함.
	for (auto item : s) cout << item.first << " : " << item.second << "\n";
	cout << "\n";

	set<int> s2;
	s2.insert(2);
	s2.insert(1);
	s2.insert(2);
	for (auto item : s2) cout << item << "\n";
	s2.clear();

	return 0;
}