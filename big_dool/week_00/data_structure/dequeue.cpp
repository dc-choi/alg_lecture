/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dequeue.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:41 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/26 15:07:57 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
	/**
	 * DeQueue
	 * queue와 달리 앞뒤로 삽입, 삭제, 참조가 가능한 자료구조
	*/
	deque<int> dq;
	
	dq.push_front(1); // 앞에 값을 넣는다.
	dq.push_back(2); // 뒤에 값을 넣는다.
	dq.push_back(3);
	
	cout << dq.front() << "\n"; // 맨 앞의 요소를 참조한다.
	cout << dq.back() << "\n"; // 맨 뒤의 요소를 참조한다.
	cout << dq.size() << "\n"; // dequeue의 크기를 확인한다.
	
	dq.pop_back(); // 맨 뒤의 요소를 삭제한다.
	dq.pop_front(); // 맨 앞의 요소를 삭제한다.
	
	cout << dq.size() << "\n";

	return 0;
}