#include "seller.h"

class Feedback
{
private:
	char FeedbackID[10];
	char FeedbackDescription[100];

public:
	void Feedback();
	void GenerateFeedbackID();
	void RequestFeedback(seller*seller1);
	void storeFeedback();
	~Feedback();

};

