#include <hanzel/Application.h>
#include <iostream>

namespace Hanzel
{
Application::Application()
{
}
Application::~Application()
{
}
void Application::run()
{
    while (true)
    {
    }
}

void Application::shutdown()
{
}

void Application::startUp()
{
    std::cout << "hello" << std::endl;
}

} // namespace Hanzel
