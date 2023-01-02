/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:56:26 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/23 21:38:28 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * Map
	 * 고유한 키를 기반으로 키-값(key-value) 쌍으로 이루어져 있는 정렬된(삽입할 때마다 자동 정렬) 연관 컨테이너
	 * C++의 Map은 레드-블랙트리로 구현됨.
	 * 레드블랙트리 : 균형 이진 검색 트리이며 삽입, 삭제, 수정, 탐색에 O(logN)의 시간복잡도가 보장됨.
	 * 
	 * 고유한 키를 가지기 때문에 하나의 키에 중복된 값이 들어갈 수 없음
	 * 자동으로 오른차순 정렬되기 때문에 넣은 순서대로 Map을 탐색하는 것이 아닌 아스키코드순으로 정렬된 값을 기반으로 탐색함
	 * 또한 대괄호 연산자로 해당 키로 직접 참조할 수 있음.
	 * 
	 * Map의 key와 value는 string이나 int값이 아닌 다양한 값이 들어갈 수 있음.
	*/
	map<string, int> m;
	string name[] = { "최", "동", "철" };

	for (int i = 0; i < 3; i++) {
		m.insert({name[i], i + 1}); // Map에 { key, value }를 삽입
		// m[name[i]] = i + 1; // []를 통해서 key에 해당하는 value를 할당
	}
	
	cout << m["최동철"] << '\n'; // []를 통해서 key를 기반으로 Map에 있는 요소 참조
	/**
	 * Map에 해당 키가 없다면 0이나 빈 문자열로 초기화되어 할당됨.
	 * 할당하고 싶지 않아도 []로 참조하는 경우 자동으로 할당되기 때문에 조심해야함.
	 * 
	 * 만약 Map에 해당 키가 없는지 확인하고 싶고 초깃값으로 0으로 할당되지 않아야 되는 상황이라면 find를 써야 함.
	*/

	m["최동철"] = 4; // 대괄호로 수정가능
	cout << m.size() << "\n"; // Map에 있는 요소들의 개수를 반환함.
	cout << "\n";

	m.erase("최동철"); // 해당 키에 해당하는 요소를 지움
	auto it = m.find("최동철"); // Map에서 해당 key를 가진 요소를 찾아 해당 이터레이터로 반환함.
	// 못찾을 경우 해당 Map의 end() 이터레이터를 반환함.
	if (it == m.end())
		cout << "못찾겠다 동철아!\n";
	m["최동철"] = 100;
	cout << "\n";

	it = m.find("최동철");
	if (it != m.end())
		cout << (*it).first << " : " << (*it).second << "\n";
	cout << "\n";
	
	for (auto a : m) // Map을 Loop할 경우 key는 first, value는 second로 참조 가능
		cout << a.first << " : " << a.second << "\n";
	cout << "\n";

	for (auto a = m.begin(); a != m.end(); a++) // Map은 이터레이터로 순회가 가능
		cout << (*a).first << " : " << (*a).second << "\n";
	m.clear(); // Map에 있는 요소를 전부 제거함.

	/**
	 * 주의점
	 * Map의 경우 해당 인덱스에 참조만 해도 Map에 값이 생기고 요소가 생김
	 * int형의 경우는 0, string의 경우 빈 문자열로 초기화되어 할당됨.
	 * 따라서 다음 코드처럼 해야 참조만 해도 할당되는 경우가 발생하지 않음.
	*/
	map<int, int> m2;
	if (m2.find(1) == m2.end()) m2[1] = 2;
	for (auto item : m2) cout << item.first << " " << item.second;
	cout << "\n";

	return 0;
}