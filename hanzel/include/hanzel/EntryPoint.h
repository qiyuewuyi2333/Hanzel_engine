#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hanzel::Application* Hanzel::createApplication();

int main(int argc, char** argv)
{
    auto app = Hanzel::createApplication();
    app->run();
    delete app;
    return 0;
}

#endif