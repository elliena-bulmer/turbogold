#include "maintests.h"


void MainTests::testGetProofOfWorkReward()
{

	QVERIFY(GetProofOfWorkReward(1, 2) == 50000000 + 2);

//	QVERIFY(GetProofOfWorkReward(22315, 2) == 8 + 2);

	//QVERIFY(GetProofOfWorkReward(224000, 2) == 2 + 2);

}

void MainTests::testGetProofOfStakeReward() {
	QVERIFY(1==6);
}
