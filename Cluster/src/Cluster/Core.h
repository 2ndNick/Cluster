#pragma once

#ifdef CL_PLATFORM_WINDOWS
	#ifdef CL_BUILD_DLL
		#define CLUSTER_API __declspec(dllexport)
	#else
		#define CLUSTER_API __declspec(dllimport)

	#endif
#else
	#error Cluster only supports Windows!
#endif