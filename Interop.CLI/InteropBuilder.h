#pragma once
#include "..\Interop.Lib\InteropBuilder.h"

using namespace System;

namespace Interop {
	namespace CLI {
		ref class InteropSettings;

		public ref class InteropBuilder
		{
			Interop::System::InteropBuilder * builder;

		public:
			InteropBuilder(void);
			String^ build(InteropSettings^ settings);
		};
	}
}
