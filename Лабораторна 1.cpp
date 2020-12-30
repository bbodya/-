#include<iostream>
using namespace std;

int main()
{
	int k, h, m;
	setlocale(LC_ALL, "rus");//Ïåðåêîäóâàííÿ ñèìâîë³â ó ïîòð³áíó ìîâó
	printf("Vasyliv Bohdan, IS-01, ¹6\n");
	cout << "ââåäèòå êîëè÷åñòâî ñåêóíä k:";//Ââåäåííÿ çíà÷åííÿ k
	cin >> k;
	h = k / 3600;// Çíàõîäæåííÿ ãîäèí
	m = (k % 3600) / 60;// Çíàõîäæåííÿ õâèëèí
	cout << "÷àñîâ:" << h <<" "<< "ìèíóò:" << m << endl;// Âèâåäåííÿ ðåçóëüòàòó
	cin.get();
}
