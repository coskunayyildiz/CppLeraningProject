#ifndef __GLOBAL_H__
#define __GLOBAL_H__

class GlobalClass
{
	private:
		bool is_debug_messages_enabled;

	public:
		GlobalClass();
		~GlobalClass();
		void EnableDebugMessages();
		void DisableDebugMessages();

};

#endif
