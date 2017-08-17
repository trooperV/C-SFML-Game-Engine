#ifndef GAME_STATE_H_INCLUDED
#define GAME_STATE_H_INCLUDED
#include "Application.h"
//class Application:
namespace State {
	class  Game_State
	{
	public:
		Game_State(Application& application);
		virtual void input() = 0;
		virtual void update(float dt) = 0;
		virtual void draw() = 0;
		
		//~Game_State();

	protected:
		Application* m_p_application;
	};
}

#endif
