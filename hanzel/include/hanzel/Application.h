#pragma once

#include "hanzel/Core.h"
namespace Hanzel
{
class HZ_API Application
{
  public:
    Application();
    ~Application();
    void run();
    void startUp();
    void shutdown();
};
// To be define somewhere else
Application* createApplication();
} // namespace Hanzel