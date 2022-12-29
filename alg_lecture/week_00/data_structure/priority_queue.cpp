/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priority_queue.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:15:29 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 12:32:31 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

struct Point {
	int x;
	int y;

	Point(int y, int x) : y(y), x(x){}
	Point(){ y = -1; x = -1; }

	/**
	 * operator 오버로딩(하위 클래스에서 재정의)
	 * 이 로직은 커스텀 정렬을 넣는 부분이다.
	 * 
	 * 따로 구조체를 만들어서 커스텀 정렬을 만들 수 있음.
	 * 하지만 오버로딩해서 만드는게 더 간단함.
	 * 
	 * 근데 왜 오버로딩이지?
	 * 큰돌님 답변:
	 * 오퍼레이터 +, -, *, / 등의 의미를 변경하지 않으며 그저 오퍼레이터의 대상이 바뀌기 때문
	 * 참고로 교안에서는 < 연산자를 오버로딩하는데 이는 int, double의 기본 타입이 아니라
	 * 좀 더 복잡한 어떠한 객체를 기반으로 확장하고 있음.
	*/
	bool operator < (const Point &a) const {
		// return x > a.x; // 최소값 우선 정렬
		return x < a.x; // 최대값 우선 정렬
	}
};

int main() {
	/**
	 * priority queue
	 * 각 요소에 어떠한 우선순위가 추가로 부여되어있는 컨테이너
	 * priority queue에서 우선순위가 높은 요소는 우선순위가 낮은 요소보다 먼저 제공됨.
	 * 일부 구현에서 두 요소의 우선순위가 같으면 대기열에 포함된 순서에 따라 제공됨.
	 * 다른 구현에서 동일한 우선순위를 가진 요소의 순서는 정의되지 않은 상태로 유지됨.
	 * 
	 * Heap은 완전이진트리로 Min Heap, Max Heap이 있음.
	 * 삽입, 삭제, 수정, 탐색에 대해 O(logN)의 복잡도를 가짐
	 * Max Heap은 루트 노드에 최대 값이 있음
	 * Min Heap은 루트 노드에 최소 값이 있음
	 * 
	 * 메서드는 stack과 같음.
	 * size(), top(), pop(), push()가 있음.
	*/
	priority_queue<int, vector<int>, greater<int>> pq; // 오름차순
	priority_queue<int> pq2; // 내림차순
	priority_queue<int, vector<int>, less<int>> pq3; // 내림차순
	for (int i = 5; i >= 1; i--) {
		pq.push(i);
		pq2.push(i);
		pq3.push(i);
	}
	
	while (pq.size()) {
		cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << "\n";
		pq.pop();
		pq2.pop();
		pq3.pop();
	}

	priority_queue<Point> pp;
	pp.push({ 1, 1 });
	pp.push({ 2, 2 });
	pp.push({ 3, 3 });
	pp.push({ 4, 4 });
	pp.push({ 5, 5 });
	cout << pp.top().x << "\n";

	return 0;
}