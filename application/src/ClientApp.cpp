#include <for_client/Hanzel.h>

class ClientApplication : public Hanzel::Application
{
  public:
    ClientApplication()
    {
    }

    ~ClientApplication()
    {
    }
    void run()
    {
        while (true)
            ;
    }
};

Hanzel::Application* Hanzel::createApplication()
{
    return new ClientApplication();
}