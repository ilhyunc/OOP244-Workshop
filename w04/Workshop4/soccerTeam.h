#ifndef SDDS_SOCCERTEAM_H_
#define SDDS_SOCCERTEAM_H_

#include "Tournament.h"

#include <iostream>


namespace sdds {

	const int MAX_FOUL = 4;

	struct SoccerTeam
	{
		char m_teamName[41];// a statically allocated Cstring with size 41. Remember, name could be 
							//maximum 40 characters long and 1 byte is for the null byte.
		int m_noFouls;//number of fouls, it can be zero or more but cannot be a negative number
		double m_fines;//it can be equal to and more than zero.
		int m_goals;//can be zero or more

		void setTeam(const SoccerTeam& team);
		void setName(const char* tname);
		void setFine(double fines, int foul);
		void setEmpty();
		bool isEmpty() const;
		void calFines();
		int fouls() const;
		SoccerTeam();
		SoccerTeam(const char* tname, double fines, int foul);
		std::ostream& display()const;

	};


}
#endif // ! SDDS_SOCCERTEAM_H_