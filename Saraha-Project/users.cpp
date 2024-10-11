#include "users.h"
#include <iostream>
#include <fstream>
using namespace std;
users::users() {

}


users::~users() {



}
bool users::Send_message(std::string id) {

	return false;
}
void users::undoMessage(int id) {
	std::string name = "sendingMessaging//" + std::to_string(id) + ".txt";
	std::ifstream file(name);
	std::string line;
	while (getline(file, line)) {
		Messages.push_back(line);
	}
	file.clear();
	file.close();
	std::fstream file2(name, std:: ios::out |std::ios::trunc);
	if (file2.is_open()) {
		for (int i = 0; i < Messages.size() - 1; i++) {
			file2 << Messages.front() << "\n";
			Messages.pop_front();
		}
	}
	file2.close();

}
bool users::Search_contact(int id,int owner) {
	std::string strid = std::to_string(id);

	std::string name = "userContacts//" + std::to_string(owner)+ ".txt";
	std::ifstream file(name);
	std::string line;
	while (getline(file,line)) {
		if (line == strid) {
			file.close();
			return true;
		}
	}
	

	file.close();
	return false;
}
void users::viewAllContacts(int id){
	std::string strid = std::to_string(id);
	std::string name = "userContacts//" + strid + ".txt";


}

















// list array



