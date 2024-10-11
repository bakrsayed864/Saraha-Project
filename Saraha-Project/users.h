#pragma once
#include<vector>
#include<string>
#include<deque>
#include<fstream>
using namespace::System;
struct Contacts
{
	std::string name;
	int id;

};
class users
{
	public:
		int IDuser;
		std::string name;
		std::vector<Contacts>Contacts;
		std::deque<std::string>users::Messages;
		void add_contact(int id);
		bool Send_message(std::string id);
		void undolast_mes();
		bool Search_contact(int id,int owner);
		void viewAllContacts(int id);
		void viewAllSentMessages();
		void See_specific_Message(std::string name);
		void put_messgae_in_fav();
		void see_fav_messages();
		void Remove_old_fav_message();
		void undoMessage(int id);

		users();
		~users();

		public:
		std::string password;
		
		



};


