#include <hanzel/Core.h>
#include <spdlog/spdlog.h>
#include <memory.h>

namespace Hanzel
{
class HZ_API Log
{
  public:
    static void init();

    inline static std::shared_ptr<spdlog::logger>& getCoreLogger()
    {
        return coreLogger;
    }
    inline static std::shared_ptr<spdlog::logger>& getClientLogger()
    {
        return clientLogger;
    }

  private:
    static std::shared_ptr<spdlog::logger> coreLogger;
    static std::shared_ptr<spdlog::logger> clientLogger;
};

} // namespace Hanzel

#define HZ_CORE_TRACE(...) ::Hanzel::Log::getCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...) ::Hanzel::Log::getCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...) ::Hanzel::Log::getCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::Hanzel::Log::getCoreLogger()->error(__VA_ARGS__)

#define HZ_TRACE(...) ::Hanzel::Log::getClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...) ::Hanzel::Log::getClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...) ::Hanzel::Log::getClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...) ::Hanzel::Log::getClientLogger()->error(__VA_ARGS__)