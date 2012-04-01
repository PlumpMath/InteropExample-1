#pragma once
#include "builder.h"
#include <string>

namespace Interop {
	namespace System {
		class InteropBuilder :
			public Builder
		{
		public:
			InteropBuilder(void);
			~InteropBuilder(void);

			virtual const std::string & build (const Settings * settings) const;
		};
	}
}