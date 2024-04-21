#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hanzel::Application* Hanzel::createApplication();

int main(int argc, char** argv)
{
    auto app = Hanzel::createApplication();
    Hanzel::Log::init();
    HZ_CORE_WARN("Hanzel Engine Started!");
    HZ_INFO("Hanzel Client Started!");
    app->run();
    delete app;
    return 0;
}

#endif