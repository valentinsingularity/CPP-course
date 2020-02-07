/*
320142
a5_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

class Creature {
	public:
		Creature();  
		~Creature();
		void run() const;

	protected:
		int distance;
};
 
class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();
		void hover() const;

	protected:
		int distFactor;
};

class Dragon : public Creature {
	public:
		Dragon();
		~Dragon();
		void fly() const;
		
	protected:
	    int fly_distance;	
};

class Werewolf : public Creature {
	public:
		Werewolf();
		~Werewolf();
		void hunger() const;
		
	protected:
		int hungerFactor;
};
