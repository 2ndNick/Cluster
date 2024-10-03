#include <Cluster.h>

class Sandbox : public Cluster::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Cluster::Application* Cluster::CreateApplication() {
	return new Sandbox();
}