#pragma once
#include "IApplication.hpp"

namespace My
{
        class BaseApplication : implements IApplication
        {
        public:
                virtual int Initialize();
                virtual void Finalize();              
                virtual void Tick();// One cycle of the main loop
                virtual bool IsQuit();
        protected:             
                bool m_bQuit; // Flag if need quit the main loop of the application
        };
}