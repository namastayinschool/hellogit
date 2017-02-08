// CLASS DEFINITION

#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <string>

class Candidate
{
	private:
		std::string candName;
		int numVotes;

	public:
		//default constructor
		Candidate();

		// overload constructor
		Candidate(std::string, int);

		//accessors
		std::string getCandName();
		int getNumVotes();

		//mutators
		void setCandName(std::string cand);
		void setNUmVotes(int votes);

};
#endif