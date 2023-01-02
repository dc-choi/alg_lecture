/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation_recursion.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:09:10 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/29 21:18:52 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void print(vector<int> &v) {
	for (int i : v) cout << i << " ";
	cout << "\n";
}

void permution(int n, int r, int depth) {
	// cout << n << " : " << r << " : " << depth << '\n';
	if (r == depth) {
		print(v);
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		permution(n, r, depth + 1);
		swap(v[i], v[depth]);
	}
}

int main() {
	// 다른 언어에서는 재귀를 통해 순열을 나타냄.
	for (int i = 1; i <= 3; i++) v.push_back(i);
	permution(3, 3, 0);

	return 0;
}