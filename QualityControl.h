#include "Advertisement.h"
#include "Feedback.h"

class QualityControl
{
private:

	char userName[20];
	char userID[10];
	char password[10];
	bool Approvementstatus;
private:
	QualityControl();
	QualityControl(const char IuserName[]);
	void login(const char IuserID, const char Ipassword);
	void viewAdvertisement(Advertisement*view);
	void ApproveAdvertisement();
	void sendConfirmation(seller*seller1);
	void veiwFeedback(Feedback*Feed1);
	~QualityControl();
};

