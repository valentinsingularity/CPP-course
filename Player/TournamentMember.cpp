/*
320142
a6_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"
using namespace std;

std::string TournamentMember::location;		
		
TournamentMember::TournamentMember(){
	cout<<"The default constructor of TournamentMember is running."<<endl;
	cout<<"The constructor is running."<<endl;
	first_name="Member";
    last_name="Tournament";
    birth_date="1920.01.01";
    changeLocation("London");
    nationality="International";
 	fame=0;
}

TournamentMember::TournamentMember(std::string nfi_n,std::string nla_n,std::string nbi_d,
  std::string n_loc,std::string n_nat,int n_fame){
	cout<<"The constructor of TournamentMember is running."<<endl;
	first_name=nfi_n;
    last_name=nla_n;
    birth_date=nbi_d;
    changeLocation(n_loc);
    nationality=n_nat;
 	fame=n_fame;
}

TournamentMember::TournamentMember(const TournamentMember& src){
	cout<<"The copy constructor of TournamentMember is running."<<endl;
	first_name=src.first_name;
    last_name=src.last_name;
    birth_date=src.birth_date;
    nationality=src.nationality;
 	fame=src.fame;
}
		
TournamentMember::~TournamentMember(){
	cout<<"The destructor of TournamentMember is running."<<endl;
}
		
inline void TournamentMember::setFirstName(const std::string& newFirstName){
	first_name=newFirstName;
}

inline void TournamentMember::setLastName(const std::string& newLastName){
	last_name=newLastName;
}

inline void TournamentMember::setBirthDate(const std::string& newBirthDate){
	birth_date=newBirthDate;
}

inline void TournamentMember::setNationality(const std::string& newNationality){
	nationality=newNationality;
}

inline void TournamentMember::setFame(int newFame){
	fame=newFame;
}

inline const std::string& TournamentMember::getFirstName(){
	return first_name;
}

inline const std::string& TournamentMember::getLastName(){
	return last_name;
}

inline const std::string& TournamentMember::getBirthDate(){
	return birth_date;
}

inline const std::string& TournamentMember::getNationality(){
	return nationality;
}

inline int TournamentMember::getFame(){
	return fame;
}

inline const std::string& TournamentMember::getLocation(){
	return location;
}
		
void TournamentMember::changeLocation(const std::string& newlocation){
	location=newlocation;
}
		
void TournamentMember::print() {
	cout<<"First Name: "<<first_name<<endl;
	cout<<"Last Name: "<<last_name<<endl;
	cout<<"Birth Date: "<<birth_date<<endl;
	cout<<"Nationality: "<<nationality<<endl;
	cout<<"Fame: "<<fame<<endl;
	cout<<"Location: "<<location<<endl;
	cout<<endl;
}

Player::Player(const std::string nfi_n,const std::string nla_n,const std::string nbi_d,const std::string n_loc,const std::string n_nat,
		 int n_fame,int n_number,const std::string n_position,int n_nr_goals,const std::string n_foot) : 
		 TournamentMember(nfi_n,nla_n,nbi_d,n_loc,n_nat,n_fame) {
		 	cout<<"The constructor of Player is running."<<endl;
		 	number=n_number;
		 	position=n_position;
		 	nr_goals=n_nr_goals;
		 	foot=n_foot;
		 }
		 
Player::Player(const Player& src) : TournamentMember(src.first_name,src.last_name,src.birth_date,src.location,src.nationality,src.fame) {
	cout<<"The copy constructor of Player is running."<<endl;
	number=src.number;
	position=src.position;
	nr_goals=src.nr_goals;
	foot=src.foot;
}

Player::~Player(){
	cout<<"The destructor of Player is running."<<endl;
}

inline void Player::setNumber(int newNumber){
	number=newNumber;
}

inline void Player::setPosition(const std::string& newPosition){
	position=newPosition;
}
inline void Player::setFoot(std::string newFoot){
	foot=newFoot;
}

inline int Player::getNumber(){
	return number;
}

inline const std::string& Player::getPosition(){
	return position;
}

inline int Player::getNr_goals(){
	return nr_goals;
}

inline std::string Player::getFoot(){
	return foot;
}

void Player::print() {
	cout<<"First Name: "<<first_name<<endl;
	cout<<"Last Name: "<<last_name<<endl;
	cout<<"Birth Date: "<<birth_date<<endl;
	cout<<"Nationality: "<<nationality<<endl;
	cout<<"Fame: "<<fame<<endl;
	cout<<"Location: "<<location<<endl;
	cout<<"Number: "<<number<<endl;
	cout<<"Position: "<<position<<endl;
	cout<<"Number of goals scored: "<<nr_goals<<endl;
	cout<<"Foot: "<<foot<<endl;
	cout<<endl;
}

void Player::incrementNrGoals(){
	nr_goals++;
}



