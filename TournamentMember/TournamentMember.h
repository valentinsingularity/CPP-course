/*
320142
a6_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <string>

class TournamentMember{
	protected:
		std::string first_name;
		std::string last_name;
		std::string birth_date;
		static std::string location;
		std::string nationality;
		int fame;
	public:
		TournamentMember();
		TournamentMember(const std::string nfi_n,const std::string nla_n,const std::string nbi_d,
		const std::string n_loc,const std::string n_nat,int n_fame);
		TournamentMember(const TournamentMember&);
		~TournamentMember();
		
		void setFirstName(const std::string& newFirstName);
		void setLastName(const std::string& newLastName);
		void setBirthDate(const std::string& newBirthDate);
		void setNationality(const std::string& newNationality);
		void setFame(int newFame);
		const std::string& getFirstName();
		const std::string& getLastName();
		const std::string& getBirthDate();
		const std::string& getNationality();
		int getFame();
		const std::string& getLocation();
		
		static void changeLocation(const std::string&);
		void print();
		 
};

