#include <iostream>
using namespace std;
class colamachine {
	float cost;
	int avaiblecola;
public:
	void loading(float _cost=2.5, int _avaiblecola=100) { cost = _cost;   avaiblecola = _avaiblecola; }
	void givecola( ) {
		float yourcost;
		cout << "payment of cola:" << cost << endl;
		cout << "your pay:";
		cin >> yourcost;
		if ((yourcost >= cost)&&(avaiblecola>0) ) {
			cout << "cola is coming" << endl;
			avaiblecola--;
			cout << "your change:" << yourcost - cost << endl;
			}
		else { cout << "Cola cannot be given" << endl; }
			
		}
		
		
		
	
	void summary() {
		cout << "SUMMARY" << endl;
		cout << "           payment of cola:" << cost << endl;
		cout << "           Remainder:" << avaiblecola ;


	}
};
int main() {
	colamachine s;
	s.loading();
	s.givecola();
	s.summary();
	return 0;


}


