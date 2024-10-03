#pragma once

#include "Core.h"

namespace Cluster {

	class CLUSTER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	// To be defined in CLIENT
	Application* CreateApplication();

}