#include "QualityControl.h"
#include <cstring>

//it21375682

QualityControl::QualityControl() {
	strcpy(userName,"");
	strcpy(password,"");
	Approvementstatus = false;
}

QualityControl::QualityControl(const char IuserName[]) {
	strcpy(username, "IuserName");
	
}
QualityControl::login(const char IuserID[],const char Ipassword[]) {

}

QualityControl::viewAdvertisement(Adverstisement*view){

}

QualityControl::ApproveAdvertisement() {

}

QualityControl::sendConfirmation(seller*seller1) {

}

QualityControl::veiwFeedback(Feedback*Feed1) {

}

QualityControl::~QualityControl() {

}