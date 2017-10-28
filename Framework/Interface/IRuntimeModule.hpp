#pragma once
#include "Interface.hpp"
namespace My 
{
        Interface IRuntimeModule // define Interface class
        {
public:
        //定义为纯虚函数的目的是强制派生类实现这些方法。可以有效避免遗漏。
        virtual ~IRuntimeModule() {};
        virtual int Initialize() = 0;
        virtual void Finalize() = 0;//use it to finnalize
        virtual void Tick() = 0;//every time this module is called,the update run one time
        };
}