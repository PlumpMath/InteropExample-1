#include "stdafx.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "InteropSettings.h"
#include "..\Interop.Lib\Settings.h"
#include "..\Interop.Lib\InteropSettings.h"
//#include <marshal.h>

namespace Interop {
	namespace CLI {
		using namespace System;
		using namespace msclr::interop;

		InteropSettings::InteropSettings(void)
		{
			this->settings = new System::InteropSettings();
		}
		
		String ^ InteropSettings::Name::get () {
			return marshal_as<String^>(this->settings->getName());
		}

		void InteropSettings::Name::set (String ^ value) {
			this->settings->setName(marshal_as<std::string>(value));
		}
	}
}
