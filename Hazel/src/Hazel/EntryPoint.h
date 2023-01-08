#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// 这样我们把main函数移动引擎内部

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
