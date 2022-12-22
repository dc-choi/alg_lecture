/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:00:52 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/22 14:17:29 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * unique()
	 * 범위안의 요소중 중복되는 요소를 제거하고 중복되지 않은 요소들로 앞에서부터 정렬되어 채웁니다.
	 * 나머지 요소들은 삭제하지 않고 그대로 두는 함수이다. O(n)의 시간복잡도를 가짐
	 * 
	 * 아래의 코드들은 중복된 값을 제거하고 고유한 값만 남기는 로직이다.
	*/
	vector<int> v;
	for(int i = 1; i <= 5; i++){
		v.push_back(i);
		v.push_back(i);
	}
	for(int i = 5; i >= 1; i--){
		v.push_back(i);
		v.push_back(i);
	}
	for(int i : v) cout << i << " ";
	cout << '\n';

	sort(v.begin(), v.end());
	for(int i : v) cout << i << " ";
	cout << '\n';

	v.erase(unique(v.begin(), v.end()), v.end());
	for(int i : v) cout << i << " ";
	cout << '\n';

	return 0;
}