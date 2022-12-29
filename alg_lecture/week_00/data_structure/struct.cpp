/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:15:38 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 11:34:56 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

struct Ralo {
	int a;
	int b;
	double c;
	double d;
	double e;
};

struct Point {
	int y; // 멤버 변수
	int x; // 멤버 변수
	
	Point(int y, int x) : y(y), x(x) {} // 생성자
	Point(){ y = -1; x = -1; } // 생성자의 값이 없는 경우의 기본 값
};
bool cmp(const Point &a, const Point &b) {
	return a.x > b.x;
}

void print(Ralo ralo) {
	cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << "\n"; 
}

int main() {
	/**
	 * struct
	 * C++에서 제공하는 자료구조가 아닌 개발자의 커스텀한 자료구조
	 * 커스텀하게 정렬을 추가하고 싶거나 문제에서 여러개의 변수 예를 들며
	 * 여러 멤버변수가 들어간 자료구조가 필요하다면 struct를 사용
	 * 
	 * 멤버변수
	 * 클래스 또는 구조체 내부의 변수이자 메서드 밖에 있는 변수
	 * 
	 * 커스텀한 자료구조를 만들 때 보통 class와 struct를 사용함.
	 * 코딩테스트에서는 struct만 알아도 충분함.
	 * 
	 * 둘의 차이점
	 * struct: 멤버변수가 public이며 상속이 안됨
	 * class: 멤버변수가 private이며 상속이 됨
	*/
	Ralo ralo = { 1, 2, 3, 4, 5 };
	print(ralo);

	vector<Ralo> ret;
	ret.push_back({ 1, 1, 1, 1, 1 });
	ret.push_back({ 2, 2, 2, 2, 2 });
	ret.push_back({ 3, 3, 3, 3, 3 });
	ret.push_back({ 4, 4, 4, 4, 4 });
	for (Ralo ralo : ret) print(ralo);

	Point p1 = { };
	Point p2 = { 3, 1 };
	Point p3 = { -100, 1 };
	Point p4 = { };
	Point p5 = { -100, 1 };
	Point p6 = { 3, 1 };
	cout << p1.x << " " << p1.y << "\n";
	cout << p2.x << " " << p2.y << "\n";
	cout << p3.x << " " << p3.y << "\n";
	cout << p4.x << " " << p4.y << "\n";
	cout << p5.x << " " << p5.y << "\n";
	cout << p6.x << " " << p6.y << "\n";

	vector<Point> ret2;
	for (int i = 10; i >= 1; i--) ret2.push_back({ i, 10 - i });
	sort(ret2.begin(), ret2.end(), cmp);
	for (auto it : ret2) cout << it.x << " : " << it.y << "\n";

	return 0;
}