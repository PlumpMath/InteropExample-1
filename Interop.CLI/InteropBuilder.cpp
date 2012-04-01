#include "stdafx.h"
#include <msclr\marshal_cppstd.h>
#include "InteropBuilder.h"
#include "InteropSettings.h"
#include <string>

using namespace System;

namespace Interop {
	namespace CLI {
		using namespace msclr::interop;
		InteropBuilder::InteropBuilder(void)
		{
			builder = new Interop::System::InteropBuilder();
		}


		String^ InteropBuilder::build(InteropSettings^ settings)
		{		
			return settings->Name;
		}
	}
}