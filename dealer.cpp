#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
#include"dealer.h"
using namespace std;

void Dealer::playd(Deck& fdeck) {
	//������ ����� ����� ���� �� ������ 17 ��� ������
	//����  ���� ������ 17
	do {
		// ����� ����� 
		takeOneCard(fdeck);
	} while (calculateScore() < 17);
	printHand();
	cout << "dialer summ = " << calculateScore() << endl; cout << endl;

}