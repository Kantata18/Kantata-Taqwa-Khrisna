#include <iostream> 
using namespace std;
int main() {

	int i, n, t, a;
	i=1;
	t=0;
	
	cout << "Masukan banyak nilai: " ;
	cin >> n;
	
	for (i; i<=n; i++){
		cout << "Masukan Nilai Ke: " ;
		cin >> a;
		if (i%2== 0){
			t +=a;
		}
	}
	cout << "/njumlah= " << t << endl;
	return 0;
}
