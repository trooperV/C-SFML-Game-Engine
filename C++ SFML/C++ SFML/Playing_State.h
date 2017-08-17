#ifndef PLAYING_STATE_H_INCLUDED
#define PLAYING_STATE_H_INCLUDED
#include "Game_State.h"

namespace State {
	class Playing_State : public Game_State
	{
	public:
		Playing_State(Application &application);
		//~Playing_State();

		void input() override;
		void update(float dt) override;
		void draw() override;

	private:

	};
}

#endif