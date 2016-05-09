#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		double ans = 0;
		int k; cin >> k;
		map<char, double> t;
		while (k--) {
			char a; double b;
			cin >> a >> b;
			t[a] = b / 100;
		}
		int m; cin >> m;
		getchar();
		while (m--) {
			char buf[10005];
			fgets(buf, 10000, stdin);
			for (int i = 0; i < strlen(buf); i++)
				if (t.count(buf[i])>0) ans += t[buf[i]];
		}
		cout <<fixed<<setprecision(2) <<ans << "$" << endl;
	}
	//system("PAUSE");
	return 0;
}