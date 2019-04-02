#ifndef __GLOBAL_H__
#define __GLOBAL_H__

class GlobalClass
{
	private:
		bool is_debug_messages_enabled;

	public:
		GlobalClass();
		~GlobalClass();
		void ShowTestBranchInfo();
		void EnableDebugMessages();
		void DisableDebugMessages();
		void deneme();

};

#endif
