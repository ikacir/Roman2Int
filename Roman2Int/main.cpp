#include <iostream>
#include <string>
#include <deque>

using namespace std;
//
//// Roman2Int
//void main() {
//	string	roman;
//	int		number = 0;
//	
//	cin >> roman;
//	for (int i = 0; i < roman.length(); i++) {
//		switch (toupper(roman[i]))
//		{
//		case 'M':
//			number += 1000;
//			break;
//		case 'D':
//			number += 500;
//			break;
//		case 'C':
//			number += 100;
//			break;
//		case 'L':
//			number += 50;
//			break;
//		case 'X':
//			number += 10;
//			break;
//		case 'V':
//			number += 5;
//			break;
//		case 'I':
//			number += 1;
//			break;
//		default:
//			break;
//		}
//	}
//
//	cout << number << endl;
//}

// Int2Roman
void main(void) {
	int number;
	cin >> number;
	deque<char> roman;
	
	while (number > 0) {
		if (number % 1000 == 0) {
			roman.push_front('M');
			number -= 1000;
		}
		else if (number % 500 == 0) {
			roman.push_front('D');
			number -= 500;
		}
		else if (number % 100 == 0) {
			roman.push_front('C');
			number -= 100;
		}
		else if (number % 50 == 0) {
			roman.push_front('L');
			number -= 50;
		}
		else if (number % 10 == 0) {
			roman.push_front('X');
			number -= 10;
		}
		else if (number % 5 == 0) {
			roman.push_front('V');
			number -= 5;
		}
		else if (number % 1 == 0) {
			roman.push_front('I');
			number -= 1;
		}
	}
	for (const auto &r : roman) {
		cout << r;
	}
	cout << endl;
}