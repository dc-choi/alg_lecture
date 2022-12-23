/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_split.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:35:12 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 11:31:49 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

vector<string> split(string src, string dest) {
	vector<string> result;
	long long pos;
	string str;
	
	// 1. 원본 문자열에서 찾으려는 문자열을 찾고 찾으면 위치를 할당한다. (이걸 문자열이 끝날때까지 반복한다.)
	while ((pos = src.find(dest)) != string::npos) {
		// 2. 찾은 위치만큼의 문자열을 잘라낸다.
		str = src.substr(0, pos);
		// 3. 잘라낸 문자열을 배열에 넣는다.
		result.push_back(str);
		// 4. 기존 문자열에서 찾은 위치와 찾으려는 문자열의 길이만큼 잘라낸다.
		src.erase(0, pos + dest.length());
	}
	
	return result;
}

int main() {
	/**
	 * split()
	 * 코테에서는 문자열을 split하는 로직이 많이 등장함.
	 * 다른 프로그래밍 언어에서도 문자열을 특정 문자열을 기준으로 쪼개서 배열화 시키는 함수라는 의미로 사용함.
	 * STL에서 split 함수를 지원하지 않기에 직접 만들어야 함.
	 * 
	 * O(n)의 시간복잡도를 가짐
	*/
	// string s = "qwerwqefdsafasdfaasdf"; // 아무런 값도 돌려받지않고 프로그램 종료
	string s = "안녕하세요 동철이는 성장할 수 있는 좋은회사로 이직하고싶어요! 정말이에요!";
	string d = " ";
	vector<string> a = split(s, d);
	// vector a내의 있는 요소인 string타입의 요소를 탐색 (C++ 11부터 범위기반 for가 추가되었다고 함)
	for(string b : a) cout << b << "\n";

	return 0;
}
