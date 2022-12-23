/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:06:22 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/23 18:07:01 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * vector
	 * 동적으로 요소를 할당할 수 있는 배열
	 * 컴파일 시점에 사용해야 할 요소들의 개수를 모른다면 사용한다.
	 * 연속된 메모리 공간에 위치한 같은 타입 요소들의 모음
	 * 숫자인덱스를 기반으로 랜덤접근이 가능
	 * 중복을 허용함.
	 * 
	 * 탐색과 맨 뒤의 요소를 삭제하거나 삽입하는 데 O(1)이 걸림
	 * 맨 뒤나 맨 앞이 아닌 요소를 삭제하고 삽입하는 데 O(n)이 걸림
	*/

	// vector<타입> 변수명;
	vector<int> v;
	for (int i = 0; i < 10; i++) v.push_back(i); // 뒤에서부터 요소를 추가합니다.
	for (int i : v) cout << i << " ";
	cout << "\n";
	cout << *v.begin() << "\n"; // 처음으로 시작하는 메모리주소
	cout << v.at(2) << "\n"; // 인덱스 위치의 값
	cout << *v.end() << "\n"; // 메모리의 끝 주소
	cout << v.size() << "\n"; // 실제 요소들이 담긴 갯구
	cout << v.capacity() << "\n"; // 요소들을 담을 수 있는 공간의 크기 (동적으로 변경가능)

	v.pop_back(); // 맨 뒤의 요소를 지웁니다.
	for (int i : v) cout << i << " ";
	cout << "\n";

	v.erase(v.end() - 1); // 지울 위치를 지정해서 지운다.
	for (int i : v) cout << i << " ";
	cout << "\n";
	cout << "erase()로 끝 부분을 지웠더니 아무것도 없네?" << "\n";
	for (int i = 0; i < 10; i++) v.push_back(i);

	v.erase(v.begin(), v.begin() + 3); // 지울 범위을 정하고 지운다.
	for (int i : v) cout << i << " ";
	cout << "\n";

	auto a = find(v.begin(), v.end(), 100); // STL함수인 find()로 처음부터 끝까지 100이라는 리터럴은 찾는다.
	if (a == v.end()) cout << "not found" << "\n";

	fill(v.begin(), v.end(), 10); // STL함수인 fill()로 처음부터 끝까지 10으로 치환한다.
	for (int i : v) cout << i << " ";
	cout << "\n";

	v.clear(); // 모든 요소를 지운다.
	for (int i : v) cout << i << " ";
	cout << "clear()로 지웠더니 아무것도 없네?" << "\n";

	// pair를 담고 있는 vector의 경우 범위기반 for루프에 pair<int, int> a로 치환함.
	vector<pair<int, int>> v2;
	for (int i = 0; i < 10; i++) v2.push_back({i, i}); 
	for (pair<int, int> a : v2) cout << a.first << "," << a.second << "\t";
	cout << "\n";

	// vector도 정적할당이 가능함.
	vector<int> v3(5, 100); // 100으로 초기화된 5개의 요소
	v3.push_back(1000); // 정적으로 할당해도 다시 추가 가능.
	for (int i : v3) cout << i << " ";
	cout << "\n";

	// 이차원 배열 할당시
	vector<vector<int>> b;
	vector<vector<int>> c(10, vector<int>(10, 0));
	vector<int> d[10];

	for (vector<int> v : c) {
		for(int i : v) cout << i << ' ';
		cout << '\n';
	}
	for(int i = 0; i < 10; i++) {
		vector<int> vv;
		b.push_back(vv);
	}

	return 0;
}