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
		void GeneralTestRoutines();
		void EnableDebugMessages();
		void DisableDebugMessages();
		void TestSendsToUnittest();
		void deneme();

};

#endif
