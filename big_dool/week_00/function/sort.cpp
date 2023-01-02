/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:36:06 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 13:59:59 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first > b.first;
}

int main() {
	/**
	 * sort()
	 * 배열등 컨테이너들의 요소를 정렬하는 함수
	 * 보통 array나 vector를 정렬할 때 쓰이며 O(nlogn)의 시간복잡도를 가짐
	 * 
	 * sort(first, last, *커스텀 오퍼레이터)
	 * 1. first: 정렬하고 싶은 배열의 첫번째 이터레이터
	 * 2. last: 정렬하고 싶은 배열의 마지막 이터레이터
	 * 3. 커스텀 오퍼레이터(선택):  greater<int>() => 내림차순, less<int>() => 오름차순(기본값)
	 * 참고로 커스텀 오퍼레이터는 struct를 설명할 때 자세히 배웁니다.
	*/
	vector<int> a;
	int b[5];

	for(int i = 5; i >= 1; i--) b[i - 1] = i;
	for(int i = 5; i >= 1; i--) a.push_back(i);
	
	// 오름차순
	sort(b, b + 5);
	sort(a.begin(), a.end());
	for(int i : b) cout << i << ' ';
	cout << '\n';
	for(int i : a) cout << i << ' ';
	cout << '\n';

	// 오름차순
	sort(b, b + 5, less<int>());
	sort(a.begin(), a.end(), less<int>());
	for(int i : b) cout << i << ' ';
	cout << '\n';
	for(int i : a) cout << i << ' ';
	cout << '\n';

	//내림차순
	sort(b, b + 5, greater<int>());
	sort(a.begin(), a.end(), greater<int>());
	for(int i : b) cout << i << ' ';
	cout << '\n';
	for(int i : a) cout << i << ' ';
	cout << '\n';

	// pair를 기반으로 만들어진 vector의 경우 따로 설정하지 않으면 first, second, third순으로 차례차례 오름차순 정렬
	vector<pair<int, int>> v;
	for(int i = 10; i >= 1; i--) v.push_back({i, 10 - i});
	sort(v.begin(), v.end());
	for(auto it : v) cout << it.first << " : " << it.second << "\n";
	cout << '\n';

	// pair를 기반의 vector를 내림차순 정렬을 해야하는 경우는 커스텀 오퍼레이터를 사용해야 함.
	vector<pair<int, int>> v2;
	for(int i = 10; i >= 1; i--) v2.push_back({i, 10 - i});
	sort(v2.begin(), v2.end(), cmp);
	for(auto it : v2) cout << it.first << " : " << it.second << "\n";

	return 0;
}
