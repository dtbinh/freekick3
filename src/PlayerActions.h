#ifndef PLAYERACTIONS_H
#define PLAYERACTIONS_H

#include "Distance.h"

class Match;
class Player;

class PlayerAction {
	public:
		virtual ~PlayerAction() { }
		virtual void applyPlayerAction(Match& match, Player& p, double time) = 0;
};

class IdlePA : public PlayerAction {
	public:
		void applyPlayerAction(Match& match, Player& p, double time);
};

class RunToPA : public PlayerAction {
	public:
		RunToPA(const AbsVector3& v);
		void applyPlayerAction(Match& match, Player& p, double time);
	private:
		AbsVector3 mDiff;
};

#endif

