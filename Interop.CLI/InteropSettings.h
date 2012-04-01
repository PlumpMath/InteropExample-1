#pragma once


namespace Interop {
	using namespace System;
	namespace System {
		class InteropSettings;
	}
	namespace CLI {
		public ref class InteropSettings
		{
		private:
			System::InteropSettings * settings;
		public:
			InteropSettings(void);
			virtual property String ^ Name {String ^ get(); void set(String^);}
		};
	}
}
