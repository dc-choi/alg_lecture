/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:28:31 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 15:46:08 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * lower_bound() 와 upper_bound()
	 * 정렬된 배열에서 어떤 값이 나오는 지점이나 어떤 값이 나오기전의 위치를 반환하기 위한 함수
	 * 그리고 이분탐색을 쉽게 할 수 있음. O(nlogn)의 시간복잡도를 가짐
	 * 
	 * 차이점
	 * lower_bound는 0번째 배열의 원소부터 찾아서 어떠한 값의 "이상이 되는 위치"를 반환
	 * upper_bound는 그 값이 시작되기 전의 위치를 반환
	*/

	vector<int> v;
	int a[5] = {1, 2, 2, 2, 3};
	for (int i = 0; i < 5; i++) v.push_back(a[i]);
	for (int i : v) cout << i << " "; // 1 2 2 2 3
	cout << "\n";
	int find = 2;
	int findCount = (int)(upper_bound(v.begin(), v.end(), find) - lower_bound(v.begin(), v.end(), find));
	// 주소값이 반환되기 때문에 그 주소값이 몇번째임을 알려면 주소값의 첫번째 값을 빼줘서 계산함.
	int findStart = (int)(lower_bound(v.begin(), v.end(), find) - v.begin());
	int findEnd = (int)(upper_bound(v.begin(), v.end(), find) - v.begin());
	printf("%d의 갯수 : %d, 시작되는 점 : %d 끝나는 점 : %d\n", find, findCount, findStart, findEnd); // 2의 갯수 : 3, 시작되는 점 : 1 끝나는 점 : 4
	int lower = *lower_bound(v.begin(), v.end(), find);
	int upper = *upper_bound(v.begin(), v.end(), find);
	printf("lower bound가 시작되는 점의 값 : %d, upper bound가시작되는 점의 값 : %d\n", lower, upper); // lower bound가 시작되는 점의 값 : 2, upper bound가시작되는 점의 값 : 3
	cout << "\n";

	vector<int> arr;
	for (int i = 1 ; i <= 3; i++) arr.push_back(i);
	arr.push_back(5);
	// for(int i = 5 ; i <= 10; i++) arr.push_back(i);
	for (int i : arr) cout << i << " "; // 1 2 3 5
	cout << "\n";
	cout << lower_bound(arr.begin(), arr.end(), 4) - arr.begin() << "\n"; // 3(정수 4 이상의 값 위치)
	cout << upper_bound(arr.begin(), arr.end(), 4) - arr.begin() << "\n"; // 3(정수 4 다음 위치)
	cout << "\n";

	vector<int> v2; // 2 3 4 5 7
	for (int i = 2; i <= 5; i++) v2.push_back(i);
	v2.push_back(7);
	for (int i : v2) cout << i << " ";
	cout << "\n";
	// 맞는 값이 없어서 그 근처의 위치를 찾은것을 확인
	cout << upper_bound(v2.begin(), v2.end(), 6) - v2.begin() << "\n"; // 4
	cout << lower_bound(v2.begin(), v2.end(), 6) - v2.begin() << "\n"; // 4
	cout << upper_bound(v2.begin(), v2.end(), 9) - v2.begin() << "\n"; // 5
	cout << lower_bound(v2.begin(), v2.end(), 9) - v2.begin() << "\n"; // 5
	cout << upper_bound(v2.begin(), v2.end(), 0) - v2.begin() << "\n"; // 0
	cout << lower_bound(v2.begin(), v2.end(), 0) - v2.begin() << "\n"; // 0

	return 0;
}
