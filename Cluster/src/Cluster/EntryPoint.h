#pragma once

#ifdef CL_PLATFORM_WINDOWS

extern Cluster::Application* Cluster::CreateApplication();

int main(int argc, char** argv) {

	printf("Cluster Engine\n");
	auto app = Cluster::CreateApplication();
	app->Run();
	delete app;
}

#endif