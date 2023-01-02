/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_method.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:57:42 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/21 14:38:59 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	string a = "love is";
	// push_back()이라는 메서드가 있지만 이는 문자밖에 더 하지 못해 보통 +=를 쓴다.
	a += " pain!";
	// 문자열의 끝을 지운다. O(1)의 시간복잡도를 가짐
	a.pop_back();

	// 문자열의 사이즈를 반환한다. O(n)의 시간 복잡도를 가짐
	cout << a << " : " << a.size() << "\n";
	/**
	 * begin(): 문자열의 첫번째 요소를 가리키는 이터레이터를 반환합니다.
	 * end(): 문자열의 마지막 요소 그 다음을 가리키는 이터레이터를 반환합니다.
	 * 
	 * 참고로 vector, Array, Linked List, Map, Set에도 같은 메서드가 있음.
	*/
	cout << char(* a.begin()) << "\n";
	cout << char(* (a.end() - 1)) << "\n";

	// string& insert (size_t pos, const string& str);
	// 특정 위치에 문자열을 삽입, O(n)의 시간복잡도를 가짐
	a.insert(0, "test ");
	cout << a << " : " << a.size() << "\n";

	// string& erase (size_t pos = 0, size_t len = npos);
	// 특정 위치의 크기만큼 문자열을 지움, O(n)의 시간복잡도를 가짐
	a.erase(0, 5);
	cout << a << " : " << a.size() << "\n";

	// size_t find (const string& str, size_t pos = 0);
	/**
	 * 특정 문자열을 찾아 위치를 반환, 만약 해당 문자열을 못 찾을 경우 string::npos을 반환하며 O(n)의 시간복잡도를 가짐
	 * 
	 * string::npos
	 * size_t 타입의 최대값을 의미합니다.
	 * size_t의 최대값은 OS에 따라 달라지며 64비트 운영체제라면 64비트 부호가 없는 최대정수, 32비트라면 32비트 부호가 없는 최대 정수값을 가집니다.
	 * 필자의 컴퓨터는 64비트 운영체제이기 때문에 18446744073709551615라는 값을 가집니다
	*/
	auto it = a.find("love");
	if (it != string::npos) {
		cout << "포함되어 있다." << '\n';
	}
	
	cout << it << '\n';
	cout << string::npos << '\n';
	
	// string substr (size_t pos = 0, size_t len = npos) const;
	// 특정 위치에서 크기만큼의 문자열을 추출합니다.
	cout << a.substr(5, 2) << '\n';

	/**
	 * STL reverse
	 * template <class BidirectionalIterator> void reverse (BidirectionalIterator first, BidirectionalIterator last);
	 * 
	 * string 자체적으로 메서드를 가지고있지않다. 이 함수는 STL에서 지원하는 문자열을 거꾸로 뒤집는 함수이다.
	 * void 타입의 함수이며, 원본 문자열로 변경시킨다.
	*/
	reverse(a.begin(), a.end());
	cout << a << '\n';
	reverse(a.begin(), a.end());
	cout << a << '\n';

	/**
	 * atoi(s.c_str())
	 * 문자열을 정수형으로 바꿔야 할 상황이 생김.
	 * 
	 * 입력받은 문자열 s를 기반으로 c_str() 함수를 사용해서 사용합니다.
	 * 만약 입력받은 문자열이 문자라면 0을 반환하고 그게 아니라면 숫자를 반환합니다.
	*/
	string s = "1"; // 문자열의 값이 숫자
	string s2 = "amumu"; // 문자열의 값이 문자
	cout << atoi(s.c_str()) << '\n'; // 1
	cout << atoi(s2.c_str()) << '\n'; // 0

	return 0;
}